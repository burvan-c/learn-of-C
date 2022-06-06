#define _CRT_SECURE_NO_WARNINGS 1
//编写程序数一下1--100的所有整数中出现多少个数字9
//#include<stdio.h>
//int main()
//{
//	int i = 0, count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (9 == i % 10)
//			count++;
//		else if (9 == i / 10)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//计算1/1-1/2+1/3-1/4......+1/99-1/100,打印结果
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++);
//	{
//		sum +=flag* 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//求10个整数中的最大值
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max =arr[0];
//	
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}


//输出乘法口诀表
#include<stdio.h>
int main()
{
	int i = 1;
	for (i = 1; i <= 9; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}