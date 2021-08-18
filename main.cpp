#include <iostream>
#include <vector>
#include "minesweeper.hpp"

int main(int argc, char *argv[]) {
	int width = 30;
	int height = 30;

	std::vector<std::vector<Cell>> field(height, std::vector<Cell>(width, Cell()));
	field.at(0).at(0).setType(BOMB);
	std::cout << "This is minesweeper" << std::endl;

	std::cout << field.at(0).at(0).getType() << std::endl;
	return 0;
}
