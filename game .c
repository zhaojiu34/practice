#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h";

void InitMine(char arr[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			arr[i][j] = set;      
		}
	}
}

void PrintMine(char arr[ROWS][COLS], int row, int col)
{
	int i = 0;
	{
		printf("-----扫雷-----\n");
		for (i = 0; i <= row; i++)//打印行
		{
			printf("%d", i);
		}
		printf("\n");
		for (i = 1; i <= row; i++)
		{
			printf("%d",i);//打印列
			int j = 0;
			
			for (j = 1; j <= col; j++)
			{
				printf("%c", arr[i][j]);
			}
			printf("\n");

		}

	}
}
void PutMine(char arr[ROWS][COLS], int row, int col)
{
	//让横纵坐标都是1~9之间
	
	int count = num;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		//避免重复布雷
		if (arr[x][y] == '0')//避免两次随机数模玩以后，值相同
		{
			arr[x][y] = '1';
			count--;
		}
	}//循环产生10个雷，所以根据条件循环次数可能会大于10
}
int GetMine(char mine[ROWS][COLS],int x, int y) 
{
	//把字符转换成数字
	return (mine[x - 1][y - 1] + mine[x - 1][y + 1] + mine[x + 1][y - 1] + mine[x + 1][y - 1] +
		mine[x - 1][y + 1] + mine[x - 1][y + 1] + mine[x + 1][y + 1] + mine[x + 1][y + 1]-8*'0');
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0, y = 0;
	int win =0;
	//一共有81格，除去10个雷，最多循环71次
	while (win < row * col - num)
	{
		printf("请输入你要排查的坐标-->> ");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			
			if (mine[x][y] == 1)
			{
				printf("很遗憾，游戏失败!\n");
				PrintMine(mine, ROW, COL);
				break;
			}
			else
			{
				int count = GetMine(mine, x, y);
				show[x][y] = count + '0';//把数字转为字符的形式
				PrintMine(show, ROW, COL);
				win++;//没成功一次，就加1，最多71次（以9为例）

			}

		}
		else
			printf("您输入的值不在范围内，请重新输入！\n");
		
	}
	if (win == row * col - num)
	{
		printf("恭喜你成功通关\n");
		PrintMine(show, ROW, COL);

	}

}