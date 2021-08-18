#include <iostream>
#include <vector>
#include "minesweeper.hpp"

int main(int argc, char *argv[]) {
    int width = 30;
    int height = 30;

    Field field = Field(width, height);

    field.setCell(0, 0, Cell(BOMB));
    field.changeCellType(0, 2, NUM);
    std::cout << "This is minesweeper" << std::endl;

    for(int y=0; y < height; y++) {
        for(int x=0; x < width; x++) {
            std::cout << field.getCell(x, y).getType();
        }
        std::cout << std::endl;
    }

    return 0;
}
