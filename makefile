P=glist
OBJECTS=
CFLAGS = -g -Wall -O3 -I/usr/local/include
LDLIBS= -L/usr/local/Cellar/glib/2.52.0/glib-2.0/include/
CC=gcc

$(P): $(OBJECTS)