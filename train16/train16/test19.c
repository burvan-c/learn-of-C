#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	//�Ӵ�С�����������
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



	//��ӡ1--100����3�ı���������
	/*int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (0 == i % 3)
		{
			printf("%d ", i);
		}
	}*/




	//�������������Լ��
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



	//շת�����
	int m = 0, n = 0;
	scanf("%d%d", &m, &n);
	int t = 0;
	while (t = m % n)//%--ȡ��
	{
		m = n;
		n = t;
	}
	printf("%d\n", n);
	//��С������=m*n/���Լ��
	return 0;
}