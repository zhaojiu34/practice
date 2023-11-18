#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 2 == 0)
//	{
//		printf("even\n");
//	}
//	else
//		printf("odd\n");
//	return 0;
//}
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	if ((int)ch % 2 != 0)
//	{
//		printf("YES\n");
//	}
//	else
//		printf("NO\n");
//	return 0;
//}
//int main()
//{
//	int x = 0, y = 0;
//	scanf("%d %d", &x, &y);
//	if (x == y)
//		printf("=\n");
//	else if (x > y)
//		printf(">\n");
//	else
//		printf("<\n");
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n >= 10 && n <= 99)
//		printf("1\n");
//	else
//		printf("0\n");
//	return 0;
//}
//int main()
//{
//	int n = 0, m = 0;
//	scanf("%d %d", &n, &m);
//	if (n >= 10 || m >= 20)
//		printf("1\n");
//	else
//		printf("0\n");
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 3 == 0 && n % 5 == 0 &&n %7 == 0)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}
//int main()
//{
//	int  n = 0;
//	int cont = 0;
//	scanf("%d", &n);
//	if (n % 3 == 0)
//	{
//		printf("3");
//		cont++;
//	}
//	if (n % 5 == 0)
//	{
//		if(0 == cont)
//			printf("5");
//		else
//			printf(" 5");
//		cont++;
//	}
//	if (n % 7 == 0)
//	{
//		if(0 == cont)
//			printf("7");
//		else
//			printf(" 7");
//	}
//	if (n % 3 != 0 && n % 7 != 0 && n % 5 != 0)
//	{
//		printf("n");
//	}
//	return 0;
//}
//int main()
//{
//	int c = 0, m = 0;
//	scanf("%d %d", &c, &m);
//	if ((c >= 60 && m < 60) || (c < 60 && m >= 60))
//		printf("1");
//	else
//		printf("0");
//
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("Monday");
//		break;
//	case 2:
//		printf("Tuesday");
//		break;
//	case 3:
//		printf("Wednesday");
//		break;
//	case 4:
//		printf("Thursday");
//		break;
//	case 5:
//		printf("Friday");
//		break;
//	case 6:
//		printf("Saturday");
//		break;
//	case 7:
//		printf("Sunday");
//		break;
//	default:
//		printf("input error!");
//
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	double x = 0, y = 0;
	char ch = 0;
	scanf("%lf %lf %c", &x, &y, &ch);
	switch (ch)
	{
	case '+':
		printf("%.lf", x + y);
		break;
	case '-':
		printf("%.lf",(double) x - y);
		break;

	case '*':
		printf("%.lf", x * y);
		break;

	case '/':
	{
		if (y == 0)
			printf("Divided by zero!");
		else
			printf("%.1lf", x / y);
		break;

	}
	default:
		printf("Invalid operator!");
		break;

	}
	return 0;
}










