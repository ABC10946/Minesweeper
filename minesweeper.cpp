#include "minesweeper.hpp"

Cell::Cell() {
	type = EMPTY;
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