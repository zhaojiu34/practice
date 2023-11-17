#define _CRT_SECURE_NO_WARNINGS 
//void menu(void)
//{
//	printf("***********************\n");
//	printf("***** 1.Add  2.Sub  ***\n");
//	printf("***** 3. Mul 4. Div ***\n");
//	printf("*****     0. exit   ***\n");
//	printf("***********************\n");
//	
//}
//int Add(int a, int b)
//{
//	return a + b;
//}
//int  Sub(int a, int b)
//{
//	return a - b;
//}
//int Mul(int a, int b)
//{
//	return a * b;
//}
//int Div(int a, int b)
//{
//	return a / b;
//}
//int main()
//{
//	int i = 0;
//	int input = 0;
//	int x = 0, y = 0;
//	int(* p[5])(int ,int )= { NULL,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("请输入您的选择：");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数：");
//			scanf("%d %d", &x, &y);
//			int r = (p[input])(x,y);
//			printf("结果是: %d\n", r);
//		}
//		else if (input == 0)
//		{
//			printf("退出计算机\n");
//		}
//		else
//		{
//			printf("输入数据错误\n");
//		}
//
//	} while (input);
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int com_int(const void* p1, const void* p2)
//{
//	return  *(int *) p1 -  *(int *) p2;
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[10] = { 3,1,2,6,5,7,9,8,4,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//	qsort(arr, sz, sizeof(arr[0]), com_int);
//	Print(arr, sz);
//
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//struct Stu
//{
//	char name[20];
//	int age[10];
//};
//int com_age(const void* p1, const void* p2)
//{
//	return (*(struct Stu*)p1).age - (*(struct Stu*)p2).age;
//}
//void test1()
//{
//	struct Stu arr[] = { {"zhangsan,56"},{"lisi",26},{"sunliu",45} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), com_age);
//}
//int com_name(const void* p3, const void* p4)
//{
//	return strcmp(((struct Stu*)p3)->name, ((struct Stu*)p4)->name);
//}
//void test2()
//{
//	struct Stu arr[] = { {"zhangsan,56"},{"lisi",26},{"sunliu",45} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), com_name);
//}
//
//int main()
//{
//	test1();
//	test2();
//	return 0;
//}

//#include<math.h>
//int main()
//{
//	double a = 0.0, b = 0.0, c = 0.0, d = 0.0,x = 0.0;
//	scanf("%lf %lf %lf %lf %lf", &x, &a, &b, &c, &d);
//	double y = 0.0;
//	y = a * pow(x, 3) + b * pow(x, 2) + c * x + d;
//	printf("%.7lf", y);
//}
//#include<stdio.h>
//int main()
//{
//	int f = 0;
//	scanf("%d",&f);
//	float c = 0.0;
//	c = (5.0* (f - 32) )/ 9.0;
//	printf("%.5f", c);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	double p = 3.14159;
//	double r = 0.0;
//	double d = 0.0, s = 0.0, c = 0.0;
//	scanf("%lf", &r);
//	d = 2 * r;
//	s = p * r * r;
//	c = 2 * p * r;
//	printf("%.4lf %.4lf %.4lf", d, c, s);
//
//	return 0;
//}
//int main()
//{
//	double r1 = 0.0, r2 = 0.0;
//	scanf("%lf %lf", &r1, &r2);
//	double r = 0.0;
//	r = (r1 * r2) / (r1 + r2);
//	printf("%.2lf", r);
//	return 0;
//}
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	int sum = 0;
//	sum = a * 0.2 + b * 0.3 + c * 0.5;
//	printf("%d", sum);
//}
//#include<stdbool.h>
//int main()
//{
//	
//	char b = 0.0;
//	printf("%d %d", sizeof(bool), sizeof(b));
//	return 0;
//}
//int main()
//{
//	float a = 0.0;
//	scanf("%f", &a);
//	printf("%d", (int)a);
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	scanf("%d", &ch);
//	printf("%c",(char)ch);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 0)
//	{
//		printf("yes");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a > 1 && a < 100)
//	{
//		printf("yes");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = 0;
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = 0;
//		tmp = a;
//		a= c;
//		c= tmp;
//	}
//	if (b < c)
//	{
//		int tmp = 0;
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//int main()
//{
//	int t = 0;
//	scanf("%d", &t);
//	if (t >= 25 && t <= 30)
//	{
//		printf("ok!");
//	}
//	else
//		printf("no!");
//	return 0;
//}
//int main()
//{
//	double n = 0.0;
//	scanf("%lf", &n);
//	if (n <= 20)
//		printf("%.2lf", 1.68 * n);
//	else
//		printf("%.2lf", 1.98 * n);
//	return 0;
//}
//int main()
//{
//	double a = 0.0, b = 0.0, c = 0.0;
//	scanf("%lf %lf %lf", &a, &b, &c);
//	if (a > b && a > c)
//		printf("%.2lf", a);
//	else if (b > a && b > c)
//		printf("%.2lf", b);
//	else
//		printf("%.2lf", c);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n > 0)
//		printf("positive\n");
//	else if (n < 0)
//		printf("negative\n");
//	else
//		printf("zero\n");
//	return 0;
//}
//int main()
//{
//	double a = 0.0;
//	scanf("%lf", &a);
//	if (a >= 0)
//		printf("%.2lf", a);
//	else
//		printf("%.2lf", -a);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 2 == 0)
//		printf("even\n");
//	else
//		printf("odd\n");
//	return 0;
//}