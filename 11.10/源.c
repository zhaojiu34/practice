#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    double f = 0.0, c = 0.0;
    scanf("%lf", &f);
    c = ((f - 32)) * 5 / 9;
    printf("%.3lf", c);
    return 0;
}
int main()
{
    int r = 0;
    scanf("%d", &r);
    double p = 3.14;
    double s = 0.0;
    s = p * r * r;
    printf("%.2lf", s);
    return 0;
}
int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    double r = 0.0;
    r = (double)(a * b) / (a + b);
    printf("%f", r);
    return 0;
}
nt main()
{
    int h, r;
    float v;
    float p;
    scanf("%d%d", &h, &r);
    v = 3.14 * h * r * r;
    p = (int)(10000.0 / v);//p是整型转换的浮点数，小数为0，来判断，如果刚好整除，就没有小数，两边相等
                       //若有小数，则两边不相等。

    if (10000.0 / v == p)//如果刚好整除，商就是杯数
    {
        // if(10000%v==0)//注意：这样不对，% 两个操作数必须是整数
        printf("%d", (int)(10000 / v));
    }
    else
        printf("%d", (int)(10000 / v) + 1);
    return 0;
}

int main()
{
    int a = 0, b = 0;
    int d = 0;
    scanf("%d %d", &a, &b);
    d = b - a;
    printf("%d", b + d);
    return 0;
}
int main()
{
    int r = 0;
    double p = 3.14;
    scanf("%d", &r);
    double v = 0.0;
    v = p * r * r * r * 4 / 3;
    printf("%lf", v);
    return 0;
}
int main()
{
    int h = 0, m = 0, min = 0;
    while (scanf("%d:%d %d", &h, &m, &min) != EOF)
    {
        h = (h + (min + m) / 60) % 24;
        m = (min + m) % 60;
        printf("%02d:%02d", h, m);
    }
    return 0;
}
int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        if (n / 12 == 0)
        {
            printf("2\n");
        }
        else
        {
            int c = 0;
            c = (n / 12) * 4 + 2;
            printf("%d\n", c);
        }

    }


    return 0;
}
int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);

    long long p = a * b;
    long long sum = 0;
    long long max = 0, min = 0;
    while (b != 0)
    {
        long long t = 0;
        t = a % b;
        a = b;
        b = t;
    }
    max = b;
    min = p / max;
    sum = max + min;

    printf("%lld\n", sum);


    return 0;
}
void Reverse(char* str)
{
    char* left = str;
    char* right = str + strlen(str) - 1;
    while (left < right)
    {
        char temp = *left;
        *left = *right;
        *right = temp;
        ++left;
        --right;
    }
}


int main()
{
    char str[] = "hello bit";
    //在这里完成下面函数，参数自己设计，要求：使用指针
    Reverse(str);
    return 0;
}


// 注意：如果是在线OJ时，必须要考虑循环输入，因为每个算法可能有多组测试用例进行验证，参考以下main函数写法，
int main()
{
    char str[101] = { 0 };
    while (gets(str))
    {
        Reverse(str);
        printf("%s\n", str);
        memset(str, 0, sizeof(str) / sizeof(str[0]));
    }
    return 0;
}
void leftRound(char* src, int time)
{
    int i, j, tmp;
    int len = strlen(src);
    time %= len; //长度为5的情况下，旋转6、11、16...次相当于1次，7、12、17...次相当于2次，以此类推。
    for (i = 0; i < time; i++) //执行k次的单次平移
    {
        tmp = src[0];
        for (j = 0; j < len - 1; j++) //单次平移
        {
            src[j] = src[j + 1];
        }
        src[j] = tmp;
    }
}
size_t my_strlen(const char* str)
{
    const char* eos = str;
    while (*eos++);
    return(eos - str - 1);
}