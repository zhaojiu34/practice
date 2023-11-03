#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
#include <math.h>



#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define num 80
//初始化棋盘
void InitMine(char arr[ROWS][COLS], int rows, int cols, char set);
//打印棋盘
void PrintMine(char arr[ROWS][COLS], int row, int col);
//虽然打印的区域变成了9*9，但是数组的大小还是不变11*11
//布雷
void PutMine(char arr[ROWS][COLS], int row, int col);
//排雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);


