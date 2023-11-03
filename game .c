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
		printf("-----ɨ��-----\n");
		for (i = 0; i <= row; i++)//��ӡ��
		{
			printf("%d", i);
		}
		printf("\n");
		for (i = 1; i <= row; i++)
		{
			printf("%d",i);//��ӡ��
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
	//�ú������궼��1~9֮��
	
	int count = num;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		//�����ظ�����
		if (arr[x][y] == '0')//�������������ģ���Ժ�ֵ��ͬ
		{
			arr[x][y] = '1';
			count--;
		}
	}//ѭ������10���ף����Ը�������ѭ���������ܻ����10
}
int GetMine(char mine[ROWS][COLS],int x, int y) 
{
	//���ַ�ת��������
	return (mine[x - 1][y - 1] + mine[x - 1][y + 1] + mine[x + 1][y - 1] + mine[x + 1][y - 1] +
		mine[x - 1][y + 1] + mine[x - 1][y + 1] + mine[x + 1][y + 1] + mine[x + 1][y + 1]-8*'0');
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0, y = 0;
	int win =0;
	//һ����81�񣬳�ȥ10���ף����ѭ��71��
	while (win < row * col - num)
	{
		printf("��������Ҫ�Ų������-->> ");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			
			if (mine[x][y] == 1)
			{
				printf("���ź�����Ϸʧ��!\n");
				PrintMine(mine, ROW, COL);
				break;
			}
			else
			{
				int count = GetMine(mine, x, y);
				show[x][y] = count + '0';//������תΪ�ַ�����ʽ
				PrintMine(show, ROW, COL);
				win++;//û�ɹ�һ�Σ��ͼ�1�����71�Σ���9Ϊ����

			}

		}
		else
			printf("�������ֵ���ڷ�Χ�ڣ����������룡\n");
		
	}
	if (win == row * col - num)
	{
		printf("��ϲ��ɹ�ͨ��\n");
		PrintMine(show, ROW, COL);

	}

}