#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int DigitSum(num)
//{
//	if (num < 9)
//		return num;
//	else
//		return num % 10 + DigitSum(num / 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = DigitSum(n);
//	printf("%d", r);
//	return 0;
//}
//int factorial(int num)
//{
//	if (0 == num)
//		return 1;
//	else
//		return num * factorial(num - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = factorial(n);
//	printf("%d", r);
//	return 0;
//}
//int main()
//{
//	int i = 0, n = 0;
//	int num = 1;
//	scanf("%d", &n);
//	if (0 == n)
//	{
//		printf("1");
//	}
//	else
//	{
//		for (i = 1; i <= n; i++)
//		{
//			num = num*i;
//		}
//		printf("%d", num);
//	}
//	return 0;
//}

//#include<stdio.h>
//void Print(int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//
//		printf("%d ", n % 10);
//	}
//	else
//		printf("%d ", n);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	  Print(num);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//	return 0;
//}

#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int cont = 0;
//    scanf("%d", &n);
//    for (i = 0; i < 32; i++)
//    {
//        if (((n >> i) & 1) == 1)
//        {
//            cont++;
//        }
//    }
//    printf("%d", cont);
//    return 0;
//}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < 32; i += 2)
	{
		printf("%d", (n >> i)%2);
	}
	printf("\n");
	for (i = 1; i < 32; i+=2)
	{
		printf("%d", (n >> i)%2);
	}
	printf("\n");

}






































