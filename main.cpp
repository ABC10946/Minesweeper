#include <iostream>
#include <vector>
#include "minesweeper.h"

int main(int argc, char *argv[]) {
    /* input process */
    int width, height;
    int line_num;

    std::cin >> width >> height;
    Field field = Field(width, height);

    std::cin >> line_num;

    int bomb_x, bomb_y;
    for (int num=0; num < line_num; num ++) {
        std::cin >> bomb_x >> bomb_y;
        field.setCell(bomb_x, bomb_y, Cell(BOMB));
    }
    /* input process */


    for (int y = 1; y < height-1; y++) {
        for (int x = 1; x < width-1; x++) {
            field.setNumCell(x, y);
        }
    }

    for (int y = 1; y < height-1; y++) {
        for (int x = 1; x < width-1; x++) {
            if (field.getCell(x, y).getType() == NUM) {
                std::cout << field.getCell(x, y).getNum();
            } else if (field.getCell(x, y).getType() == BOMB) {
                std::cout << "B";
            } else if (field.getCell(x, y).getType() == EMPTY) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
