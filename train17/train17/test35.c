#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//指针进阶
//指针是变量，存放地址
//指针大小为4/8个字节（x32/x64)
//指针类型决定了步长和解引用权限
//指针运算



//int main()
//{
//	//char ch = 'l';
//	//char* pc = &ch;
//
//	char* ps = "hello world";//首字母h的地址放在ps中
//	char arr[] = "hello world";//这里放的是hello world
//
//	printf("%c\n", *ps);
//	printf("%s\n", ps);//这里打印字符串，ps是起始位置
//	printf("%s\n", arr);
//	return 0;
//}


//int main()
//{
//	char str1[] = "hello world";
//	char str2[] = "hello world";
//	const char *str3 = "hello world";
//	const char *str4 = "hello world";
//
//	if (str1 == str2)//str1与str2的地址位置不同
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if(str3==str4)//首字符地址相同（常量字符串   不可更改）
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}



//指针数组：存放指针的数组
//int main()
//{
//	int a[] = { 1,2,3,4,5 };//整形指针数组
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//
//
//	int* arr[3]={a,b,c};//数组名为首元素地址
//
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", *arr[i] + j);
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//数组指针：一种指针，指向数组的指针
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	//arr:数组名为首元素地址
//	int (*parr)[] = &arr;//取出数组的地址******************************************
//	//parr是数组指针-存放数组的地址
//
//
//	double* d[5];
//	double* (*pd)[5] = &d;//double*是指向的类型；(*pd)表示指针；[5]表示指向内容为数组
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//
//	int* p1 = arr;
//	int(*p2)[10] = &arr;
//	//p1是整形指针，p2是数组指针，虽然arr与&arr地址相同但p1与p2类型不同
//
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	//这两者地址相同但意义完全不同
//
//	printf("%p\n", p1);
//	printf("%p\n", p1+1);
//	//跳过一个整形4个字节
//
//	printf("%p\n", p2);
//	printf("%p\n", p2+1);
//	//直接跳过一个数组
//
//	return 0;
//}


//数组名为数组元素首地址，但有两个例外
//1.sizeof(数组名)--数组名表示整个数组，计算整个数组大小，单位字节
//2.&数组名--数组名表示整个数组，取出整个数组大小


int main()
{
	int arr[10] = { 0 };
	int(*pa)[10] = &arr;

	return 0;
}