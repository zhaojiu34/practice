#define _CRT_SECURE_NO_WARNINGS 1
int main1()
{
	int a = 20;
	int i = 0,cont = 0;
	for (i = 0; i < a; i++)
	{
		if (i % 2 == 0)
		{
			cont += 2;
		}
		else
		{
			cont++;
		}
	}
	printf("能买%d瓶", cont);

	return 0;
	
}
int main2()
{
	int i = 0;
	
	//上部分
	for (i = 0; i < 7; i++)
	{
		int j = 0;
		for (j = 0; j < 6 - i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2*i+1; j ++)
		{
			printf("*");
		}
		printf("\n");
	}
	//下半部分
	for (i = 0; i < 6; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < (6-i)*2-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
#include<math.h>
int main3()
{
	int num = 0;
	scanf("%d", &num);
	int sum = 0;
		if ( num<= 99)
		{
			sum = (int)pow(num % 10, 2) + (int)pow(num / 10, 2);

			if (sum == num)
				printf("%d是一个水仙花", num);

		}
		else if (num>=100 && num <= 999)
		{
			sum = (int)pow(num % 10, 3) + (int)pow(num / 100, 3)+(int)pow(num/10%10,3);
			if (sum == num)
				printf("%d是一个水仙花", num);

		}
		else if (num >= 1000 && num <= 9999)
		{
			sum = (int)pow(num % 10, 4) + (int)pow(num / 1000, 4) + (int)pow(num / 10 % 10, 4)+(int)pow(num /100 %10,4);
			if (sum == num)
				printf("%d是一个水仙花", num);
	     }
		else if (num >= 10000 && num <= 99999)
		{
			sum = (int)pow(num % 10, 5) + (int)pow(num / 10000, 5) + (int)pow(num / 10 % 10, 5) + (int)pow(num / 100 % 10, 5)+ (int)pow(num / 1000 % 10, 5);
			if (sum == num)
				printf("%d是一个水仙花", num);
		}
		

	return 0;
}
#include<math.h>
int main4()
{
	int a = 0;
	scanf("%d", &a);
	int sum = 0;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		int j = 0;
		int c = 0;
		for (j = 1; j <= (int)pow(10,i); j *= 10)
		{
			
				c += a * j;
				
		}
		sum += c;
	}
	printf("Sn= a+aa+aaa+aaaa+aaaaa = %d", sum);
}

int main5()
{
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	printf("%d", a + b);
	return 0;
}

int main6()
{
	printf("Hello,World!");
	return 0;
}

int main7()
{
	int a = 25, b = 15;
	double s = 0.0;
	s = (a + b) * 10.0;
	printf("%.2lf", s);
	return 0;
}
int main8()
{
	int x = 0;
	scanf("%d", &x);
	printf("%d %d", x, 10 * x);
	return 0;
}

int main9()
{
	printf("%d", (15 * 20 - 20 * 10) / (20 - 10));
	return 0;
}

int main10()
{
	int a = 0, b = 0, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", b);
	return 0;
}

int main11()
{
	long a = 0, b = 0, c = 0;
	scanf("%ld %ld %ld", &a, &b, &c);
	printf("%8ld %8ld %8ld", a, b, c);

	return 0;
}


int main12()
{
	char ch = '0';
	scanf("%c", &ch);
	printf("  %c\n",ch);
	printf(" %c%c%c\n",ch,ch,ch);
	printf("%c%c%c%c%c\n",ch,ch,ch,ch,ch);
	return 0;

}

int main13()
{
	int x = 0, y = 0, a = 0, b = 0;
	double z = 0.0;
	scanf("%d %d %d %d", &x,& a, &y, &b);
	z = (b * y - a * x) / (b - a) * 1.0;
	printf("%.2lf", z);

	return 0;
}
int main14()
{
	int a = 0, b = 0, c = 0;
	scanf("%d %d", &a, &b);
	c = a;
	a = b;
	b = c;
	printf("%d %d", a, b);
	return 0;
}
int main15()
{
	int a = 0., b = 0, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", a + b + c);
	return 0;
}
int main16()
{
	int n = 0, m = 0;
	double s = 0.0;
	scanf("%d %d", &n, &m);
	s = n - m * 0.8;
	printf("%.2lf", s);
	return 0;
}
int main17()
{
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	printf("%d", a + b);
	return 0;
}
int main18()
{
	int a = 0, b = 0, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", (a + b) / c);
	return 0;

}
int main19()
{
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	printf("%d %d", a / b, a % b);
	return 0;
}
int main20()
{
	int a = 0, b = 0;
	double c = 0.0;
	scanf("%d %d", &a, &b);
	c = (double)a / b ;
	printf("%.9lf", c);
	return 0;
}
int main21()
{
	double r = 0.0;
	double a = 3.1416;
	double d = 0.0, c = 0.0, s = 0.0;
	scanf("%lf", &r);
	d = 2 * r;
	c = 2 * a * r;
	s = a * r * r;
	printf("%.4lf %.4lf %.4lf", d, c, s);
	return 0;
}
	
int main22()
{
	int x = 0, y = 0;
	scanf("%d %d", &x, &y);
	int a = 0, b = 0;
	a = (4 * x - y)/2;
	b = (y - 2 * x) / 2;
	printf("%d %d", a, b);
	return 0;
}
int main23()
{
	int a = 0, b = 0;
	 double x = 0.00;
	scanf("%d %d", &a, &b);
	x = 1.0* b / a*100;
	printf("%.3lf%%",x );
	return 0;
}
int main24()
{
	double x = 0.0, a = 0.0;
	int b = 0, c = 0, d = 0;
	scanf("%lf %lf %d %d %d", &x, &a, &b, &c, &d);
	double y = 0.0;
	y = a * x * x * x + b * x * x + c * x + d;
	printf("%.7lf", y);
	return 0;
}

#include <stdio.h>
int main()
{
	printf("                ********\n");
	printf("               ************\n");
	printf("               ####....#.\n");
	printf("             #..###.....##....\n");
	printf("             ###.......######              ###                 ###           ###\n");
	printf("###\n");
	printf("                ...........               #...#               #...#         #...#\n");
	printf("#...#\n");
	printf("               ##*#######                 #.#.#               #.#.#         #.#.#\n");
	printf("#.#.#\n");
	printf("            ####*******######             #.#.#               #.#.#         #.#.#\n");
	printf("#.#.#\n");
	printf("           ...#***.****.*###....          #...#               #...#         #...#\n");
	printf("#...#\n");
	printf("           ....**********##.....           ###                 ###           ###\n");
	printf("###\n");
	printf("           ....****    *****....\n");
	printf("             ####        ####\n");
	printf("           ######        ######\n");
	printf("##############################################################              ##################################\n");
	printf("#...#......#.##...#......#.##...#......#.##------------------#              #...#......#.##------------------#\n");
	printf("###########################################------------------#              ###############------------------#\n");
	printf("#..#....#....##..#....#....##..#....#....#####################              #..#....#....#####################\n");
	printf("##########################################    #----------#                  ##############    #----------#\n");
	printf("#.....#......##.....#......##.....#......#    #----------#                  #.....#......#    #----------#\n");
	printf("##########################################    #----------#                  ##############    #----------#\n");
	printf("#.#..#....#..##.#..#....#..##.#..#....#..#    #----------#                  #.#..#....#..#    #----------#\n");
	printf("##########################################    ############                  ##############    ############\n");
	



	return 0;
}





































