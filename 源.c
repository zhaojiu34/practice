#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h> 
#include<time.h>
#include <stdlib.h>
void menu()
{
	//��ӡ�˵����ȷŵ�һ��menu�ĺ����У�menu�޲������������κ�ֵ
	printf("*****************\n");
	printf("***** 1.play ****\n");
	printf("***** 0.exit ****\n");
	printf("*****************\n");
	//����1��ʾ�棬0��ʾ�٣�������

}

void game()
{
	//srand((unsigned int)time(NULL));
	//rand���������
	int r = rand()%100+1;//��Χ��1~100
	int guss = 0;
	
	
	while (1)
	{
		printf("���������� ->");
		scanf("%d", &guss);
		if (guss < r)
			printf("��С��\n");
		else if (guss > r)
			printf("�´���\n");
		else
		{
			printf("��ϲ��¶��ˣ�\n");
			break;
		}

	}

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//����һ��rand����������ͬ�����ж����Ϸrand����������ͬ
	do
	{
		menu();
		printf("��ѡ�� -> ");

		scanf("%d", &input);

		switch (input)
		{
		case 1:
				game();
				break;
		case 0:
				printf("�˳���Ϸ\n");
				break;
		default:
				printf("�������\n");
				break;
		}
	} while (input);

	return 0;
}








