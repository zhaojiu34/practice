#define _CRT_SECURE_NO_WARNINGS 1
//int Func(int n, int x)
//{
//    if (n == 0)
//        return 1;
//    else if (n == 1)
//        return 2 * n;
//    else
//        return 2 * x * Func(n - 1, x) - 2 * (n - 1) * Func(n - 2, x);
//}
//int main()
//{
//    int n = 0, x = 0;
//    scanf("%d %d", &n, &x);
//    int r = Func(n, x);
//    printf("%d", r);
//    return 0;
//}

//int Func(int n, int m)
//{
//    if (0 == m)
//        return 1;
//    else
//        return n * Func(n - 1, m-1);
//}
//int main()
//{
//    int n = 0, m = 0;
//    scanf("%d %d", &n, &m);
//    int r = Func(n, m);
//    printf("%d", r);
//    return 0;
//}

//void Func(int n)
//{
//    if (n <= 9)
//        printf("%d", n);
//    else
//    {
//        printf("%d", n % 10);
//        Func(n / 10);
//    }
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    Func(n);
//    return 0;
//}

//void digit(int n, int i)
//{
//    if (n <= 9)
//        printf("%d", n);
//    else
//    {
//        if (i)
//        {
//            digit(n / 10, i-1);
//            printf("%d", n % 10);
//        }
//        else
//            ;
//
//    }
//
//}
//
//int main()
//{
//    int x = 0, i = 0;
//    scanf("%d %d", &x, &i);
//    digit(x, i);
//    return 0;
//}

//int Func_max(int a, int b, int c)
//{
//    if (a < b)
//    {
//        int tmp = a;
//        a = b;
//        b = tmp;
//    }
//    if (a < c)
//    {
//        int tmp = a;
//        a = c;
//        c = tmp;
//    }
//    return a;
//}
//int main()
//{
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    int d = Func_max(a + b, b, c);
//    int e = Func_max(a, b + c, c);
//    int f = Func_max(a, b, c + b);
//    double m = 0.0;
//    m = (double)d / ((double)e + (double)f);
//    printf("%.2lf", m);
//    return 0;
//}

//int Func(int a, int b)
//{
//    int cont = 0;
//    int i = 0;
//    for (i = a; i <= b; i++)
//    {
//        int m = i;
//        int sum = 0;
//        while (m)
//        {
//            sum += m % 10;
//            m /= 10;
//        }
//        if (sum % 5 == 0)
//            cont++;
//    }
//    return cont;
//}
//int main()
//{
//    int a = 0, b = 0;
//    scanf("%d %d", &a, &b);
//    int r = Func(a, b);
//    printf("%d", r);
//    return 0;
//}

//int Func(int n)
//{
//    int sum = 0;
//    int a = n;
//    while (a)
//    {
//        sum += a % 10;
//        a /= 10;
//    }
//    if (sum / 10 == 0)
//        return sum;
//    else
//        return Func(sum);
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int r = Func(n);
//    printf("%d", r);
//    return 0;
//}

//int Func(int a, int b)
//{
//    int cont = 0;
//    int i = 0;
//    for (i = a; i <= b; i++)
//    {
//        int c = i;
//        while (c)
//        {
//            if (c % 10 == 2)
//                cont++;
//            c /= 10;
//        }
//    }
//    return cont;
//}
//int main()
//{
//    int l = 0, r = 0;
//    scanf("%d %d", &l, &r);
//    int cont = Func(l, r);
//    printf("%d", cont);
//    return 0;
//}

//double Func(int n)
//{
//    double m = 0;
//    while (n--)
//    {
//        int n = 0;
//        scanf("%d", &n);
//        if (n <= 60)
//            m += 0.1;
//        else
//            m += 0.2;
//    }
//    return m;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    double sum = Func(n);
//    printf("%.1lf", sum);
//    return 0;
//}

//int Func(int a, int b)
//{
//    int sum = 0;
//    int i = 0;
//    for (i = a; i <= b; i++)
//    {
//        int j = 0;
//        int flag = 1;
//        for (j = 2; j < i; j++)
//        {
//            if (i % j == 0)
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (flag == 1)
//        {
//            sum += i;
//        }
//    }
//    return sum;
//}
//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    int sum = Func(a, b);
//    printf("%d", sum);
//    return 0;
//}

//void Func(int n)
//{
//    int num = 0;
//    while (n--)
//    {
//        scanf("%d", &num);
//        int j = 0;
//        int flag = 1;
//        for (j = 2; j < num; j++)
//        {
//            if (num % j == 0)
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (flag == 1)
//            printf("true\n");
//        else
//            printf("false\n");
//    }
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    Func(n);
//    return 0;
//}