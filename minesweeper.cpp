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

CellStatus Cell::getStatus() {
    return _status;
}

void Cell::setStatus(CellStatus status) {
    _status = status;
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

int Field::setNumCell(int x, int y) {
    if (_field.at(y).at(x).getType() == BOMB)
        return -1;

    int bomb_num = 0;

    if (_field.at(y-1).at(x-1).getType() == BOMB)
        bomb_num++;

    if (_field.at(y-1).at(x).getType() == BOMB)
        bomb_num++;

    if (_field.at(y-1).at(x+1).getType() == BOMB)
        bomb_num++;

    if (_field.at(y).at(x-1).getType() == BOMB)
        bomb_num++;

    if (_field.at(y).at(x+1).getType() == BOMB)
        bomb_num++;

    if (_field.at(y+1).at(x-1).getType() == BOMB)
        bomb_num++;

    if (_field.at(y+1).at(x).getType() == BOMB)
        bomb_num++;

    if (_field.at(y+1).at(x+1).getType() == BOMB)
        bomb_num++;

    if (bomb_num > 0) {
        _field.at(y).at(x).setNum(bomb_num);
        _field.at(y).at(x).setType(NUM);
    }
    return 0;
}
