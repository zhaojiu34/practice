#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <ctype.h>
#include <assert.h>
#include <limits.h>
////ö��str=='\0'�ĺϷ�����Ͳ��Ϸ����
//enum state
//{
//	VALID,//�Ϸ�
//	INVALID//���Ϸ�
//};
//enum state date = INVALID;
//int my_atoi(const char* str)
//{
//	//�ж��ǲ��ǿ�ָ��
//	assert(str);
//	long long i = 0;//��ֹת����ʱ��ֵ���
//
//	if (*str == '\0')
//	{
//		date = INVALID;
//		//��������\0����ʾ���ַ����ǿ��ַ����ǲ��Ϸ���
//		return 0;
//	}
//	//�ж�������
//	int flag = 1;
//	if (*str == '-')
//	{
//		flag = -1;
//		str++;//һֱ��*str��ʾ�Ĳ��Ƿ����ǲŽ���whileѭ��
//	}
//	else if (*str == '+')
//	{
//		flag = 1;
//		str++;
//	}
//	while (*str)
//	{
//		if (isdigit(*str))//���ǲ���ʮ���Ƶ�����
//		{
//			i = i * 10 + flag * (*str - '0');//�������ַ���ת������������
//			//�ж��Ƿ�Խ��
//			if (i < INT_MIN || i > INT_MAX)
//				return (int)i;//����ֵ��int�ͣ�����ı�����long long,ǿ������ת��
//			
//		}
//		else
//		{
//			return (int)i;//����������ʮ���Ƶ���һ����
//		}
//		str++;
//		
//	}
//	//���������������Ժ�
//	if (*str == '\0')
//		date = VALID;//��ʱ��\0,���ַ����ս���������ǺϷ���
//	return (int)i;
//}
//int main()
//{
//	char s[] = {"12a4"};
//	int r = my_atoi(s);
//	if (date == INVALID)
//	{
//		printf("�Ƿ�ת����%d\n",r);
//	}
//	else
//		printf("�Ϸ�ת����%d\n",r);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = 0, b = 0, c = 0;
//	int i = 0;
//	int sa = 0,sb = 0,sc = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d %d %d", &a, &b, &c);
//		sa += a;
//		sb += b;
//		sc += c;
//	}
//	int s = 0;
//	s = sa + sb + sc;
//	printf("%d %d %d %d",sa,sb,sc,s);
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0, c = 0;
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	a = n;
//	if (1 == a || 2 == a)
//		printf("1");
//	else
//	{
//		a = 1; b = 1;
//		for (i = 2; i < n; i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		printf("%d", c);
//
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	double x = 0.0, y = 0.0;
//	double m = 0.0, n = 0.0;
//	double a1 = 0.0, a2 = 0.0;
//	scanf("%lf %lf", &x, &y);
//	a1 = y / x;
//	int i = 0;
//	for (i = 0; i < num -1; i++)
//	{
//		scanf("%lf %lf", &m, &n);
//		a2 = n / m;
//		if (a2 - a1 > 0.05)
//			printf("better\n");
//		else if (a1 - a2 > 0.05)
//			printf("worse\n");
//		else
//			printf("same\n");
//	}
//	return 0;
//}

#include <math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	double sum = 0.0;
//	double min = 0.0;
//	for (i = 0; i < n; i++)
//	{
//		min = 0.0;
//		int x = 0, y = 0;
//		int p = 0;
//		scanf("%d %d %d", &x, &y, &p);
//		double b =(double)(x * x + y * y);
//		min = 2*(sqrt(b) / 50)+1.5*p;
//		if ((int)min == min)
//			sum += min;
//		else
//			sum += (int)min+1;
//	}
//	if ((int)sum == sum)
//		printf("%d", (int)sum);
//	else
//		printf("%d",(int)sum + 1);
//	return 0;
//}


//int main()
//{
//	int  x = 30, y = 40;
//	int b = x * x + y * y;
//	double r =sqrt((double)b);
//	printf("%d %lf", b, r);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int d = 0;
//	int y = 0;
//	int c = 0;
//	double sum = 0.0;
//	for (i = 1; i <= 12; i++)
//	{
//		scanf("%d", &y);
//		if (300 + d - y >= 0)
//		{
//			d = 300 + d - y;
//			c = d / 100;
//			sum += c*100;
//			d = d - c*100;
//		}
//		else
//		{
//			printf("%d", -i);
//			break;
//		}
//		if (i == 12)
//			printf("%.0lf", sum*1.2+d);
//		
//	}
//	return 0;
//}

//int main()
//{
//	int m = 0,n =0;
//	int num = 0;
//	scanf("%d %d", &m, &n);
//	int i =0;
//	int cont = 0;
//	for(i = 1; i<= n; i++)
//	{
//		scanf("%d", &num);
//		if (m - num >= 0)
//		{
//			m -= num;
//		}
//		else
//		{
//			cont++;
//		}
//	}
//	printf("%d", cont);
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int cont = 0,max = 0;
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d %d", &a, &b);
//		if ((a >= 90 && a <= 140) && (b >= 60 && b <= 90))
//		{
//			cont++;
//			/*if (max < cont)
//				max = cont;*/
//		}
//		else
//		{
//			if (max < cont)
//				max = cont;
//			cont = 0;
//		}
//	}
//	printf("%d", max);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int num = 0,cont = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &num);
//		int a = num % 10;//��
//		int b = num /10 % 10;//ʮ
//		int c = num / 100 % 10;//��
//		int d = num / 1000;//ǧ
//		if (a - b - c - d > 0)
//			cont++;
//	}
//	printf("%d", cont);
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	double p = 1.0, q = 2.0;
//	double sum = 0.0;
//	for (i = 0; i < n; i++)
//	{
//		double m = q / p;
//		sum += m;
//		int tmp = p;
//		p = q;
//		q = tmp + p;
//		
//	}
//	printf("%.4lf", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int flag = 1;
//	double sum = 0.0;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		if (i % 2 != 0)
//			flag = 1;
//		else
//			flag = -1;
//		sum += flag * (1.0 / i);
//	}
//	printf("%.4lf", sum);
//}

//int main()
//{
//	int a = 0, b = 0, c = 0;
//	int i = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	for (i = 1; i <= 10000; i++)
//	{
//		if (a % i == b % i && b % i == c % i&&i!=1)
//		{
//			printf("%d", i);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0,sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//	printf("%d", sum);
//	return 0;
//}
