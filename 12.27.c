#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > c)
//	{
//		int tmp = 0;
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (b > c)
//	{
//		int tmp = 0;
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	if (a > b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a + b > c)
//	{
//		if (a * a + b * b == c * c)
//			printf("Right triangle\n");
//		if (a * a + b * b > c * c)
//			printf("Acute triangle\n");
//		if (a * a + b * b < c * c)
//			printf("Obtuse triangle\n");
//		if (a == b || (a == c) || (c == b))
//			printf("Isosceles triangle\n");
//		if (a == b && a == c && b == c)
//			printf("Equilateral triangle\n");
//	}
//	else
//		printf("Not triangle\n");
//	return 0;
//}

////P5738歌唱比赛
//int main()
//{
//	int n = 0, m = 0;
//	scanf("%d %d", &n, &m);
//	int arr[25] = { 0 };
//	double b[105] = { 0.0 };
//	int i = 0;
//	int a = n;
//	while (a--)
//	{
//		int max = 0, min = 15;
//		int sum = 0;
//		for (i = 0; i < m; i++)
//		{
//			scanf("%d", &arr[i]);
//			if (max < arr[i])
//				max = arr[i];
//			if (min > arr[i])
//				min = arr[i];
//		}
//		for (i = 0; i < m; i++)
//		{
//			sum += arr[i];
//		}
//		b[a] = (double)(sum-max-min) / ((double)m - 2);
//	}
//	double max = 0.0;
//	for (i = 0; i < n; i++)
//	{
//		if (max < b[i])
//			max = b[i];
//	}
//	printf("%.2lf", max);
//	return 0;
//}

////P5737闰年展示
//int main()
//{
//	int x = 0, y = 0;
//	scanf("%d %d", &x, &y);
//	int i = 0;
//	int cont = 0;
//	int arr[500] = { 0 };
//	for (i = x; i <= y; i++)
//	{
//		if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
//		{
//			arr[cont] = i;
//			cont++;
//		}
//	}
//	printf("%d\n", cont);
//	for (i = 0; i < cont; i++)
//	{
//		if (i == 0)
//			printf("%d", arr[i]);
//		else
//			printf(" %d", arr[i]);
//	}
//}

//P5744培训
//struct Stu
//{
//	char name[20];
//	int age;
//	int score;
//};
//int main()
//{
//	struct Stu s[6] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s %d %d", s[i].name, &s[i].age, &s[i].score);
//		s[i].score += s[i].score*0.2;
//		if (s[i].score > 600)
//			s[i].score = 600;
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%s %d %d\n", s[i].name, s[i].age + 1, s[i].score);
//	}
//	return 0;
//}

#include <stdlib.h>
////P5742评等级
//struct Stu
//{
//	int s;
//	int g;
//	int h;
//	int sum;
//};
//void Func(struct Stu* p)
//{
//	if ((p->h + p->s > 140) && (p->sum >= 800))
//	{
//		printf("Excellent\n");
//	}
//	else
//		printf("Not excellent\n");
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	int sz = sizeof(struct Stu);
//	struct Stu* p = (struct Stu*)calloc(n, sz);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d %d %d", &(p + i)->s, &(p + i)->g, &(p + i)->h);
//		(p + i)->sum = 7*(p + i)->g + 3*(p + i)->h;
//	}
//	for (i = 0; i < n; i++)
//	{
//		Func(p + i);
//	}
//	free(p);
//	
//	return 0;
//}

////P1428小鱼比可爱
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[105] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i <n; i++)
//	{
//		int j = 0;
//		int cont = 0;
//		for (j = 0; j < i; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				cont++;
//			}
//		}
//		if (i ==0)
//			printf("%d", cont);
//		else
//			printf(" %d", cont);
//	}
//	return 0;
//}

////P1427小鱼的游戏数字
//int main()
//{
//	int n = 0;
//	int i = 0,cont = 0;
//	int arr[105] = { 0 };
//	while ((scanf("%d", &n))!=EOF)
//	{
//		arr[i] = n;
//		if (n == 0)
//			break;
//		i++;
//		cont++;
//	}
//	for (i = cont - 1; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

////P5727冰雹猜想
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[1200] = { 0 };
//	int i = 0;
//	while (n!=1)
//	{
//		arr[i] = n;
//		if (n % 2 != 0)
//			n = n * 3 + 1;
//		else
//			n = n / 2;
//		i++;
//		if (n == 1)
//			break;
//	}
//	int cont = i;
//	printf("1 ");
//	for (i = cont-1; i >=0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


////P1047校门外的树
//int main()
//{
//	int arr[10005] = { 0 };
//	int l = 0, m = 0;
//	scanf("%d %d", &l, &m);
//	int i = 0;
//	int cont = 0;
//	while (m--)
//	{
//		int x = 0, y = 0;
//		scanf("%d %d", &x, &y);
//		for (i = x; i <= y; i++)
//		{
//			arr[i] = 1;
//		}
//	}
//	for (i = 0; i <= l; i++)
//	{
//		if (arr[i] == 0)
//			cont++;
//	}
//	printf("%d", cont);
//	return 0;
//}

//#include <math.h>
////P5728旗鼓相当的对手
//struct Stu
//{
//	int c;
//	int m;
//	int e;
//	int sum;
//};
//int main()
//{
//	struct Stu s[1005] = { 0 };
//	int i = 0;
//	int  n = 0,cont = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d %d %d", &s[i].c, &s[i].m, &s[i].e);
//		s[i].sum = s[i].c + s[i].e + s[i].m;
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			if (i != j)
//			{
//				if (abs(s[i].c - s[j].c) <= 5 && abs(s[i].e - s[j].e) <= 5 && abs(s[i].m - s[j].m) <= 5 && abs(s[i].sum - s[j].sum) <= 10)
//					cont++;
//			}
//		}
//	}
//	printf("%d", cont / 2);
//	return 0;

////P5729工艺品制作
//int main()
//{
//	int m = 0, n = 0;
//	int i = 0;
//	scanf("%d %d", &m, &n);
//	int arr[10] = { 0 };
//	for (i = m; i <= n; i++)
//	{
//		int b = i;
//		while (b)
//		{
//			int a =b % 10;
//			arr[a]++;
//			b /= 10;
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//P1614爱与愁的心痛
//int main()
//{
//	int n = 0, m = 0;
//	int arr[100005] = { 0 };
//	int i = 0;
//	scanf("%d %d", &n, &m);
//	int min = 10000000;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n - m+1; i++)
//	{
//		int a = m;
//		int sum = 0;
//		while (a)
//		{
//			a--;
//			sum += arr[i + a];
//		}
//		if (min > sum)
//			min = sum;
//	}
//	printf("%d", min);
//	return 0;
//}

//int main()
//{
//	int n = 0, x = 0;
//	scanf("%d %d", &n, &x);
//	int i = 0; 
//	int cont = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int a = i;
//		while (a)
//		{
//			int b = a % 10;
//			if (b == x)
//				cont++;
//			a /= 10;
//		}
//	}
//	printf("%d", cont);
//	return 0;
//}

//int main()
//{
//	int k  = 0;
//	scanf("%d", &k);
//	int i = 0;
//	double sum = 0.0;
//	for (i = 1; ; i++)
//	{
//		sum += 1 /(double) i;
//		if (sum >k)
//			break;
//	}
//	printf("%d",i);
//	return 0;
//}

//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//	int i = 1;
//	int sum = 0;
//	int m = 0;
//	int cont = 0;
//	while(i)
//	{
//		int j = 0;
//		m++;
//		for (j = 1; j<=m; j++)
//		{
//			sum += m;
//			cont++;
//			if (cont == k)
//				break;
//		}
//		i += m;
//		if (cont == k)
//			break;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int l = 0;
//	scanf("%d", &l);
//	int cont = 0;
//	int i = 0;
//	int sum = 0;
//	for (i = 2; ; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			sum += i;
//			if (sum > l)
//				break;
//			printf("%d\n", i);
//			cont++;
//			
//		}
//	}
//	printf("%d", cont);
//	return 0;
//}

//#include<math.h>
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 0;
//	for (i = a; i <= b; i++)
//	{
//		int cont = 0;
//		int sum = 0;
//		int n = i;
//		while (n)
//		{
//			cont++;
//			n /= 10;
//		}
//		n = i;
//		while (n)
//		{
//			sum += (n % 10) * pow(10, cont-1);
//			cont--;
//			n /= 10;
//		}
//		if (sum == i)
//		{
//			int j = 0;
//			int flag = 1;
//			for (j = 2; j < i; j++)
//			{
//				if (i % j == 0)
//				{
//					flag = 0;
//					break;
//				}
//				
//			}
//			if (flag == 1)
//				printf("%d\n", i);
//		}
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int max = 0, min =1005;
	int n = 0;
	scanf("%d", &n);
	while (n)
	{
		int num = 0;
		scanf("%d", &num);
		if (num > max)
			max = num;
		if (num < min)
			min = num;
		n--;
	}
	printf("%d", max - min);
}