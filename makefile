P=learning_gdb
OBJECTS=
CFLAGS = -g -Wall -O0 -I/usr/local/include
LDLIBS= -L/usr/local/Cellar/gsl/2.3/lib
CC=gcc

$(P): $(OBJECTS)