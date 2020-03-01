#define WIDTH 200 
#define HEIGHT 200 
#define WIDTH_SCR 600 
#define HEIGHT_SCR 200 
// callback to display function
void Paint_DrawPixel(int x, int y, int colored);
void init( void );
int event_handler (void);
int close_display ( void);
// end callback function
void  Paint_DrawLine(int x0, int y0, int x1, int y1, int colored);
void Paint_DrawVerticalLine(int x, int y, int line_height, int colored);
void Paint_DrawHorizontalLine(int x, int y, int line_width, int colored);
void Paint_DrawRectangle(int x0, int y0, int x1, int y1, int colored);
void Paint_DrawFilledRectangle(int x0, int y0, int x1, int y1, int colored);
void Paint_DrawCircle(int x, int y, int radius, int colored);
void Paint_DrawFilledCircle(int x, int y, int radius, int colored);
void fill_display(int colored);
void draw_icon(int x, int y, int w, int h, const unsigned char* img, int colored);
void draw_strip_icon(int x, int y, int w, int h, const unsigned char img[], int length, int colored);
void draw_rle_icon(int x, int y, int w, int h, const unsigned char* img, int length, int colored);
