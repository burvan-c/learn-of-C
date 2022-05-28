#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>



//写一个函数判断一个数是否为素数
//int is_prime(int n)//自定义函数形式参量,返回类型为int
//{
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)
//	{
//		if (0 == n % j)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{      
//	//100--200之间的素数
//	int i = 0,count=0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}


//写一个函数判断一年是否为闰年
int is_leap_year(int x)
{
	return ((0 == x % 4 && 0 != x % 100) || (0 == x % 400));
	 
}
int main()
{
	int y = 0,count=0;
	for (y = 1000; y <= 2000; y++)
	{
		if (is_leap_year(y) == 1)
		{
			count++;
			printf("%d ", y);
		}
	}
	printf("\n%d\n", count);
	return 0;
}