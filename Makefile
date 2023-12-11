
CC = g++
CFLAGS = -Wall -g

TARGET = main
SRC = main.cpp

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)
