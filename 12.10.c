#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
    int  s = 0;
    scanf("%d", &s);
    int k = sqrt(s);
    int i = 0;
    if (k * k == s)
    {
        printf("%d", 4 * k);
    }
    else
    {
        for (i = k; i >= 1; i--)
        {
            if (s % i == 0)
            {

                printf("%d", 2 * i + 2 * (s / i));
                break;
            }
        }
    }
    return 0;
}

int main()
{
    char s[5] = { 0 };
    scanf("%s", s);
    char str1[] = "East";
    char str2[] = "West";
    char str3[] = "North";
    char str4[] = "South";
    if (strcmp(s, str1) == 0)
    {
        printf("West");
    }
    if (strcmp(s, str2) == 0)
    {
        printf("East");
    }
    if (strcmp(s, str3) == 0)
    {
        printf("South");
    }
    if (strcmp(s, str4) == 0)
    {
        printf("North");
    }

    return 0;
}

int main()
{
    int i = 0, j = 0;
    scanf("%d %d", &i, &j);
    if (i % j == 0)
    {
        printf("%d", i / j);
    }
    else
        printf("%d", i / j + 1);
}

#include <stdio.h>
int main()
{
    int n = 0;
    double  sum = 0.0, ave = 0.0;
    int cont = 0, a = 0;
    while ((scanf("%d", &n)) != EOF)
    {

        if (n == -1)
            break;
        else {
            cont++;
            sum += n;
            if (n < 60)
                a++;
        }
    }
    ave = sum / cont;
    printf("Average:%.2lf\n", ave);
    printf("Failed:%d\n", a);
    return 0;
}

char next(char ch)
{
    if (ch == 'z')
    {
        return 'a';
    }
    if (ch == 'Z')
    {
        return 'A';
    }

    return ch + 1;
}
int main()
{
    int m, i;
    char ch;
    scanf("%d", &m);
    getchar();
    for (i = 0; i < m; i++) {
        ch = getchar();
        putchar(next(ch));
    }
    return 0;
}

int print(int m, int n)
{
    int i = 0;
    for (i = 0; i < m; i++)
    {
        int j = 0;
        for (j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == m - 1 || j == n - 1)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");

    }
}

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    print(m, n);
}