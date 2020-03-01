-Этот файл доступен на русском и называется README_RU.md
# ImgToBmp: convert monochrome images to byte array and lossless compression
![Img](/img1.png)
This is my project that consist of two parts - script on python   
that convert images to byte array C for further rendering   
Convert perform with 3 methods: non compressed, strip method    
run-length method   
Info about installing and usage you can find in subfolder Python/   
Second part written on C and consist library that paint graphics   
primitives and images from compressed array    
Info about installing and usage you can find in subfolder C/   
For every image script make 3 arrays for this methods
#### Non compressed:
In images take 8 pixels from string. When string ends and witdh    
doesnt multiple by 8 take this pixels and go to new column and   
start from begining. All 8 pixels convert to one byte   
#### Strip method:
We code begining, length, and Y coordinate black strip in image   
This is method is worked because we code image, not random pixels     
#### RLE method:
[Good article on wikipedia about this method]https://en.wikipedia.org/wiki/Run-length_encoding
### Known limitations
1. Entropy coding methods (such as the Huffman method) are not used
2. Monochrome only images only
