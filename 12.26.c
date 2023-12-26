#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	long long  a = 0, b = 0;
//	scanf("%lld %lld", &a, &b);
//	printf("%lld", a + b);
//	return 0;
//}

//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	printf("  %c\n", ch);
//	printf(" %c%c%c\n", ch, ch, ch);
//	printf("%c%c%c%c%c\n", ch, ch, ch, ch, ch);
//}

//int main()
//{
//	long long a = 0, b = 0;
//	scanf("%lld %lld", &a, &b);
//	printf("%d", a * b);
//	return 0;
//}

//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	printf("%c", ch - 32);
//	return 0;
//}

//int main()
//{
//	double a = 0.0;
//	scanf("%lf", &a);
//	int b = a * 10;
//	int c = b % 10;
//	int d = b / 10 % 10;
//	int e = b / 100 % 10;
//	int f = b / 1000;
//	printf("%d.%d%d%d", c, d, e, f);
//	return 0;
//}

//int main()
//{
//	double t = 0.0;
//	int n = 0;
//	int cont = 0;
//	scanf("%lf %d", &t, &n);
//	printf("%.3lf\n", t / n);
//	printf("%d", n * 2);
//	return 0;
//}

//#include <math.h>
//int main()
//{
//	double a = 0.0, b = 0.0, c = 0.0;
//	scanf("%lf %lf %lf", &a, &b, &c);
//	double p = 0.0,s = 0.0;
//	p = (a + b + c) / 2;
//	s = p * (p - a) * (p - b) * (p - c);
//	printf("%.1lf", sqrt(s));
//	return 0;
//}

//int main()
//{
//	double p = 3.14;
//	double h = 0.0, r = 0.0;
//	scanf("%lf %lf", &h, &r);
//	double v = 0.0;
//	v = p * r * r * h;
//	printf("%d", (int)(20000 / v) + 1);
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	int h = 0, min = 0;
//	if (d < b)
//	{
//		h = c - a - 1;
//		min = d + 60 - b;
//	}
//	else
//	{
//		h = c - a;
//		min = d - b;
//	}
//	printf("%d %d",h, min);
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	double c = 1.9;
//	double m = a + (double)b / 10;
//	printf("%d", (int)(m / c));
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d %d %d",&a,&b,&c);
//	double sum = 0.0;
//	sum = a * 0.2 + b * 0.3 + c * 0.5;
//	printf("%.0lf", sum);
//}

//int main() 
//{
//    int m = 0, t = 0, s = 0;
//    scanf("%d %d %d", &m, &t, &s);
//    if (t == 0)
//        printf("%d", 0);
//    else
//    {
//        if (s % t == 0)
//        {
//            if (s / t > m)
//                printf("0");
//            else
//                printf("%d", m - (s / t));
//        }
//        else
//        {
//            if (s / t > m)
//                printf("0");
//            else
//                printf("%d", m - (s / t+1));
//        }
//    }
//    return 0;
//}

//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	int a = 0, b = 0, c = 0, d = 0;
//	if (x % 2 == 0 && x > 4 && x <= 12)
//	{
//		a = 1;
//	}
//	if (x % 2 == 0 || (x > 4 && x <= 12))
//		b = 1;
//	if ((x % 2 == 0 && (x <= 4 || x > 12)) || (x % 2 != 0 && x > 4 && x <= 12))
//		c = 1;
//	if (x % 2 != 0 && (x <= 4 || x > 12))
//		d = 1;
//	printf("%d %d %d %d", a, b, c, d);
//	return 0;
//}

//int main()
//{
//	int y = 0;
//	scanf("%d", &y);
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//		printf("1");
//	else
//		printf("0");
//}

//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	if (x == 0 || x == 1)
//		printf("Today, I ate %d apple.", x);
//	else
//		printf("Today, I ate %d apples.", x);
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = 0, b = 0;
//	a = 5 * n;
//	b = 3 * n + 11;
//	if (a > b)
//		printf("Luogu");
//	else
//		printf("Local");
//	return 0;
//}

//#include<math.h>
//int main()
//{
//	double m = 0.0, h = 0.0;
//	double s = 0.0;
//	scanf("%lf %lf", &m, &h);
//	s = m / (h * h);
//	if (s < 18.5)
//		printf("Underweight\n");
//	else if (s >= 18.5 && s < 24)
//		printf("Normal\n");
//	else
//	{
//		int cont = 0;
//		int a = (int)s;
//		int n = a;
//		while (a)
//		{
//			cont++;
//			a /= 10;
//		}
//		int b = (s - n) * pow(10, 6 - cont);
//		while (b)
//		{
//			if (b % 10 != 0)
//				break;
//			b = b / 10;
//		}
//
//		printf("%d.%d\n", n, b);
//		printf("Overweight\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (b > a)
//	{
//		int tmp = 0;
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (c > a)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (c > b)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", c, b, a);
//	return 0;
//}

#include<stdio.h>
int main()
{
	int y = 0, m = 0;
	int day[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	scanf("%d %d", &y, &m);
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
		day[2] += 1;
	printf("%d", day[m]);
	return 0;
}