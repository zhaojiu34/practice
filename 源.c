#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//    int a = 0, b = 0, c = 0, d = 0;
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//    double sum = 0.0;
//    sum = a * 0.2 + b * 0.1 + c * 0.2 + d * 0.5;
//    printf("%.1lf", sum);
//    return 0;
//}
//int main()
//{
//    int x1 = 0, y1 = 0;
//    int x2 = 0, y2 = 0;
//    scanf("%d %d", &x1, &y1);
//    scanf("%d %d", &x2, &y2);
//    int d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
//    printf("%d", d);
//    return 0;
//}
//int main()
//{
//    int x = 0, l = 0, r = 0;
//    scanf("%d %d %d", &x, &l, &r);
//    if (x >= l && x <= r)
//    {
//        printf("true");
//    }
//    else {
//        printf("false");
//    }
//
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
//    {
//        printf("yes");
//    }
//    else {
//        printf("no");
//    }
//    return 0;
//}
//int main()
//{
//    int y = 0, m = 0;
//    scanf("%4d %2d", &y, &m);
//    if (m >= 3 && m <= 5)
//    {
//        printf("spring");
//    }
//    else if (m >= 6 && m <= 8)
//    {
//        printf("summer");
//    }
//    else if (m >= 9 && m <= 11)
//    {
//        printf("autumn");
//    }
//    else {
//        printf("winter");
//    }
//    return 0;
//}
//int main()
//{
//    int a = 0, b = 0, c = 0, d = 0;
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//    if (a >= b && a >= c && a >= d)
//    {
//        printf("%d", a);
//    }
//    else if (b >= a && b >= c && b >= d)
//    {
//        printf("%d", b);
//    }
//    else if (c >= a && c >= b && c >= d)
//    {
//        printf("%d", c);
//    }
//    else if (d >= a && d >= c && d >= b)
//    {
//        printf("%d", d);
//    }
//    return 0;
//}
//int main()
//{
//    int num = 0;
//    scanf("%d", &num);
//    if (num % 2 == 0)
//    {
//        printf("2 ");
//    }
//    if (num % 3 == 0)
//    {
//        printf("3 ");
//    }
//    if (num % 7 == 0)
//    {
//        printf("7 ");
//    }
//    if (num % 2 != 0 && num % 3 != 0 && num % 7 != 0)
//    {
//        printf("n");
//    }
//    return 0;
//}

#include<stdio.h>
//int main()
//{
//    float a = 0.0;
//    char ch = 'n';
//    int num = 0;
//    scanf("%f %c", &a, &ch);
//    if (ch == 'y')
//    {
//        if (a < 1)
//        {
//            printf("25");
//        }
//        else {
//            if ((int)((a - 1) / 1) == a - 1)
//            {
//                num = 25 + (a - 1) * 1;
//                printf("%d", num);
//            }
//            else {
//                num = 25 + ((a - 1) / 1 + 1) * 1;
//                printf("%d", num);
//            }
//        }
//    }
//    else {
//        if (a < 1)
//        {
//            printf("20");
//        }
//        else {
//            if ((int)((a - 1) / 1) == a - 1)
//            {
//                num = 20 + (a - 1) * 1;
//                printf("%d", num);
//            }
//            else {
//                num = 20 + ((a - 1) / 1 + 1) * 1;
//                printf("%d", num);
//            }
//        }
//    }
//
//    return 0;
//}

//int main()
//{
//    int d = 0;
//    scanf("%d", &d);
//    double a = 0.0, b = 0.0;
//    a = d * 1.0;
//    b = 10 + (double)d / 10;
//    if (a > b)
//    {
//        printf("v");
//    }
//    else {
//        printf("w");
//    }
//    return 0;
//}

//int main()
//{
//    int x = 0, y = 0;
//    scanf("%d %d", &x, &y);
//    int x1 = 0, y1 = 0;
//    scanf("%d %d", &x1, &y1);
//    if (x == x1 && y < y1)
//    {
//        printf("u");
//    }
//    else if (x == x1 && y > y1)
//    {
//        printf("d");
//    }
//    else if (y == y1 && x < x1)
//    {
//        printf("r");
//    }
//    else if (y == y1 && x > x1)
//    {
//        printf("l");
//    }
//    return 0;
//}
//int main()
//{
//    int num = 0;
//    scanf("%d", &num);
//    switch (num)
//    {
//    case 1:
//        printf("Monday");
//        break;
//    case 2:
//        printf("Tuesday");
//        break;
//    case 3:
//        printf("Wednesday");
//        break;
//    case 4:
//        printf("Thursday");
//        break;
//    case 5:
//        printf("Friday");
//        break;
//    case 6:
//        printf("Saturday");
//        break;
//    case 7:
//        printf("Sunday");
//        break;
//    }
//    return 0;
//}
//int main()
//{
//    int y = 0, m = 0, d = 0;
//    scanf("%d %d %d", &y, &m, &d);
//    int y1 = 0, m1 = 0, d1 = 0;
//    scanf("%d %d %d", &y1, &m1, &d1);
//    if (y1 == y && m1 == m && d1 >= d)
//    {
//        printf("yes");
//    }
//    else if (y1 == y && m1 > m)
//    {
//        printf("yes");
//    }
//    else if (y1 > y)
//    {
//        printf("yes");
//    }
//    else {
//        printf("no");
//    }
//    return 0;
//}
//int main()
//{
//    int math = 0, c = 0, e = 0;
//    scanf("%d %d %d", &math, &c, &e);
//    int sum = 0;
//    sum = (math + c + e) / 3;
//    if (sum >= 60)
//    {
//        printf("NO");
//    }
//    else {
//        printf("YES");
//    }
//    return 0;
//}


int main()
{
    int a = 0, b = 0, c = 0;
    char d = 0;
    scanf("%1d-%3d-%5d-%c", &a, &b, &c, &d);
    int sum1 = 0, sum2 = 0, sum3 = 0;
    sum1 = b % 10 * 4 + b / 10 % 10 * 3 + b / 100 * 2;
    sum2 = c % 10 * 9 + c / 10 % 10 * 8 + c / 100 % 10 * 7 + c / 1000 % 10 * 6 + c / 10000 * 5;
    sum3 = sum1 + sum2 + a;

    if (d == 'X')
    {
        if (sum3 % 11 == 10)
        {
            printf("Right");
        }
        else {
            printf("%d-%d-%d-%d", a, b, c, sum3 % 11);
        }
    }
    else {
        if (sum3 % 11 == d)
        {
            printf("Right");
        }
        else {
            printf("%d-%d-%d-%d", a, b, c, sum3 % 11);
        }
    }

    return 0;
}























