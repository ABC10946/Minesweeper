#include <iostream>
#include <vector>
#include "minesweeper.hpp"

int main(int argc, char *argv[]) {
	int width = 30;
	int height = 30;

	std::vector<std::vector<Cell>> field(height, std::vector<Cell>(width, Cell()));
	field.at(0).at(0).setType(BOMB);
	std::cout << "This is minesweeper" << std::endl;

	for(int y=0; y < height; y++) {
		for(int x=0; x < width; x++) {
			std::cout << field.at(y).at(x).getType();
		}
		std::cout << std::endl;
	}

	return 0;
}
