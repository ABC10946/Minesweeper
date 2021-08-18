CXX = g++
TARGET = minesweeper
SRCS = main.cpp minesweeper.cpp
CFLAGS = -Wall

minesweeper: $(SRCS)
	$(CXX) $(CFLAGS) $(SRCS) -o $(TARGET)