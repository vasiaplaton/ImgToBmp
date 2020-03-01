#include "Drawing.h"
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <string.h> 
#include <errno.h> 
#include <X11/Xlib.h> 
/* ****DISPLAY callback functions, rewrite functions to use own display***** */
/* Функции которые обращаются к дисплею - таких 4: Paint_DrawPixel, init, event_handler, close_display 
   обязательна к реализации для работы только Paint_DrawPixel. В данном примере используем Xlib для отрисовки*/
Display *d;
Window w; 
XEvent e; 
int s; 
void Paint_DrawPixel(int x, int y, int colored) { // pixel callback
	if (colored == 0) {
		XDrawPoint(d, w, DefaultGC( d, s ), x, y); // draw black pixel
	}
	if (colored == 1) 
	{
		XClearArea(d, w, x, y, 1, 1, 0); // draw white pixel
	}
}
void init( void ) // display init callcback
{ 
   int s; 
   // display open
   if( ( d = XOpenDisplay( getenv("DISPLAY" ) ) ) == NULL ) {  
      printf( "Can't connect X server: %s\n", strerror( errno ) ); 
      exit( 1 ); 
   } 
   s = DefaultScreen( d ); 
   // create window
   w = XCreateSimpleWindow( d, RootWindow( d, s ), 
                            10, 10, WIDTH_SCR, HEIGHT_SCR, 1, 
                            BlackPixel( d, s ), WhitePixel( d, s ) );
    // events 
    XSelectInput( d, w, ExposureMask | KeyPressMask ); 
    // window to display
	XMapWindow( d, w );                               
	XNextEvent( d, &e );
    // clear display 
	fill_display(1);
}
int event_handler (void) // this function need to be called loop cycle 
{
    		
	if( e.type == Expose ) { 
		XNextEvent( d, &e );
	}
    if( e.type == KeyPress ) return 1;
    else return 0;
}
int close_display ( void) // close display 
{
    XDestroyWindow(d, w);
	XCloseDisplay( d ); 
	return 0; 
}
/*** END OF CALLBACKS FUNCTIONS ****/
/* Фукции которые обращаются к дисплею закончились*/
void  Paint_DrawLine(int x0, int y0, int x1, int y1, int colored) {
 
  int dx = abs(x1-x0), sx = x0<x1 ? 1 : -1;
  int dy = abs(y1-y0), sy = y0<y1 ? 1 : -1; 
  int err = (dx>dy ? dx : -dy)/2, e2;
 
  for(;;){
    Paint_DrawPixel(x0, y0 , colored);
    if (x0==x1 && y0==y1) break;
    e2 = err;
    if (e2 >-dx) { err -= dy; x0 += sx; }
    if (e2 < dy) { err += dx; y0 += sy; }
  }
}

void Paint_DrawVerticalLine(int x, int y, int line_height, int colored) {
    int i;
    for (i = y; i < y + line_height; i++) {
        Paint_DrawPixel(x, i, colored);
    }
}

void Paint_DrawHorizontalLine(int x, int y, int line_width, int colored) {
    int i;
    for (i = x; i < x + line_width; i++) {
        Paint_DrawPixel(i, y, colored);
    }
}

void Paint_DrawRectangle(int x0, int y0, int x1, int y1, int colored) {
    int min_x, min_y, max_x, max_y;
    min_x = x1 > x0 ? x0 : x1;
    max_x = x1 > x0 ? x1 : x0;
    min_y = y1 > y0 ? y0 : y1;
    max_y = y1 > y0 ? y1 : y0;
    
    Paint_DrawHorizontalLine(min_x, min_y, max_x - min_x + 1, colored);
    Paint_DrawHorizontalLine(min_x, max_y, max_x - min_x + 1, colored);
    Paint_DrawVerticalLine(min_x, min_y, max_y - min_y + 1, colored);
    Paint_DrawVerticalLine(max_x, min_y, max_y - min_y + 1, colored);
}
void Paint_DrawFilledRectangle(int x0, int y0, int x1, int y1, int colored) {
    int min_x, min_y, max_x, max_y;
    int i;
    min_x = x1 > x0 ? x0 : x1;
    max_x = x1 > x0 ? x1 : x0;
    min_y = y1 > y0 ? y0 : y1;
    max_y = y1 > y0 ? y1 : y0;
    
    for (i = min_x; i <= max_x; i++) {
      Paint_DrawVerticalLine(i, min_y, max_y - min_y + 1, colored);
    }
}
void Paint_DrawCircle(int x, int y, int radius, int colored) {
    /* Bresenham algorithm */
    int x_pos = -radius;
    int y_pos = 0;
    int err = 2 - 2 * radius;
    int e2;

    do {
        Paint_DrawPixel(x - x_pos, y + y_pos, colored);
        Paint_DrawPixel(x + x_pos, y + y_pos, colored);
        Paint_DrawPixel(x + x_pos, y - y_pos, colored);
        Paint_DrawPixel(x - x_pos, y - y_pos, colored);
        e2 = err;
        if (e2 <= y_pos) {
            err += ++y_pos * 2 + 1;
            if(-x_pos == y_pos && e2 <= x_pos) {
              e2 = 0;
            }
        }
        if (e2 > x_pos) {
            err += ++x_pos * 2 + 1;
        }
    } while (x_pos <= 0);
}
void Paint_DrawFilledCircle(int x, int y, int radius, int colored) {
    /* Bresenham algorithm */
    int x_pos = -radius;
    int y_pos = 0;
    int err = 2 - 2 * radius;
    int e2;

    do {
        Paint_DrawPixel(x - x_pos, y + y_pos, colored);
        Paint_DrawPixel(x + x_pos, y + y_pos, colored);
        Paint_DrawPixel(x + x_pos, y - y_pos, colored);
        Paint_DrawPixel(x - x_pos, y - y_pos, colored);
        Paint_DrawHorizontalLine(x + x_pos, y + y_pos, 2 * (-x_pos) + 1, colored);
        Paint_DrawHorizontalLine(x + x_pos, y - y_pos, 2 * (-x_pos) + 1, colored);
        e2 = err;
        if (e2 <= y_pos) {
            err += ++y_pos * 2 + 1;
            if(-x_pos == y_pos && e2 <= x_pos) {
                e2 = 0;
            }
        }
        if(e2 > x_pos) {
            err += ++x_pos * 2 + 1;
        }
    } while(x_pos <= 0);
}
void fill_display(int colored){
	Paint_DrawFilledRectangle(0, 0, WIDTH_SCR, HEIGHT_SCR, colored);
}
void draw_icon(int x, int y, int w, int h, const unsigned char* img, int colored){
     const unsigned char* ptr = img; // второй массив
        int i, j; // объявляем переменные
    for (j = 0; j < w; j++) { // цикл для строк
        for (i = 0; i < h; i++) { // цикл для столбцов
            if (*ptr & (0x80 >> (i % 8))) {
                Paint_DrawPixel(x + i, y + j, colored); // callback функции рисования пикселя
             }
            if (i % 8 == 7) {
		ptr++;
            }
        }
        if (w % 8 != 0) {
            ptr++;
        }
    }
}

void draw_strip_icon(int x, int y, int w, int h, const unsigned char img[], int length, int colored){
	int y1;
	int x_st;
	int length1;
	for(int i=0; i < length; i++){ // перебираем байты
		if ( i % 3 == 0){ //если мы на счетчике кратному трем
			y1 = img[i]; //получаем y координату
			x_st = img[i+1]; //координату начала полосы
			length1 = img[i+2]; //длину полосы
			Paint_DrawHorizontalLine(x_st+x, y1+y, length1, colored);  //отрисовывваем полосу
		}
	}
}

void draw_rle_icon(int x, int y, int w, int h, const unsigned char* img, int length, int colored){
	unsigned char buffer1[w*h/8]; // буффер для развернутого массива
	unsigned char byte; // байт
	int length1; // кол-во повторившихся байтов
	int counter1=0; // счетчик для развернотого массива
	for(int i=0; i < length; i++){ // перебираем байты сжатого массива
		if (i % 2 == 0){ // если счетчик делится на 2
			byte = img[i+1]; // берем байт
			length1 = img[i]; // берем длину
			for(int tt=0; tt < length1; tt++){ // цикл для добавления байтов в развернутый массив
				buffer1[counter1] = byte; // сохраняем байт
				counter1++; // увеличиваем счетчик
			}
		}
	}
	draw_icon(x, y, w, h, buffer1, 0);
}