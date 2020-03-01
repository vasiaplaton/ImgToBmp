CFLAGS= -finput-charset=UTF-8 -std=c11 -fextended-identifiers
LFLAGS= -L. -ldraw -lm -o
TARGET=main
SRCS=main.c
CC=gcc
PACK=ar
PACKFLAGS=rcs
LIBNAME=Drawing
LIBTRAGET=libdraw.a
LIBFLAGS= -c -Wall -Werror -fpic
all: clean lib main
clean:
	rm -f ${TARGET}
	rm -f *.a *.so *.o
lib:
	${CC} ${LIBFLAGS} ${LIBNAME}.c
	${PACK} ${PACKFLAGS} ${LIBTRAGET} ${LIBNAME}.o
main:
	${CC} ${CFLAGS} ${SRCS} ${LFLAGS} ${TARGET} -lX11