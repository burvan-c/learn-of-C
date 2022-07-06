#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//int i;//全局变量，不初始化，默认为0
//int main()
//{
//	i--;//-1
//	//sizeof算出结果为unsigned int类型，全部转化为无符号整形比较
//	if (i > sizeof(i))//4个字节
//	{     //-1无符号数非常大
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}



//求sn=a+aa+aaa+aaaa+aaaaa的前5项和，a为一个数字
//int main()
//{
//	//由a组成的前n项和--不考虑溢出
//	int a = 0, n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0, sum = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//写一个函数打印arr数组的内容，不使用数组下标，使用指针
//int main()
//{
//	/*int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}*/
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	int* pend = arr + sz - 1;
//	while (p <= pend)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}



//打印0--100000之间的所以水仙花数
//水仙花数--一个n位数，各位数字的n次方之和等于该数本身

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//1.计算i的位数
//		int n = 1;
//		int tmp = i;//初始化
//		while (tmp / 10)
//		{
//			n++;
//			tmp= tmp / 10;
//		}
//
//		//2.计算i的次方之和
//		tmp = i;//赋值语句
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);//pow为库函数
//			tmp = tmp / 10;
//		}
//
//		//3.判断
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}



//int main()
//{
//	unsigned long pularray[] = { 6,7,8,9,10 };
//	unsigned long* pulptr;
//	pulptr = pularray;
//	*(pulptr + 3) += 3;
//	printf("%d %d\n", *pulptr, *(pulptr + 3));
//	return 0;
//} 



//打印菱形
