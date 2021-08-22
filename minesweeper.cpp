#include "minesweeper.h"
#include <vector>

Cell::Cell() {
    _type = EMPTY;
}

Cell::Cell(CellType type) {
    _type = type;
}

CellType Cell::getType() {
    return _type;
}

void Cell::setType(CellType type) {
    _type = type;
}

int Cell::getNum() {
    return _num;
}

void Cell::setNum(int num) {
    _num = num;
}


Field::Field(int width, int height) {
    _field = std::vector<std::vector<Cell>>(height, std::vector<Cell>(width, Cell()));
}

std::vector<std::vector<Cell>> Field::getField() {
    return _field;
}

void Field::setField(std::vector<std::vector<Cell>> field) {
    _field = field;
}

Cell Field::getCell(int x, int y) {
    return _field.at(y).at(x);
}

void Field::setCell(int x, int y, Cell cell) {
    _field.at(y).at(x) = cell;
}

void Field::changeCellType(int x, int y, CellType type) {
    _field.at(y).at(x).setType(type);
}