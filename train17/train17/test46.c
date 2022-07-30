//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>


//x形图案

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//				{
//					printf("*");
//				}
//				else if(i+j==n-1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}



//7个分数，去掉最高最低分，输出平均成绩，保留两位小数（0--100）

//int main()
//{
//	int score = 0;
//	int i = 0;
//	int sum = 0;
//	int max = 0;
//	int min = 100;
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d", &score);
//
//		sum += score;
//
//		if (score > max)
//			max = score;
//		if (score < min)
//			min = score;
//	}
//	printf("%.2f", (sum - max - min) / 5.0);
//	return 0;
//}



//计算某年某月有多少天

//int main()
//{
//	int y = 0; 
//	int m = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	//                  1  2  3  4  5  6  7  8  9  10 11 12
//	while (scanf("%d %d", &y, &m) != EOF)
//	{
//		int day = days[m];
//		if (m == 2)
//			if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//				day += 1;
//		printf("%d\n", day);
//	}
//	return 0;
//}



//有序数字序列，从小到大，插入一个数字后仍为升序

//int main()
//{
//	int arr[51] = { 0 };
//	//输入
//	int n = 0;
//	scanf("%d", &n);
//	//指针？？？？
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("&d ", &arr[i]);
//
//	}
//	
//	//输入插入的数
//	int m = 0;
//	scanf("%d", &m);
//	//插入
//	for (i = n - 1; i>= 0; i--)
//	{
//		if (arr[i] > m)
//			arr[i + 1] = arr[i];
//		else
//		{
//			arr[i+ 1] = m;
//			break;
//		}
//	}
//	if (i < 0)
//		arr[0] = m;
//	//输出
//	for (i = 0; i < n + 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}