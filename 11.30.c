#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
// long long范围最大是9*10^18
// 而a<100且b < 1000,所以a^b的最大值是100^1000,long long存不下
//	long long a = 0, b = 0;
//	scanf("%lld %lld", &a, &b);
//	int i = 0;
//	long long  r = pow(a, b);//3的2000次方太大了，无法储存
//	r = r % 7;//范围是0~6
//	switch (r)
//	{
//	case 1:
//		printf("Monday\n");
//		break; 
//	case 2:
//			printf("Tuseday\n");
//			break;
//	case 3:
//		printf("Wednesday\n");
//		break;
//	case 4:
//		printf("Thursday\n");
//		break;
//	case 5:
//		printf("Friday\n");
//		break;
//	case 6:
//		printf("Saturday\n");
//		break;
//	case 0:
//		printf("Sunday\n");
//		break;
//	}
//	return 0;
//}


#include <stdio.h>
int main()
{
	int a = 0, b = 0;
	int s = 1;//用来储存a每次*3%7的值,表示周几
	//以题目所给的例子说明
	//3的2000次方，数太多，用long long也存不下，不妨换一种思路
	//这个表示3被乘了2000次
	//由于表示星期，肯定小于7，如果次方数可以存下，一般会选用结果%7，得到的余数就是星期几
	//现在存不下，就然每次*3后都%7，让每次结果都保证是星期数，小于7，这样循环2000次结果也是7以内的数，不会超出范围
	scanf("%d %d", &a, &b);
	int i = 0;
	for (i = 0; i < b; i++)
	{
		s = (s * a) % 7;//%7结果范围在0~6之间
	}
	//题目中假设今天是周日，结果为零就表示还是周日
	switch (s)
	{
	case 1:
		printf("Monday\n");
		break;
	case 2:
		printf("Tuesday\n");
		break;
	case 3:
		printf("Wednesday\n");
		break;
	case 4:
		printf("Thursday\n");
		break;
	case 5:
		printf("Friday\n");
		break;
	case 6:
		printf("Saturday\n");
		break;
	case 0:
		printf("Sunday\n");
		break;
	}
	return 0;
}