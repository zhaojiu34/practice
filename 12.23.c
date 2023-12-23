#define _CRT_SECURE_NO_WARNINGS 1
////1158求1+2+3.....
//int Func(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n+Func(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = Func(n);
//	printf("%d", r);
//	return 0;
//}

////1159斐波那契数列
//int Func(int n)
//{
//	if (n == 1)
//		return 0;
//	else if (n == 2)
//		return 1;
//	else
//		return Func(n - 1) + Func(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = Func(n);
//	printf("%d", r);
//	return 0;
//}

////1160倒序数
//int  Func(int n,int cont)
//{
//	if (n <= 9)
//	{
//		printf("%d", n);
//		return n;
//	}
//	else
//	{
//		if (n % 10 == 0&&cont == 0)
//			return Func(n / 10,cont);
//		else
//		{
//			cont++;
//			printf("%d", n % 10);
//			return Func(n / 10,cont);
//		}
//	}
//}
//int main()
//{
//	int n = 0;
//	int cont = 0;
//	scanf("%d", &n);
//	Func(n,cont);
//	return 0;
//}

////1161转进制
//void Func(char* s)
//{
//	char* star = s;
//	while (*s != '!')
//	{
//		s++;
//	}
//	while (*s != *star)
//	{
//		printf("%c", *(--s));
//	}
//
//}
//int main()
//{
//	char s[100] = { 0 };
//	gets(s);
//	Func(s);
//	return 0;
//}

////阿克曼函数
//int Func(int m, int n)
//{
//	if (m == 0)
//		return n + 1;
//	 if (m > 0 && n == 0)
//		return Func(m - 1, 1);
//	if(m >0&&n >0)
//		return Func(m - 1, Func(m, n - 1));
//}
//int main()
//{
//	int m = 0, n = 0;
//	scanf("%d %d", &m, &n);
//	int r = Func(m, n);
//	printf("%d", r);
//	return 0;
//}

////1165Hermite多项式
//double Func(double n, double x)
//{
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2 * x;
//	else
//		return 2*x*Func(n-1,x)-2*(n-1)*Func(n-2,x)
//}
//int main()
//{
//	double  n = 0, x = 0;
//	scanf("%lf %lf", &n, &x);
//	double r = Func(n, x);
//	printf("%.2lf", r);
//	return 0;
//}


////求f(x,n)
//double Func(double x, int n)
//{
//	if (n == 1)
//		return sqrt((double)1 + x);
//	else
//		return sqrt((double)n + Func(x, n - 1));
//	
//}
//int main()
//{
//	double x = 0.0;
//	int n = 0;
//	scanf("%lf %d", &x, &n);
//	double r = Func(x, n);
//	printf("%.2lf", r);
//	return 0;
//}

////1167再求f(x,n)
//double Func(double x, double n)
//{
//	if (n == 1)
//		return x / (x + 1);
//	else
//		return x / (n + Func(x, n - 1));
//}
//int main()
//{
//	double x = 0, n = 0;
//	scanf("%lf %lf", &x, &n);
//	double r = Func(x, n);
//	printf("%.2lf", r);
//	return 0;
//}

////1164 digit函数
//int Func(int n, int k)
//{
//	if (k == 1)
//		return n%10;
//	else
//	{
//		k--;
//		return Func(n / 10, k);
//	}
//}
//int main()
//{
//	int n = 0, k = 0;
//	scanf("%d %d", &n, &k);
//	int r = Func(n, k);
//	printf("%d", r);
//	return 0;
//}

////1161转进制
//void  Func(int x, int m)
//{
//	if (x == 0)
//		return;
//	else
//	{
//		Func(x / m,m);
//		if (x % m < 10)
//			printf("%d", x % m);
//		else
//			printf("%c", (char)(x % m + 55));
//	}
//
//}
//int main()
//{
//	int x = 0, m = 0;
//	scanf("%d %d", &x, &m);
//	Func(x, m);
//}

#include <stdio.h>
//1162字符串逆序
void Reser()
{
	char ch = 0;
	scanf("%c", &ch);
	if (ch == '!')
	{
		return;//递归停止
	}
	else
	{
		Reser();//如果输入的不是'!',继续输入，递归
		printf("%c", ch);//递归完以后，开始递推
	}
}
int main()
{
	Reser();
	return 0;
}
