//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	//unsigned char 0--255
//	unsigned char a = 200;
//	//11001000
//	unsigned char b = 100;
//	//01100100
//	unsigned char c = 0;
//	c = a + b;//先提升后相加
//	//a、b整形提升
//	//c是00101100
//	printf("%d %d", a + b, c);
//	//a、b、c整形提升
//	return 0;
//}



//打印杨辉三角
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0, j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//
//	}
//	return 0;
//}



//杀手问题
//int main()
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//	return 0;
//}



