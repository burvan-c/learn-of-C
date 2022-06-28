//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}




//统计一个二进制数的1的个数
//int number1(int n)
//{
//	int count = 0;
//	int i = 0;
//	/*for (i = 0; i < 64; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}*/
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 10;
//	int ret = number1(n);
//	printf("%d\n", ret);
//	return 0;
//}



//两个整数二进制不同位的个数
//int main()
//{
//	int m = 0, n = 0, i = 0;
//	int count = 0;
//	scanf("%d %d", &m, &n);
//	for (i = 0; i < 64; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	//int ret = m ^ n;//异或
//	////在统计ret二进制中有几个1也可
//	printf("%d\n", count);
//
//	return 0;
//}



//打印整数二进制的奇数位与偶数位
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	//偶数位
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//
//	printf("\n");
//
//	//奇数位
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//
//	return 0;
//}



//整形大小在任何平台都是4个字节
//指针大小在32平台4个字节，64平台8个字节