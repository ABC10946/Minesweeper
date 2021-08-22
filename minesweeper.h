#ifndef MINESWEEPER_H_
#define MINESWEEPER_H_

#include <vector>

enum CellType {
    EMPTY,
    NUM,
    BOMB,
    FLAG
};


class Cell {
 private:
    int _num;
    CellType _type;
 public:
    Cell();
    explicit Cell(CellType type);
    CellType getType();
    void setType(CellType type);
    int getNum();
    void setNum(int num);
};


class Field {
 private:
    std::vector<std::vector<Cell>> _field;
 public:
    Field(int width, int height);
    std::vector<std::vector<Cell>> getField();
    void setField(std::vector<std::vector<Cell>> field);
    Cell getCell(int x, int y);
    void setCell(int x, int y, Cell cell);
    void changeCellType(int x, int y, CellType type);
};

#endif  // MINESWEEPER_H_
