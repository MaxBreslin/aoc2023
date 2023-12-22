TARGET=main
CC=g++
CFLAGS= --std=c++14 -Wall -g
.SILENT: run clean

build: $(TARGET)

$(TARGET): main.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

run: $(TARGET)
	./$(TARGET)

check:
	valgrind --leak-check=full ./$(TARGET)

clean:
	rm $(TARGET) main.o