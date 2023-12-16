#define _CRT_SECURE_NO_WARNINGS 1
////1117整数去重
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[20005] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = i + 1; j < n; j++)
//		{
//			if (arr[i] == arr[j])
//				arr[j] = 0;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i])
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}

////2041新矩阵
//int main()
//{
//	int arr[25][25] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if (i == j || i + j == n - 1)
//				arr[i][j] += 10;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

////2042稀疏矩阵
//int main()
//{
//	int m = 0, n = 0;
//	scanf("%d %d", &n, &m);
//	int arr[105][105] = { 0 };
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= m; j++)
//		{
//			if (arr[i][j])
//			{
//				printf("%d %d %d", i, j, arr[i][j]);
//				printf("\n");
//			}
//		}
//	}
//	return 0;
//}

//#include <string.h>
//回文字符
//int main()
//{
//	int i = 0, j = 0;
//	char s[105] = { 0 };
//	scanf("%s", &s);
//	int len = strlen(s);
//	j = len - 2;
//	while (j > i)
//	{
//		if (s[i] != s[j])
//		{
//			printf("No");
//			break;
//		}
//		else
//		{
//			i++;
//			j--;
//		}
//	}
//	if (i >= j)
//		printf("Yes");
//	return 0;
//}

////1119矩阵交换行
//int main()
//{
//	int i = 0;
//	int arr[10][10] = { 0 };
//	for (i = 1; i <= 5; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= 5; j++)
//			scanf("%d", &arr[i][j]);
//	}
//	int m = 0, n = 0;
//	scanf("%d %d", &m, &n);
//	for (i = 1; i <= 5; i++)
//	{
//		int tmp = 0;
//		tmp = arr[m][i];
//		arr[m][i] = arr[n][i];
//		arr[n][i] = tmp;
//	}
//	for (i = 1; i <= 5; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

////1120同行列对角线矩阵的格
//int main()
//{
//	int n = 0, i = 0, j = 0;
//	int arr[15][15] = { 0 };
//	int a = 0, b = 0;
//	scanf("%d %d %d", &n, &i, &j);
//	for (a = 1; a <= n; a++)
//	{
//		printf("(%d,%d) ",i, a);
//	}
//	printf("\n");
//	for (a = 1; a <= n; a++)
//	{
//		printf("(%d,%d) ",a,j);
//	}
//	printf("\n");
//	for (a = 1; a <= n; a++)
//	{
//		for (b = 1; b <= n; b++)
//		{
//			if (b -a == j - i)
//			{
//				printf("(%d,%d) ", a, b);
//			}
//		}
//	}
//	printf("\n");
//	for (a = n; a >=1; a--)
//	{
//		for (b = 1; b <= n; b++)
//		{
//			if (a + b == i +j)
//			{
//				printf("(%d,%d) ", a, b);
//				break;
//			}
//		}
//	}
//	return 0;
//}

////1121计算矩阵边缘元素之和
//int main()
//{
//	int m = 0, n = 0;
//	scanf("%d %d", &m, &n);
//	int arr[105][105] = { 0 };
//	int i = 0, j = 0;
//	for (i = 1; i <= m; i++)
//		for (j = 1; j <= n; j++)
//			scanf("%d", &arr[i][j]);
//	int sum = 0;
//	for (i = 1; i <= m; i++)
//	{
//		for (j = 1; j <= n; j++)
//		{
//			if (((i == 1 || i == m) && j != 1) || ((i == m || i == 1) && j != n) || j == 1 || j == n)
//				sum += arr[i][j];
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

////1122计算鞍点
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 1, j = 0;
//	int x = 1, y = 1;
//	for (i = 1; i <= 5; i++)
//		for (j = 1; j <= 5; j++)
//			scanf("%d", &arr[i][j]);
//	int flag = 1,cont = 0;
//	while (cont < 5)
//	{
//		int s = 0,l = 0;
//		cont++;
//		//找行最大
//		for (i = 1; i <= 5; i++)
//		{
//			int j = 0, l =0;
//			for (j = 1; j <= 5; j++)
//			{
//				if (arr[cont][i] >= arr[cont][j])
//				{
//					l++;
//				}
//			}
//			if (l == 5)
//			{
//				x = cont;
//				y = i;
//				break;
//			}
//		}
//		//看看它是不是所在列最小的数
//		for (i = 1; i <= 5; i++)
//		{
//			if (arr[x][y] <= arr[i][y])
//			{
//				s++;
//			}
//		}
//		if (s == 5)
//		{
//			printf("%d %d %d", x, y, arr[x][y]);
//			break;
//		}
//		if(cont == 5)
//		printf("not found");
//	}
//	
//	return 0;
//}

////1123图形相似度
//int main()
//{
//	int m = 0, n = 0;
//	scanf("%d %d", &m, &n);
//	int a[105][105] = { 0 }, b[105][105] = { 0 };
//	int i = 0,cont = 0;
//	for (i = 0; i < m; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &b[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			if (a[i][j] == b[i][j])
//				cont++;
//		}
//	}
//	printf("%.2lf", (double)cont / (double)(m * n)*100.0);
//	return 0;
//}

////1124矩阵加法
//int main()
//{
//	int n = 0, m = 0;
//	scanf("%d %d", & n, &m);
//	int a[105][105] = { 0 }, b[105][105] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//			scanf("%d", &a[i][j]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &b[i][j]);
//			a[i][j] += b[i][j];
//		}
//	}
//	for (i = 0 ;i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

////1126矩阵转置
//int main()
//{
//	int n = 0, m = 0;
//	scanf("%d %d", &n, &m);
//	int a[105][105] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//			scanf("%d", &a[i][j]);
//	}
//	int b[105][105] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			b[j][i] = a[i][j];
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", b[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <math.h>
////1127图像旋转
//int main()
//{
//	int n = 0, m = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int a[105][105] = { 0 }, b[105][105] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//			scanf("%d", &a[i][j]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			b[j][abs(n - 1-i)] = a[i][j];
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", b[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

////1128图像模糊处理
//int main()
//{
//	int n = 0, m = 0;
//	scanf("%d %d", &n, &m);
//	int arr[105][105] = { 0 };
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//
//		for (j = 1; j <= m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= m; j++)
//		{
//			if (i == 1 || i == n || j == 1 || j == m)
//			{
//				printf("%d ", arr[i][j]);
//			}
//			else
//			{
//				int ave = 0;
//				//除以5.0先确保得到的平均值时准确的然后再四舍五入，如果直接/5，则结果直接取整，会有误差
//				ave = (arr[i][j] + arr[i + 1][j] + arr[i - 1][j] + arr[i][j + 1] + arr[i][j - 1]) / 5.0 + 0.5;
//				printf("%d ", ave);
//			}
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

////1125矩阵乘法
//int main()
//{
//	int n = 0, m = 0, k = 0;
//	scanf("%d %d %d", &n, &m, &k);
//	int a[105][105] = { 0 }, b[105][105] = { 0 }, c[105][105] = { 0 };
//	int i = 0, j = 0, t = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < k; j++)
//		{
//			scanf("%d", &b[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < k; j++)
//		{
//			for (t = 0; t < m; t++)
//			{
//				c[i][j] += a[i][t] * b[t][j];
//			}
//			printf("%d ", c[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

////2043杨辉三角
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[21][21] = { 0 };
//	int i = 0, j =0;
//	
//	for (i = 1; i <= n; i++)//0~n
//	{
//		for (j = 1; j <= n; j++)
//		{
//			if (i == 1 && j == 1)
//				arr[i][j] = 1;
//			else
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//
//		}
//	}
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

#include <stdio.h>
//2045蛇形填数
int main()
{
	int arr[22][22] = { 0 };
	int n = 0;
	scanf("%d", &n);
	int x = 1, y = n;
	int cont = 1;
	while (cont < n * n)
	{
		//线路一
		/*while (x < n && arr[x + 1][y] == 0)
		{
			arr[x][y] = cont;
			x++;
			cont++;
		}*/
		//cont和x都是先使用，再都加一，所以可以简写为
		while (x < n && arr[x + 1][y] == 0)
			arr[x++][y] = cont++;
		//线路二
		while (y >1 && arr[x][y-1] == 0)
			arr[x][y--] = cont++;
		//线路三
		while (x >1 && arr[x - 1][y] == 0)
			arr[x--][y] = cont++;
		//线路四
		while (y < n && arr[x][y+1] == 0)
			arr[x][y++] = cont++;
	}
	int i = 0,j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (arr[i][j] == 0)
				arr[i][j] = n * n;
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
