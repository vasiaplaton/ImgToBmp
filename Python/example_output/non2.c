const unsigned char non_comp[5000] = { 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X1C, 0X2, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X60, 0X1C, 
0X6, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1, 0X80, 0X70, 0X3C, 0X7, 0X1, 0XC0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X1, 0XC0, 0X60, 0X3C, 0X6, 0X1, 0XC0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X3, 0XC0, 0X0, 0X3C, 0X0, 0X1, 0XC0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X6, 0X0, 0X80, 
0X0, 0X3C, 0X0, 0X0, 0X80, 0X20, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X7, 0X0, 0X0, 0X0, 0X3C, 0X0, 
0X0, 0X0, 0XF0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X7, 0X0, 0X0, 0X0, 0X3C, 0X0, 0X0, 0X0, 0X70, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3C, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1E, 0X0, 
0X0, 0X0, 0X0, 0X3C, 0X0, 0X0, 0X0, 0X0, 0X38, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1E, 0X0, 0X0, 0X0, 0X0, 
0X3C, 0X0, 0X0, 0X0, 0X0, 0X38, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1C, 0X0, 0X0, 0X0, 0X0, 0X3C, 0X0, 0X0, 
0X0, 0X0, 0X18, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3C, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X38, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X3C, 0X0, 0X0, 0X0, 0X0, 0X0, 0XC, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3C, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X3C, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1C, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3C, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3C, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X3C, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X1E, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3C, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X3C, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X1F, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3C, 0X0, 0X0, 0X0, 0X0, 0X0, 0X78, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0XF, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X3C, 0X0, 0X0, 0X0, 0X0, 0X0, 0X78, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X30, 0XF, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X3C, 0X0, 0X0, 0X0, 0X0, 0X0, 0XF0, 0X6, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X38, 0X7, 0X80, 0X0, 0X0, 0X0, 0X0, 0X3C, 0X0, 
0X0, 0X0, 0X0, 0X1, 0XF0, 0X1E, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X38, 0X7, 0XC0, 0X0, 0X0, 0X0, 0X0, 0X3C, 0X0, 0X0, 0X0, 0X0, 
0X1, 0XE0, 0XC, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X3, 0XC0, 0X0, 0X0, 0X0, 0X0, 0X3C, 0X0, 0X0, 0X0, 0X0, 0X1, 0XC0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1, 0XE0, 0X0, 
0X0, 0X0, 0X0, 0X3C, 0X0, 0X0, 0X0, 0X0, 0X3, 0XC0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1, 0XE0, 0X0, 0X0, 0X0, 0X0, 
0X3C, 0X0, 0X0, 0X0, 0X0, 0X7, 0X80, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X28, 0X0, 0X0, 0XF0, 0X0, 0X0, 0X0, 0X0, 0X1C, 0X0, 0X0, 
0X0, 0X0, 0X7, 0X80, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X38, 0X0, 0X0, 0XF8, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0XF, 
0X0, 0X0, 0XE, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X38, 0X0, 0X0, 
0X78, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1E, 0X0, 0X0, 0XE, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X38, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1E, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3E, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X3E, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X1E, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X3C, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X1E, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X78, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0XF, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X78, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3C, 0X0, 0X0, 0X0, 0XF, 0X80, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0XF0, 0X0, 0X0, 0X0, 0X1C, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X3C, 0X0, 0X0, 0X0, 0X7, 0X80, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X1, 0XF0, 0X0, 0X0, 0X0, 0X1C, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X3, 0X80, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0XE0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X6, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X30, 0X0, 0X0, 0X0, 0X0, 0XE, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X70, 0X0, 0X0, 0X0, 0X0, 0XE, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X8, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X30, 0X0, 
0X0, 0X0, 0X0, 0X4, 0X0, 0X0, 0X1, 0X80, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X10, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X20, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0XE0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0XF0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0XFC, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3, 0XF8, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0XFC, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X3, 0XF8, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0XFE, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X1F, 0XF8, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0XFF, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1F, 
0XF8, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3, 0XC0, 
0X0, 0X0, 0X0, 0XFF, 0X60, 0X0, 0XFF, 0XFF, 0XF0, 0X0, 0X3F, 0XF0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3, 0XC0, 0X0, 0X0, 0X3, 0XE0, 0X0, 0X0, 
0X0, 0XFF, 0XE0, 0XF, 0XFF, 0XFF, 0XFD, 0X80, 0X7F, 0XF8, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0XF, 0XC0, 0X0, 0X0, 0X1, 0XFC, 0X0, 0X0, 0X0, 0XFF, 
0XF0, 0XFF, 0XFF, 0XFF, 0XFF, 0XE1, 0XFF, 0XF8, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X1F, 0XC0, 0X0, 0X0, 0X0, 0XFE, 0X0, 0X0, 0X0, 0XFF, 0XFF, 
0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XF8, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X7F, 0X0, 0X0, 0X0, 0X0, 0X3F, 0X80, 0X0, 0X0, 0XFF, 0XFF, 0XFF, 
0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XF8, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0XFE, 0X0, 0X0, 0X0, 0X0, 0XF, 0XE0, 0X0, 0X0, 0XFF, 0XFF, 0XFF, 0XFF, 
0XFF, 0XFF, 0XFF, 0XFF, 0XF8, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X7, 0XF8, 
0X0, 0X0, 0X0, 0X0, 0X7, 0XF0, 0X0, 0X0, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 
0XFF, 0XFF, 0XFF, 0XF8, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0XF, 0XE0, 0X0, 
0X0, 0X0, 0X0, 0X1, 0XFE, 0X0, 0X0, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 
0XFF, 0XFF, 0XF8, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3F, 0X80, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X7E, 0X0, 0X0, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 
0XFF, 0XF8, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0XFF, 0X0, 0X0, 0X0, 0X0, 0X38, 
0X0, 0X1F, 0XC0, 0X0, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 
0XF8, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1, 0XFC, 0X0, 0XC, 0X0, 0X0, 0X38, 0X0, 
0XF, 0XF0, 0X0, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XF0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X7, 0XF0, 0X0, 0X1E, 0X0, 0X0, 0X38, 0X0, 0X3, 
0XF8, 0X0, 0X7F, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XF0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0XF, 0XC0, 0X0, 0XC, 0X0, 0X0, 0X0, 0X0, 0X0, 0XFC, 
0X0, 0X3F, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XF0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X1F, 0X80, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X7C, 0X0, 0X3F, 
0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XC0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X1E, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X10, 0X0, 0X3F, 0XEF, 0XFF, 
0XFF, 0XFF, 0XFF, 0XFD, 0XFF, 0XC0, 0X0, 0X0, 0X0, 0X0, 0X0, 0XC, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0XFF, 0XE1, 0XFF, 0XFF, 0XFF, 
0XFF, 0XF1, 0XFF, 0XF0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X1, 0XFF, 0XE0, 0XFF, 0XFF, 0XFF, 0XFF, 0XE1, 
0XFF, 0XF8, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X3, 0XFF, 0XE0, 0XFF, 0XFF, 0XFF, 0XFF, 0XC1, 0XFF, 0XFC, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1, 0X80, 0X0, 0X0, 
0X0, 0X3, 0XFF, 0XE0, 0XF0, 0XFF, 0XFF, 0XF1, 0XF1, 0XFF, 0XFE, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X80, 0X1, 0X80, 0X0, 0X0, 0X0, 0X3, 
0XFF, 0XE0, 0XF0, 0XFF, 0XFF, 0XE1, 0XE1, 0XFF, 0XFE, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X1, 0XC0, 0X1, 0X80, 0X0, 0X0, 0X0, 0X7, 0XFF, 0XE0, 
0XF0, 0X7F, 0XFF, 0XC1, 0XE1, 0XFF, 0XFF, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X1, 0XC0, 0X1, 0X80, 0X0, 0X0, 0X0, 0X1F, 0XFF, 0XE0, 0XF0, 
0X7F, 0XFF, 0XC1, 0XE1, 0XFF, 0XFF, 0XC0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X80, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1F, 0XFF, 0XF0, 0XF0, 0X7F, 
0XFF, 0XC1, 0XE1, 0XFF, 0XFF, 0XC0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1F, 0XFF, 0XF0, 0XF0, 0X7F, 0XFF, 
0XC1, 0XE3, 0XFF, 0XFF, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X7, 0XFF, 0XF0, 0XF0, 0X7F, 0XFF, 0XC1, 0XC3, 
0XFF, 0XFE, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X3, 0XFF, 0XFC, 0XF0, 0X7F, 0XFF, 0XC1, 0XC3, 0XFF, 0XFC, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X1, 0XFF, 0XFF, 0XF0, 0X7F, 0XFF, 0XC1, 0XEF, 0XFF, 0XF8, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1, 
0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XF8, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0XC, 0X0, 0X0, 0X0, 0X0, 0X0, 0XFF, 0XFF, 
0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XF0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X38, 0X1E, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3F, 0XFF, 0XFF, 
0XFF, 0X1F, 0XFF, 0XFF, 0XFF, 0XC0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X38, 0XE, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1F, 0XFF, 0XFF, 0XFF, 
0XF, 0XFF, 0XFF, 0XFF, 0X80, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X38, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1F, 0XFF, 0XFF, 0XFF, 0XF, 0XFF, 
0XFF, 0XFF, 0X80, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X7, 0XFF, 0XFF, 0XFF, 0X1F, 0XFF, 0XFF, 0XFF, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X7, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFC, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XF8, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X7F, 0XFF, 0XFF, 0XFF, 0XFF, 0XFF, 0XE0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3F, 0XFF, 
0XFF, 0XFF, 0XFF, 0XFF, 0XC0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1F, 0XFF, 0XFF, 0XFF, 
0XFF, 0XFF, 0XC0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X10, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3, 0XFF, 0XFF, 0XFF, 0XFF, 0XFE, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X8, 0X3C, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X3, 0XFF, 0XFF, 0XFF, 0XFF, 0XFC, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1E, 0X38, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0XFF, 0XFF, 0XFF, 0XFF, 0XF0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1E, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0XF, 0XFF, 0XFF, 0XFF, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3, 
0XFF, 0XFF, 0XF0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1F, 0XFE, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1F, 0XFE, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0XF8, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0XF8, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1, 
0XF8, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X3F, 0XFF, 0XFF, 0XE0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1, 0XFC, 0X0, 
0X3C, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3, 0XFF, 0XFF, 0XFE, 0X3F, 
0XFF, 0XFF, 0XE0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3, 0XFE, 0X0, 0X3E, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X7, 0XFF, 0XFF, 0XFE, 0X3F, 0XFF, 
0XFF, 0XE0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3, 0XFE, 0X0, 0X3E, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X7, 0XFF, 0XFF, 0XFE, 0X3F, 0XFF, 0XFF, 0XE0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X1F, 0XFF, 0X0, 0X3C, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X3, 0XFF, 0XFF, 0XFE, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X1F, 0XFF, 0X0, 0X18, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1F, 
0XFF, 0XC0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3F, 0XFF, 0XE0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X7F, 0XFF, 0XE0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X7F, 0XFF, 0XE0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X7F, 0XFF, 0XF0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X7F, 0XFF, 
0XF0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X38, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0XFF, 0XFF, 0XF8, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1E, 0X3C, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0XFF, 0XFF, 0XF8, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1E, 0X10, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0XFF, 0XFF, 0XF8, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X8, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0XFF, 0XFF, 0XF8, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0XFF, 0XFF, 0XF8, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0XFF, 0XFF, 0XF8, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0XFF, 0XFF, 0XF8, 0X1, 0XF0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0XFF, 0XFF, 0XF8, 0XF, 0XFC, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0XFF, 
0XFF, 0XF8, 0XF, 0XFE, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X7F, 0XFF, 0XF8, 0X3F, 
0XFF, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0XE, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X7F, 0XFF, 0XF8, 0XFF, 0XFF, 0X80, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X38, 0X1E, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X3, 0X7F, 0XFF, 0XFF, 0XE0, 0XF, 0X80, 0X0, 0X7E, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X38, 0XC, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X7, 0XFF, 0XFF, 0XFF, 0XC0, 0X7, 0X80, 0X1, 0XFF, 0XC0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X38, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X7, 0XFF, 0XFF, 0XFF, 0X80, 0X3, 0X80, 0X1, 0XE3, 0XE0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0XF, 0XFF, 
0XFF, 0XFF, 0X80, 0X3, 0X80, 0X3, 0X80, 0XF0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3F, 0XFF, 0XFF, 0XFF, 
0XE0, 0X3, 0X80, 0X7, 0X0, 0X78, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0XFF, 0XFF, 0XFF, 0XFF, 0XF0, 0X3, 
0X80, 0X1E, 0X0, 0X7C, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X3, 0XFF, 0XFF, 0XFF, 0XFF, 0XFC, 0X3, 0X80, 0X1E, 
0X0, 0X7E, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0XF, 0XFF, 0XFF, 0XFF, 0XFF, 0XFE, 0X3, 0X80, 0X3F, 0X80, 0X3F, 
0X80, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1, 0X80, 0X0, 0X0, 0X0, 0X0, 0X0, 
0XF, 0XFF, 0XFF, 0X9F, 0XFF, 0XFE, 0X3, 0X0, 0X3F, 0X80, 0X3F, 0X80, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X80, 0X1, 0X80, 0X0, 0X0, 0X0, 0X0, 0X0, 0XF, 0XFF, 
0XFF, 0X9F, 0X3F, 0XFF, 0X3, 0X0, 0X3F, 0X8C, 0X3F, 0X80, 0X0, 0X0, 0X0, 
0X0, 0X1, 0XC0, 0X1, 0X80, 0X0, 0X0, 0X0, 0X0, 0X0, 0XF, 0XFF, 0XFF, 0X9F, 
0X1F, 0XFF, 0XC3, 0X0, 0X1F, 0XFC, 0X3F, 0XC0, 0X0, 0X0, 0X0, 0X0, 0X1, 
0XC0, 0X1, 0X80, 0X0, 0X0, 0X0, 0X0, 0X0, 0XF, 0XFF, 0XFF, 0X9F, 0XFF, 
0XFF, 0XC3, 0X0, 0X1F, 0XFC, 0X3F, 0XC0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X80, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0XF, 0XFF, 0XFF, 0X9E, 0X7F, 0XFF, 
0XC3, 0X0, 0X1F, 0XFC, 0X3F, 0XC0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0XF, 0XFF, 0XFF, 0X9E, 0X7F, 0XFF, 0XC4, 
0X0, 0X7, 0XF0, 0X3F, 0XC0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0XF, 0XFF, 0XFF, 0X9E, 0X7F, 0XFF, 0X4, 0X0, 0X0, 
0X0, 0X3F, 0XE0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X10, 
0X0, 0X0, 0XF, 0XFF, 0XFF, 0X9E, 0X7F, 0XFF, 0X4, 0X0, 0X0, 0X0, 0X3F, 
0XE0, 0X0, 0XC, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X7C, 0X0, 0X0, 
0X3, 0XFF, 0XF3, 0X9C, 0XFF, 0XFE, 0X4, 0X0, 0X0, 0X0, 0X7F, 0XE0, 0X0, 
0X1E, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0XFC, 0X0, 0X0, 0X1, 0XFF, 
0XF3, 0X9C, 0XFF, 0XFC, 0X4, 0X0, 0X0, 0X0, 0X7F, 0XE0, 0X0, 0X1F, 0X80, 
0X0, 0X0, 0X0, 0X0, 0X38, 0X0, 0X3, 0XF8, 0X0, 0X0, 0X0, 0X3F, 0XF1, 0X8C, 
0XFF, 0XF0, 0X4, 0X0, 0X0, 0X0, 0X7F, 0XE0, 0X0, 0XF, 0XC0, 0X0, 0XC, 
0X0, 0X0, 0X38, 0X0, 0XF, 0XF0, 0X0, 0X0, 0X0, 0X3F, 0XF1, 0X8C, 0XFF, 
0XE0, 0X7, 0X0, 0X0, 0X0, 0XFF, 0XE0, 0X0, 0XF, 0XF0, 0X0, 0X1E, 0X0, 
0X0, 0X38, 0X0, 0X1F, 0XC0, 0X0, 0X0, 0X0, 0XF, 0XF1, 0X8C, 0XFF, 0XE0, 
0X7, 0X0, 0X0, 0X3, 0XFF, 0XE0, 0X0, 0X1, 0XFC, 0X0, 0XC, 0X0, 0X0, 0X0, 
0X0, 0X7E, 0X0, 0X0, 0X0, 0X0, 0X3, 0XF1, 0X8C, 0XFF, 0X0, 0X7, 0X80, 
0X0, 0X7, 0XFF, 0XE0, 0X0, 0X0, 0X7F, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1, 0XFE, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X71, 0X8D, 0XF8, 0X0, 0X7, 0X80, 0X0, 0XF, 0XFF, 
0XE0, 0X0, 0X0, 0X3F, 0X80, 0X0, 0X0, 0X0, 0X0, 0X7, 0XF0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X1, 0X8C, 0X60, 0X0, 0X3, 0XF0, 0X0, 0X3F, 0XCF, 0XC0, 0X0, 
0X0, 0X7, 0XE0, 0X0, 0X0, 0X0, 0X0, 0XF, 0XE0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X1, 0X8C, 0X0, 0X0, 0X3, 0XFC, 0X3, 0XFF, 0XFF, 0XC0, 0X0, 0X0, 0X7, 
0XF8, 0X0, 0X0, 0X0, 0X0, 0X3F, 0X80, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1, 0X8C, 
0X0, 0X0, 0X1, 0XFC, 0X3, 0XFF, 0XFF, 0XC0, 0X0, 0X0, 0X0, 0XFE, 0X0, 
0X0, 0X0, 0X0, 0XFE, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3, 0X9C, 0X0, 0X0, 
0X1, 0XFF, 0XFF, 0XFF, 0XFF, 0XC0, 0X0, 0X0, 0X0, 0X7F, 0X0, 0X0, 0X0, 
0X1, 0XFC, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3, 0X9C, 0X0, 0X0, 0X0, 0XFF, 
0XFF, 0XFF, 0XFF, 0XC0, 0X0, 0X0, 0X0, 0X1F, 0XC0, 0X0, 0X0, 0X3, 0XE0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3, 0X9C, 0X0, 0X0, 0X0, 0X3F, 0XFF, 0XFF, 
0XFF, 0X80, 0X0, 0X0, 0X0, 0X7, 0XC0, 0X0, 0X0, 0X3, 0XC0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X1, 0X8C, 0X0, 0X0, 0X0, 0XF, 0XFF, 0XFF, 0XFF, 0X80, 
0X0, 0X0, 0X0, 0X3, 0XC0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X7, 0XFF, 0XFF, 0XFF, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X5, 0XFF, 0XFF, 0XF4, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X1F, 0XFF, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1F, 0XFF, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X4, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X20, 
0X0, 0X0, 0X0, 0X0, 0XE, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X30, 0X0, 0X0, 0X0, 
0X0, 0XE, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X70, 0X0, 0X0, 0X0, 0X0, 0X6, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X30, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X3, 0X80, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0XE0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3C, 0X0, 0X0, 0X0, 0X7, 
0X80, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1, 0XF0, 0X0, 0X0, 0X0, 0X1C, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3C, 0X0, 0X0, 0X0, 0XF, 0X80, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0XF0, 0X0, 0X0, 0X0, 0X1C, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0XF, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X78, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X1E, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X78, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X1E, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3C, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3E, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3E, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X38, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X1E, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X38, 0X0, 0X0, 0X78, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X1E, 0X0, 0X0, 0XC, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X38, 0X0, 0X0, 0XF8, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0XF, 
0X0, 0X0, 0XE, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X28, 0X0, 0X0, 
0XF0, 0X0, 0X0, 0X0, 0X0, 0X1C, 0X0, 0X0, 0X0, 0X0, 0X7, 0X80, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1, 0XE0, 0X0, 0X0, 
0X0, 0X0, 0X3C, 0X0, 0X0, 0X0, 0X0, 0X7, 0X80, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1, 0XE0, 0X0, 0X0, 0X0, 0X0, 0X3C, 
0X0, 0X0, 0X0, 0X0, 0X3, 0XC0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X3, 0XC0, 0X0, 0X0, 0X0, 0X0, 0X3C, 0X0, 0X0, 0X0, 
0X0, 0X1, 0XC0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X38, 0X7, 0XC0, 0X0, 0X0, 0X0, 0X0, 0X3C, 0X0, 0X0, 0X0, 0X0, 0X1, 0XE0, 
0XC, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X38, 0X7, 0X80, 
0X0, 0X0, 0X0, 0X0, 0X3C, 0X0, 0X0, 0X0, 0X0, 0X1, 0XF0, 0X1E, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X30, 0XF, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X3C, 0X0, 0X0, 0X0, 0X0, 0X0, 0XF0, 0X6, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0XF, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3C, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X78, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X1F, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3C, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X78, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X1E, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3C, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3C, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3C, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X3C, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3C, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3C, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X3C, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1C, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X38, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3C, 0X0, 0X0, 
0X0, 0X0, 0X0, 0XC, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3C, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0XC, 0X0, 0X0, 0X0, 0X0, 0X3C, 0X0, 0X0, 0X0, 0X0, 0X18, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1E, 0X0, 0X0, 
0X0, 0X0, 0X3C, 0X0, 0X0, 0X0, 0X0, 0X38, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1E, 0X0, 0X0, 0X0, 0X0, 0X3C, 
0X0, 0X0, 0X0, 0X0, 0X38, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3C, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X7, 0X0, 0X0, 0X0, 0X3C, 0X0, 0X0, 0X0, 0X70, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X7, 0X0, 0X0, 0X0, 0X3C, 0X0, 0X0, 0X0, 0XF0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X6, 0X0, 0X80, 
0X0, 0X3C, 0X0, 0X0, 0X80, 0X20, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X3, 0XC0, 0X0, 0X3C, 0X0, 
0X1, 0XC0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X1, 0XC0, 0X60, 0X3C, 0X6, 0X1, 0XC0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X1, 0X80, 0X70, 0X3C, 0X7, 0X1, 0XC0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X70, 0X1C, 0X6, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X60, 
0X1C, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 
0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0, 0X0,  };