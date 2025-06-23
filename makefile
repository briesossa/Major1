# makefile - Major Assignment 1 - CSCE 3600
CC = gcc
CFLAGS = -Wall -g

OBJS = major.o clz.o endian.o rotate.o parity.o

TARGET = bitwisemenu

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

major.o: major.c major1.h
clz.o: clz.c major1.h
endian.o: endian.c major1.h
rotate.o: rotate.c major1.h
parity.o: parity.c major1.h

clean:
	rm -f $(OBJS) $(TARGET)
