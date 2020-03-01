# ImgToBmp:python script
This is part of my project on python. It's script, that convert image .img to C array of bytes.    
Programm create 3 files: non.c strip.c rle.c in directory files/(by default). First file it just arrary     
without compress 2 - strip method, 3 - run-length encoding(RLE). Also by default(can be turned off) decompress    
and paint all three arrays by tkinter.       
### Usage:
```
python3 main.py [OPTIONAL ARGS]      
```
optional args:     
```
optional arguments:
  -h, --help            show this help message and exit
  --script_mode {0,1}   if set 1, program won't draw unzipped bitmap, else draw
  --img_path IMG_PATH   path to image, std value:images/watchface1.jpg
  --out_dir OUT_DIR     path to out dir, std value:files/
  --threshold THRESHOLD threshold for pixel, 0-255, std value:20
  --channel {0,1,2}     channel for pixel, R - 0, G - 1, B - 2, std value:1

```
### Installing:
Optional virtual enviroment:    
```
pip3 install virtualenv
python3 -m venv env
source env/bin/activate
```
Install require packages      
```
pip3 install -r requirements.txt
```
