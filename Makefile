CC = g++
TARGET = minesweeper
SRCS = main.cpp
minesweeper:
	$(CC) $(SRCS) -o $(TARGET)
