#define _CRT_SECURE_NO_WARNINGS 1

////1157哥德巴赫猜想
//void Func()
//{
//	//产生6~100的偶数
//	int i = 0;
//	for (i = 6; i <= 100; i += 2)
//	{
//		//判断素数
//		int j = 0;
//		for (j = 2; j <i; j++)
//		{
//			int n = 0;
//			int flag = 1;
//			for (n = 2; n < j; n++)
//			{
//				if (j % n == 0)
//				{
//					flag = 0;
//					break;
//				}
//			}
//			for (n = 2; n < i - j; n++)
//			{
//				if ((i - j) % n == 0)
//				{
//					flag = 0;
//					break;
//				}
//			}
//			if (flag == 1)
//			{
//				printf("%d=%d+%d\n", i, j, i - j);
//				break;
//			}
//		}
//	}
//}
//int main()
//{
//	Func();
//	return 0;
//}

////1397简单算术表达式求值
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x/ y;
//}
//int Did(int x, int y)
//{
//	return x % y;
//}
//int main()
//{
//	int x = 0, y = 0;
//	char ch = 0;
//	int r = 0;
//	scanf("%d%c%d", &x, &ch, &y);
//	if (ch == '+')
//		r = Add(x, y);
//	else if (ch == '-')
//		r = Sub(x, y);
//	else if (ch == '*')
//		r = Mul(x, y);
//	else if (ch == '/')
//		r = Div(x, y);
//	else
//		r = Did(x, y);
//	printf("%d", r);
//	return 0;
//}

////1398短信计费
//double Func(int n)
//{
//	int a = 0;
//	int cont = 0;
//	while (n--)
//	{
//		scanf("%d", &a);
//		if (a <= 70)
//			cont++;
//		else
//		{
//			if (a % 70 == 0)
//				cont += a / 70;
//			else
//				cont += (a / 70) + 1;
//		}
//	}
//	double sum = 0.1 * (double)cont;
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	double r = Func(n);
//	printf("%.1lf", r);
//	return 0;
//}

////1399甲流病人初筛
//struct S
//{
//	char name[20];
//	float t;
//	int flag;
//};
//void Func(int n)
//{
//	struct S s = { 0 };
//	int cont = 0;
//	while (n--)
//	{
//		scanf("%s %f %d", s.name, &s.t, &s.flag);
//		if (s.t >= 37.5 && s.flag == 1)
//		{
//			cont++;
//			printf("%s\n", s.name);
//		}
//	}
//	printf("%d", cont);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Func(n);
//	return 0;
//}

////1403素数对
//void Func(int n)
//{
//	int i = 0,cont = 0;
//	for (i = 2; i <= n; i++)
//	{
//		int j = 0;
//		int flag = 1,s = 1;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		for (j = 2; j < i + 2; j++)
//		{
//			if ((i + 2) % j == 0)
//			{
//				s = 0;
//				break;
//			}
//		}
//		if (flag == 1 && s == 1)
//		{
//			printf("%d %d\n", i, i + 2);
//			cont++;
//		}
//	}
//	if (cont == 0)
//		printf("empty");
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Func(n);
//	return 0;
//}

////1404我家的门牌号
//void Func(int n)
//{
//	int my = 0, b = 1;
//	int sum = 0,cont = 0;
//	while(b < n)
//	{
//		int flag = 0;
//		sum += b;
//		cont++;
//		for (my = 1; my < b; my++)
//		{
//			if ((sum - my - my*2)== n)
//			{
//				printf("%d %d", my, cont);
//				flag = 1;
//			}
//		}
//		if (flag == 1)
//			break;
//		b++;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Func(n);
//	return 0;
//}

////1405质数的和与积
//int Func(int n)
//{
//	int i = 0;
//	int max = 0;
//	for (i = 2; i < n; i++)
//	{
//		int j = 0;
//		int flag = 1, s = 1;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		for (j = 2; j < n - i; j++)
//		{
//			if ((n - i) % j == 0)
//			{
//				s = 0;
//				break;
//			}
//		}
//		if (flag == 1 && s == 1)
//		{
//			if (((n - i) * i) > max)
//				max = (n - i) * i;
//		}
//	}
//	return max;
//}
//int main()
//{
//	int s = 0;
//	scanf("%d", &s);
//	int r = Func(s);
//	printf("%d", r);
//	return 0;
//}

////1409判断素数个数
//int Func(int x, int y)
//{
//	int i = 0;
//	int cont = 0;
//	for (i = x; i <= y; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1&&i!=1)
//			cont++;
//	}
//	return cont;
//}
//int main()
//{
//	int x = 0, y = 0;
//	scanf("%d %d", &x, &y);
//	int r = Func(x, y);
//	printf("%d", r);
//}

#include <stdio.h>
//1408素数回文数的个数
int Func(int n)
{
	int i = 11;
	int cont = 0;
	for (i = 11; i <= n; i++)
	{
		int j = 0;
		int flag = 1;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			int s = 0,sum = i;
			while (sum)
			{
				s++;
				sum /= 10;
			}
			if (s == 2)
			{
				int n = i / 10 + i % 10 * 10;
				if (n == i)
				{
					cont++;
					//printf("%d\n", i);
				}
			}
			else
			{
				int n = i / 100 + i / 10 % 10 * 10 + i % 10 * 100;
				if (n == i)
				{
					cont++;
					//printf("%d\n", i);
				}
			}
		}
	}
	return cont;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int r = Func(n);
	printf("%d", r);
}