#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h";
void game()//该函数是确保游戏运行的，也不需要返回值
{
	char mine[ROWS][COLS] = { 0 };//用于布置雷
	char show[ROWS][COLS] = { 0 };//用于排雷
	//如果我们直接写11，在以后换棋盘规格后，所有的11都要更改，过于麻烦
	//所以不妨用变量表示，以后只改变量就可以改变所有的数值
	 InitMine(mine, ROWS, COLS,'0');//'0'
	 InitMine(show, ROWS, COLS,'*');//'*'
	 //PrintMine(mine, ROW, COL);//在游戏时，排雷界面是不打印的
	                            //此时只是看一下我们代码对不对
	 PrintMine(show, ROW, COL);
	 PutMine(mine, ROW, COL);//布雷只在mine中布置就行
	 PrintMine(mine, ROW, COL);//查看一下雷的分布
	 FindMine(mine, show, ROW, COL);
}
void menu()
{
	printf("******************\n");
	printf("***** 1.play *****\n");
	printf("***** 0.exit *****\n");
	printf("******************\n");

}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();//不需要返回值，只要打印出菜单就行
		printf("请输入 -> ");
		scanf("%d", &input);
		switch (input)//根据input的值选择不同的结果
		{
		case 1 :
			game();
			break;
		case 0 :
			printf("退出游戏\n");
			break;
		default :
			printf("输入错误 请重新输入\n");
			break;
		}

	} while (input);//用do while循环上来就会先执行一次，让玩家选择
		return 0;
}