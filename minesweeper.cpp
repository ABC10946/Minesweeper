#include "minesweeper.h"
#include <vector>

Cell::Cell() {
    type = EMPTY;
}

Cell::Cell(CellType type_) {
    type = type_;
}

CellType Cell::getType() {
    return type;
}

void Cell::setType(CellType type_) {
    type = type_;
}

int Cell::getNum() {
    return num;
}

void Cell::setNum(int num_) {
    num = num_;
}


Field::Field(int width, int height) {
    field = std::vector<std::vector<Cell>>(height, std::vector<Cell>(width, Cell()));
}

std::vector<std::vector<Cell>> Field::getField() {
    return field;
}

void Field::setField(std::vector<std::vector<Cell>> field_) {
    field = field_;
}

Cell Field::getCell(int x, int y) {
    return field.at(y).at(x);
}

void Field::setCell(int x, int y, Cell cell) {
    field.at(y).at(x) = cell;
}

void Field::changeCellType(int x, int y, CellType type) {
    field.at(y).at(x).setType(type);
}