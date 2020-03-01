#include "Drawing.h"
#include "example_input/non1.c"
#include "example_input/rle1.c"
#include "example_input/strip1.c"
int main( void ) 
{
	init(); // стартуем
	draw_icon(0, 0, WIDTH, HEIGHT, non_comp, 0); // отрисовываем иконку из несжатого массива
	draw_strip_icon(WIDTH, 0, WIDTH, HEIGHT, strip_comp,sizeof(strip_comp)/sizeof(strip_comp[1]), 0); // метод полос
	draw_rle_icon(WIDTH*2, 0, WIDTH, HEIGHT, rle_comp,sizeof(rle_comp)/sizeof(rle_comp[1]), 0); // метод длин
    int loop = 0;
	while( loop == 0 ) { 
        loop = event_handler();
    }
    close_display();
}
