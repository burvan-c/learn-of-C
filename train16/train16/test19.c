#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	//从大到小输出三个整数
	/*int a = 0, b = 0, c = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		int tmp;
		tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d\n", a, b, c);*/



	//打印1--100所有3的倍数的数字
	/*int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (0 == i % 3)
		{
			printf("%d ", i);
		}
	}*/




	//求两个数的最大公约数
	/*int m = 0, n = 0;
	scanf("%d%d", &m, &n);
	int max = (m > n) ? n : m;
	while (1)
	{
		if (0 == m % max && 0 == n % max)
		{
			printf("%d\n", max);
			break;
		}
		else
			max--;
	}*/



	//辗转相除法
	int m = 0, n = 0;
	scanf("%d%d", &m, &n);
	int t = 0;
	while (t = m % n)//%--取余
	{
		m = n;
		n = t;
	}
	printf("%d\n", n);
	//最小公倍数=m*n/最大公约数
	return 0;
}