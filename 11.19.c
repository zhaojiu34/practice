#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 3:
//	case 5:
//		printf("NO\n");
//		break;
//	default:
//		printf("YES\n");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	double bike = 0.0, walk = 0.0;
//	double s = 0;
//	scanf("%lf", &s);
//	bike = 50 + s / 3.0;
//	walk = s / 1.2;
//	if (bike > walk)
//	{
//		printf("Walk");
//	}
//	else if (bike < walk)
//	{
//		printf("Bike");
//	}
//	else
//		printf("All");
//	return 0;
//}
//int main()
//{
//	double n = 0.0;
//	scanf("%lf", &n);
//	if (n >= 0 && n < 5)
//	{
//		printf("%.3lf", -n + 2.5);
//	}
//	else if (n >= 5 && n < 10)
//	{
//		printf("%.3lf", 2 - 1.5 * (n - 3) * (n - 3));
//	}
//	else
//		printf("%.3lf", n / 2 - 1.5);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	char ch = 0;
//	int sum = 0;
//	scanf("%d %c", &n, &ch);
//	if (n <= 1000)
//	{
//		if (ch == 'y')
//		{
//			printf("13");
//		}
//		else
//			printf("8");
//	}
//	else
//	{
//		if (ch == 'y')
//		{
//			if ((n - 1000) <= 500)
//			{
//				printf("17");
//			}
//			else
//			{
//				if (((n - 1000) / 500) == ((n - 1000) / 500.0))
//					printf("%d", ((n - 1000) / 500) * 4 + 13);
//				else
//					printf("%d", (((n - 1000) / 500) + 1) * 4 + 13);
//			}
//		}
//		else
//		{
//			if ((n - 1000) <= 500)
//			{
//				printf("12");
//			}
//			else
//			{
//				if (((n - 1000) / 500) == ((n - 1000) / 500.0))
//					printf("%d", ((n - 1000) / 500) * 4 + 8);
//				else
//					printf("%d", (((n - 1000) / 500) + 1) * 4 + 8);
//			}
//		}
//
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b && a > c)
//		printf("%d", a);
//	if (c > b && c > a)
//		printf("%d", c);
//	if (b > a && b > c)
//		printf("%d", b);
//	return 0;
//}
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a + b > c && b + c > a && a + c > b)
//		printf("yes");
//	else
//		printf("no");
//	return 0;
//}
//int main()
//{
//	int y = 0;
//	scanf("%d", &y);
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//		printf("Y");
//	else
//		printf("N");
//	return 0;
//}
//int main()
//{
//	int x = 0, y = 0;
//	scanf("%d %d", &x, &y);
//	if ((x >= -1 && x <= 1) && (y >= -1 && y <= 1))
//		printf("yes");
//	else
//		printf("no");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum1 = 0, sum2 = 0;
//	for (i = 1; i <= n; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum1 += i;
//		}
//		else
//			sum2 += i;
//	}
//	printf("%d %d",sum1, sum2);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	long long sum = 1;
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	printf("%lld", sum);
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0,stu = 0;
//	double age = 0.0;
//	scanf("%d", &n);
//	int sum = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &stu);
//		sum += stu;
//	}
//	age = (double)sum / n ;
//	printf("%.2lf", age);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	double sum = 0.0, m = 0.0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%lf", &m);
//		sum += m;
//	}
//	
//	printf("%.4lf", sum / n);
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	int m = 0;
//	double ave = 0.0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		sum += m;
//	}
//	ave = (double)sum / n;
//	printf("%d %.5lf", sum, ave);
//	return 0;
//}