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
        CellType getType();
        void setType(CellType type_);
        int getNum();
        void setNum(int num_);
};