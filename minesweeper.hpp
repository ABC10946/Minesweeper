#ifndef MINESWEEPER_H_
#define MINESWEEPER_H_

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
        Cell(CellType type_);
        CellType getType();
        void setType(CellType type_);
        int getNum();
        void setNum(int num_);
};

#endif