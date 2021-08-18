CXX = g++
TARGET = minesweeper
SRCS = main.cpp minesweeper.cpp
CXXFLAGS = -std=c++11 -Wall

minesweeper: $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)