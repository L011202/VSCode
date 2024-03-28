#define ROW 9

#define COL 9

#define ROWS ROW+2

#define COLS COL+2

#define Easy_Count 20//此处修改难度，数值越大，难度越小

void InitBorad(char borad[ROWS][COLS], int rows, int cols,char set);

void DisplayBorad(char borad[ROWS][COLS], int row, int col);

void SetMine(char borad[ROWS][COLS], int row, int col);

void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);