#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
#include <math.h>



#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define num 80
//��ʼ������
void InitMine(char arr[ROWS][COLS], int rows, int cols, char set);
//��ӡ����
void PrintMine(char arr[ROWS][COLS], int row, int col);
//��Ȼ��ӡ����������9*9����������Ĵ�С���ǲ���11*11
//����
void PutMine(char arr[ROWS][COLS], int row, int col);
//����
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);


