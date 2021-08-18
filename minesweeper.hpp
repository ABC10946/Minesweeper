#ifndef MINESWEEPER_HPP_
#define MINESWEEPER_HPP_

#include <vector>

enum CellType {
    EMPTY,
    NUM,
    BOMB,
    FLAG
};


class Cell {
 private:
    int num;
    CellType type;
 public:
    Cell();
    explicit Cell(CellType type_);
    CellType getType();
    void setType(CellType type_);
    int getNum();
    void setNum(int num_);
};


class Field {
 private:
    std::vector<std::vector<Cell>> field;

 public:
    Field(int width, int height);
    std::vector<std::vector<Cell>> getField();
    void setField(std::vector<std::vector<Cell>> field_);
    Cell getCell(int x, int y);
    void setCell(int x, int y, Cell cell);
    void changeCellType(int x, int y, CellType type);
};

#endif  // MINESWEEPER_HPP_
