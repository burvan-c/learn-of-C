#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//动态内存开辟--可以根据需求改变内存大小
//栈区：局部变量、函数形参
//堆区：动态内存开辟 malloc  calloc  free  realloc
//静态区：静态变量、全局变量


//malloc free

//void* malloc(size_t size)
//int main()
//{
//	//int arr[10];//栈区
//	//动态内存开辟
//	int* p = (int*)malloc(10 * sizeof(int));//void*
//	//使用动态内存空间
//	if (p == NULL)
//	{
//		perror("main");
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);//p[i]<==>*(p+i)
//	}
//	//回收空间
//	free(p);
//	p = NULL;
//	return 0;
//}


//calloc
//void* calloc(size_t num, size_t size);