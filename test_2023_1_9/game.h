#define ROW 9

#define COL 9

#define ROWS ROW+2

#define COLS COL+2

#define Easy_Count 20//�˴��޸��Ѷȣ���ֵԽ���Ѷ�ԽС

void InitBorad(char borad[ROWS][COLS], int rows, int cols,char set);

void DisplayBorad(char borad[ROWS][COLS], int row, int col);

void SetMine(char borad[ROWS][COLS], int row, int col);

void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);