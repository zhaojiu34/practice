#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h> 
#include<time.h>
#include <stdlib.h>
void menu()
{
	//打印菜单，先放到一个menu的函数中，menu无参数，不反悔任何值
	printf("*****************\n");
	printf("***** 1.play ****\n");
	printf("***** 0.exit ****\n");
	printf("*****************\n");
	//输入1表示玩，0表示假，代表不玩

}

void game()
{
	//srand((unsigned int)time(NULL));
	//rand生成随机数
	int r = rand()%100+1;//范围是1~100
	int guss = 0;
	
	
	while (1)
	{
		printf("请输入数字 ->");
		scanf("%d", &guss);
		if (guss < r)
			printf("猜小了\n");
		else if (guss > r)
			printf("猜大了\n");
		else
		{
			printf("恭喜你猜对了！\n");
			break;
		}

	}

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//进行一次rand的种子数相同，进行多次游戏rand的种子数不同
	do
	{
		menu();
		printf("请选择 -> ");

		scanf("%d", &input);

		switch (input)
		{
		case 1:
				game();
				break;
		case 0:
				printf("退出游戏\n");
				break;
		default:
				printf("输入错误\n");
				break;
		}
	} while (input);

	return 0;
}








