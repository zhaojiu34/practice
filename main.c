#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h";
void game()//�ú�����ȷ����Ϸ���еģ�Ҳ����Ҫ����ֵ
{
	char mine[ROWS][COLS] = { 0 };//���ڲ�����
	char show[ROWS][COLS] = { 0 };//��������
	//�������ֱ��д11�����Ժ����̹������е�11��Ҫ���ģ������鷳
	//���Բ����ñ�����ʾ���Ժ�ֻ�ı����Ϳ��Ըı����е���ֵ
	 InitMine(mine, ROWS, COLS,'0');//'0'
	 InitMine(show, ROWS, COLS,'*');//'*'
	 //PrintMine(mine, ROW, COL);//����Ϸʱ�����׽����ǲ���ӡ��
	                            //��ʱֻ�ǿ�һ�����Ǵ���Բ���
	 PrintMine(show, ROW, COL);
	 PutMine(mine, ROW, COL);//����ֻ��mine�в��þ���
	 PrintMine(mine, ROW, COL);//�鿴һ���׵ķֲ�
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
		menu();//����Ҫ����ֵ��ֻҪ��ӡ���˵�����
		printf("������ -> ");
		scanf("%d", &input);
		switch (input)//����input��ֵѡ��ͬ�Ľ��
		{
		case 1 :
			game();
			break;
		case 0 :
			printf("�˳���Ϸ\n");
			break;
		default :
			printf("������� ����������\n");
			break;
		}

	} while (input);//��do whileѭ�������ͻ���ִ��һ�Σ������ѡ��
		return 0;
}