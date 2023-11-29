#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//int Func(int n)
//{
//	if (n == 0 || n == 1)
//		return 1;
//	else
//		return n * Func(n - 1);
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = Func(n);
//	printf("%d", r);
//	return 0;
//}
#include <stdio.h>
void Print(int n)
{
	if(n > 9)
		Print(n / 10);
	printf("%d", n % 10);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	Print(n);
	return 0;
}