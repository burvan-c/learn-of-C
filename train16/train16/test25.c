#define _CRT_SECURE_NO_WARNINGS 1
//一维数组
//数组：相同元素的集合；常量表达式
//完全初始化  int arr[10]={1,2,3,4,5,6,7,8,9,10}
//不完全初始化  int arr[10]={1,2,3,4,5}  剩余默认为0
//char ch[5]="abc"  a b c \0 0
//char ch[]="abc"   a b c \0
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4] = 5;
//	int i =0;
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	/*printf("%x\n", 0x12);
//	printf("%p\n", 0x12);*///%p--按地址格式打印--十六进制打印
//
//
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d]=%p\n",i, &arr[i]);
//		//一维数组在内存中是连续存放的
//		//随着数组下标的增长，地址由低到高变化
//	}
//	return 0;
//}


int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;//数组名是数组首元素地址**************************************
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *p);
		p++;
	}
	return 0;
}

