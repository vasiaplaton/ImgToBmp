```diff
- Этот файл доступен на русском и называется README_RU.md
```
# ImgToBmp:c example and decompress code
This is part of my project written in C. Here's library Drawing.c and      
header file Drawing.h and main.c with example paint compressed bitmap.Library        
has functions to draw graphic primitives and paint compressed    
arrays to images, also this library has 4 display callback funcitons:    
Paint_DrawPixel, init, event_handler, close_display       
required to work only Paint_DrawPixel.       
In this examples XLib used for drawing pixels        
The following functions are implemented in the library:     
1. Paint_DrawPixel
2. Paint_DrawLine( from dot to dot, vertical line, horizontal line
3. Paint_DrawRectangle(outline or filled)
4. Paint_DrawCircle(outline or filled)
5. Draw icon form array(non compressed, strip method, rle method.
### Usage:
Build project and library     
```
make all
```
Start     
```
./main
```
### Installing dependencies
```
sudo apt-get install libx11-dev
```
