CC = gcc
CFLAGS = -Wall -g

mycalculator: mycalculator.o
	$(CC) $(CFLAGS) -o mycalculator mycalculator.o

mycalculator.o: mycalculator.c
	$(CC) $(CFLAGS) -c mycalculator.c

clean:
	rm -f *.o mycalculator

