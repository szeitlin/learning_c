P=glist
OBJECTS=
CFLAGS= -pg -Wall -O3 $(glib_includes)
LDLIBS=$(glib_libs)
CC=gcc
glib_includes=$(shell pkg-config --cflags glib-2.0)
glib_libs=$(shell pkg-config --libs glib-2.0)
$(P): $(OBJECTS)