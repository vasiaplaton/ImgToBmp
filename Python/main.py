from tkinter import *  # отрисовка
from PIL import Image  # обработка изображений
import argparse  # парсер аргуметнов
import os

invert = False
# ширина физического экрана
WIDTH = 200  # 0-255( ширина - 1 байт)
# высота физического экрана
HEIGHT = 200  # 0-255 (ширина - 1 байт)
# ширина текста
HEIGHT_TXT = 100
# ширина виртуального экрана
WIDTH_TK = WIDTH * 2 * 3
# высота виртуального экрана
HEIGHT_TK = HEIGHT * 2 + HEIGHT_TXT
# цвет фона
BACKGROUND_COLOR = "White"
# цвет вкл.пикселя
PIX_COLOR = "Black"
STD_THRESHOLD = 20
# strings
NON_COMPRESSED = "Несжатое изображение\nотрисовано из несжатого массива"
STRIP_COMPRESSED = "Изображение сжато методом полос\nотрисовано из сжатого массива"
RLE_COMPRESSED = "Изображение сжато методом длин серий\nотрисованно из сжатого массива"
# путь к файлу
STD_PATH = r"images/watchface1.jpg"
STD_DIR = "files/"  # стандартная директория для вывода файлов
# парсер аргуметнов
parser = argparse.ArgumentParser()
# режим скрипта - никаких окошек
parser.add_argument("--script_mode", help="if set 1, program won't draw unzipped bitmap, else draw", type=int,
                    choices=[0, 1], default=0)
# путь к картинке
parser.add_argument("--img_path", help="path to image, std value:" + STD_PATH, type=str, default=STD_PATH)
# директория для вывода файлов
parser.add_argument("--out_dir", help="path to out dir, std value:"
                                      + STD_DIR, type=str, default=STD_DIR)
# порог срабатывания
parser.add_argument("--threshold", help="threshold for pixel, 0-255, std value:"
                                        + str(STD_THRESHOLD), type=int, default=STD_THRESHOLD)
# канал
parser.add_argument("--channel", help="channel for pixel, R - 0, G - 1, B - 2, std value:"
                                      + str(1), type=int, default=1, choices=[0, 1, 2])
args = parser.parse_args()  # парсим
SCRIPT_MODE = args.script_mode  # режим скрипта ( без отрисовки)
PATH = args.img_path  # путь к картинке
DIR = args.out_dir  # путь к директории
THRESHOLD = args.threshold   # порог
if THRESHOLD > 255 or THRESHOLD < 0:
    print("ERROR: Invalid threshold value, set to standard value:" + str(STD_THRESHOLD))
    THRESHOLD = STD_THRESHOLD
channel = args.channel   # канал

if not SCRIPT_MODE:
    root = Tk()
    # Устанавливаем название окна
    root.title("Draw Unzipped Bitmap")
    # создаем экземпляр класса Canvas (его мы еще будем использовать) и заливаем все зеленым цветом
    c = Canvas(root, width=WIDTH_TK, height=HEIGHT_TK, bg=BACKGROUND_COLOR)
    c.grid()
    # Наводим фокус на Canvas, чтобы мы могли ловить нажатия клавиш
    c.focus_set()
else:
    root = None
    c = None


class Pixel:  # рисуем пиксель
    def __init__(self, x, y, color):  # передаем координаты и цвет(True - Черный False - Белый)
        x = x * 2  # виртуальный экран больше реального в 2 раза, так что умножаем координаты на 2
        y = y * 2
        if color:  # если цвет черный
            c.create_rectangle(x, y, x + 1, y + 1, outline=PIX_COLOR)
        else:  # если цвет белый
            c.create_rectangle(x, y, x + 1, y + 1, outline=BACKGROUND_COLOR, fill=BACKGROUND_COLOR)


def clear_display():  # функция для очистки дисплея
    c.create_rectangle(0, 0, WIDTH_TK, HEIGHT_TK, outline=BACKGROUND_COLOR, fill=BACKGROUND_COLOR)


class Bitmap:  # базовый класс, тут реализуем функции общие для остальных классов, в остальных классах отнаследуемся 
    # от него и реализуем две функции - сжатия и отрисовки
    def __init__(self, path_to_file, w, h):
        self.path = path_to_file  # путь к файлу изображения
        self.width = w  # ширина
        self.height = h  # высота
        self.bitmap = []  # массив байтов в который мы записываем сжатый массив
        self.pixels = []  # массив пикселей в изображении
        im = Image.open(self.path)  # открываем изображение
        self.px = im.load()  # массив пикселей

    def get_length(self):  # геттер для длины
        return len(self.bitmap)

    def test_bitmap(self):  # проверка что значения не выходят за границы значений для одного байта
        for byte in self.bitmap:
            if byte > 255 or byte < 0:  # если значение больше 255 или меньше 0 значит оно не уместится в 1 байт
                print("Test Failed, some data cant be byte")  # отладка
                raise ValueError  # валимся с ошибкой
        print("info: Test OK")  # если не свалились значит все нормально

    def get_byte_list(self, name_array):  # делаем строку для всавки в СИ
        string = "const unsigned char " + name_array + "[" + str(len(self.bitmap)) + "] = { "  # начало
        # строки(объявляем массив с размером, открываем скобку)
        prev_length = 0  # переменная для длины строки
        for byte in self.bitmap:  # цикл для всех байтов в Bitmap'e
            string += hex(byte).upper() + ", "  # добавляем байт в строку
            if len(string) - prev_length > 70:  # если длина одной строки больше 70 символом
                prev_length = len(string)  # сохраняем предыдущию длину
                string += '\n'  # переходим на новую
        string += " };"  # заканчиваем строку
        return string  # возвращаем строку

    def write_file(self, name_array, path):  # метод для получения СИ файла
        string = self.get_byte_list(name_array)  # получаем строку
        if not os.path.exists(DIR):
            os.mkdir(DIR)
        f = open(path, 'w+')  # открываем файл
        f.write(string)  # пишем
        f.close()  # закрываем

    def get_pix_color(self, x, y):
        pixel = self.px[x, y]  # берем цвет пикселя
        try:
            pixel = pixel[channel]  # канал R - 0 G - 1 B - 2
        except TypeError:
            pixel = pixel  # если канал один
        if pixel > THRESHOLD:  # если пиксель больше порога 
            color = True  # цвет черный
        else:
            color = False  # иначе белый
        if not invert:  # если надо инвертировать
            color = not color  # инвертируем
        return color  # возвращаем цвет


class Bitmap0(Bitmap):
    def create(self):
        height_im_in = self.height  # получаем высоту
        width_im_in = self.width  # получаем ширину
        byte_list = []  # массив для хранения значений bitmap'a
        byte1 = 0x00  # байт для промежуточных оперций
        for j in range(height_im_in):  # цикл для стлобцов
            for i in range(width_im_in):  # цикл для строк
                if self.get_pix_color(i, j):  # проверяем по порогу
                    byte1 = byte1 | (0x80 >> (i % 8))  # берем число 0х80 - 10000000, делаем побитовый
                    # сдвиг вправо на  текущей бит(остаток от деления на 8 координаты x и делаем ИЛИ. Если была единица
                    # останется 1, если был 0, то взасимисоти от цвета пикселя стнает либо 1 либо 0
                if i % 8 == 7:  # если байт закончился тогда
                    byte_list.append(byte1)  # добавляем его в массив
                    byte1 = 0x00  # обнолуяем
            if width_im_in % 8 != 0:  # если в конце есть неполный байт
                byte_list.append(byte1)  # добавляем
                byte1 = 0x00  # обнуляем
        self.bitmap = byte_list
        return byte_list  # возвращаем результат

    def paint_bitmap(self, x, y):
        ptr = self.bitmap  # получаем bitmap
        w = self.width  # получаем ширину
        h = self.height  # получаем высоту
        bpw = w // 8  # количество байт в одной "строке" изображения.
        if w % 8 != 0:
            bpw += 1  # если ширина делится с остатком, значит в конце есть еще один байт, заполненый не до конца
        for j in range(h):  # начинаем проходиться по строкам в цикле
            bb = 0  # переменная для коородинаты x при рисовании, обнуляем на новой строке
            for i in range(bpw):  # проходимся по байтам в строке
                for k in range(8):  # проходимя по битам в каждом байте, зная что изображение кодируестя так - 8
                    # пикселей по горизонтали - один байт

                    bb += 1  # прибавляем к координате x единицу
                    if ((ptr[j * bpw + i]) & (0x80 >> k)) != 0:
                        # берем из bitmap нужный байт по формуле строка * кол во байт в ней +
                        # номер байта в строке
                        # теперь нужно взять из байт нужный бит, для этого мы побитово складываем (И) его с числом //
                        # 0x80 - 10000000 сдивгаем влево на k (0-7) и проверяем равен ли результат нулю // если равен
                        # значит на месте k в байте j*bpw+i был 0, если нет - 1. Если не рамен 0, рисуем пикслель
                        Pixel(x + bb, y + j, True)  # рисуем пиксель


class Bitmap1(Bitmap):
    def create(self):
        height_im_in = self.height  # получаем высоту
        width_im_in = self.width  # получаем ширину
        byte_list = []  # масссив для хранения байтов
        prev_black = "False"  # переменная для хранения состояния предыдущего пикселя
        length_black = 1  # переменная для хранения длины черной полоски
        black_start = 0  # переменная для x координаты начала
        for j in range(1, height_im_in):  # цикл для стлобцов
            for i in range(1, width_im_in):  # цикл для строк
                if self.get_pix_color(i, j):  # если больше порога
                    if not prev_black:  # если предыдущий пиксель был не черный
                        prev_black = True  # этот черный
                        black_start = i  # начало полосы
                    else:  # если же он был черный
                        length_black += 1  # тогда удлиняем полосу
                else:  # если пиксель все таки белый
                    if prev_black:  # а предыдущий был черный
                        byte_list.append(j)  # добавляем в лист y координату
                        byte_list.append(black_start)  # координату начала черной полосы
                        byte_list.append(length_black)  # длину черной полосы
                        prev_black = False  # этот белый
                        length_black = 1  # длину "обнуляем"
        self.bitmap = byte_list  # пишем в класс байт лист
        return self.bitmap  # возвращем получившийся лист

    def paint_bitmap(self, x_st, y_st):
        counter = 1  # счетчик равен 1
        for _ in self.bitmap:  # перебираем байты
            if (counter % 3) == 0:  # если мы на счетчике кратному трем
                y = self.bitmap[counter - 3]  # получаем y координату
                x_start = self.bitmap[counter - 2]  # координату начала полосы
                length = self.bitmap[counter - 1]  # и длину полосы
                for i in range(length):  # цикл для отрисовки полосы
                    Pixel(x_st + x_start + i, y_st + y, True)  # рисуем пиксель
            counter += 1  # прибавляем единцу к счетчику


class Bitmap2(Bitmap0):
    def create(self):
        Bitmap0.create(self)  # создаем несжатый битмап
        prev_byte = self.bitmap[0]  # пердыдущий байт = первому байту
        length = 0  # длина повторяющийся части( при первом проходе начинаем с нуля
        buffer_bitmap = []  # тут будем хранить сжатую последовательность
        self.bitmap.append("EOF")  # добавляем последний элемент неравный никакому другому
        for byte in self.bitmap:  # проходимся по байтами несжатого массива
            if prev_byte == byte and length < 255:  # если предыдущий байт равен этому же
                #  и длина меньше 255 ( второе условие нужно что бы при длине полосы больше 255 не привысить значение
                #  одного байта, вместо этого мы разрываем полосу.
                length += 1  # увеличиваем длину
            else:  # если же полоса одинаковых байт закончилась или же надо разорвать полосу
                buffer_bitmap.append(length)  # пишем длину(кол-во повторяющихся байтов)
                buffer_bitmap.append(prev_byte)  # пишем байт
                length = 1  # длина - единица
            prev_byte = byte  # предыдущий байт равен этому
        self.bitmap = buffer_bitmap  # цикл закончился, записали buffer в оснвной bitmap

    def paint_bitmap(self, x, y):  # метод для разжатия и рисования битмапа
        buffer_bitmap = []  # заводим буферный массив для распакного битмапа
        for i in range(0, len(self.bitmap)):
            if i % 2 == 0:  # условие будет истинно при 0, 2, 4, 6, 2n
                byte = self.bitmap[i + 1]  # для 1'ого прохода берем 1 байт массива как повторяющийся байт
                length = self.bitmap[i]  # 0 байт как кол-во повторенний
                for _ in range(length):  # цикл выполнится столько раз сколько повторяется байт
                    buffer_bitmap.append(byte)  # запишем нужное кол во раз наш байт в массив распканного байта
        rle_bitmap = self.bitmap  # сохраним сжатую версию
        self.bitmap = buffer_bitmap  # запишем несжатую версию для её метода рисования
        Bitmap0.paint_bitmap(self, x, y)  # нарисуем
        self.bitmap = rle_bitmap  # запишем обратно сжатую


# создаем экземпляры
non_comp = Bitmap0(PATH, WIDTH, HEIGHT)  # не сжатый bitmap
strip_comp = Bitmap1(PATH, WIDTH, HEIGHT)  # сжатие(метод полос)
rle_comp = Bitmap2(PATH, WIDTH, HEIGHT)  # RLE сжатие
# создаем массивы байтов
non_comp.create()
strip_comp.create()
rle_comp.create()
# проверяем значения
non_comp.test_bitmap()
strip_comp.test_bitmap()
rle_comp.test_bitmap()
# отрисовываем
if not SCRIPT_MODE:
    non_comp.paint_bitmap(0, HEIGHT_TXT / 2)
    strip_comp.paint_bitmap(WIDTH, HEIGHT_TXT / 2)
    rle_comp.paint_bitmap(WIDTH * 2, HEIGHT_TXT / 2)
    # отрисовываем текст над рисунками
    c.create_text(5, 15, text=NON_COMPRESSED, justify=LEFT, anchor=NW, font="Verdana 12")
    c.create_text(WIDTH_TK / 3 + 5, 15, text=STRIP_COMPRESSED, justify=LEFT, anchor=NW, font="Verdana 12")
    c.create_text(WIDTH_TK / 3 * 2 + 5, 15, text=RLE_COMPRESSED, justify=LEFT, anchor=NW, font="Verdana 12")
# пишем в файл
non_comp.write_file("non_comp", DIR + "non.c")
strip_comp.write_file("strip_comp", DIR + "strip.c")
rle_comp.write_file("rle_comp", DIR + "rle.c")
# сравниваем размеры
print("info: non compressed", non_comp.get_length())
print("info: compressed, strip method", strip_comp.get_length())
print("info: compressed, rle method", rle_comp.get_length())

if not SCRIPT_MODE:
    root.mainloop()
