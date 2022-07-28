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

//void* calloc(size_t num, size_t size);--num元素个数；size每个元素字节长度
//内存初始化为0
//int main()
//{
//	//int* p = (int*)malloc(40);//10个随机值
//	int* p = calloc(10, sizeof(int));//10个0
//	if (p == NULL)
//		return 1;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}



//realloc

//void* realloc (void* ptr, size_t size);--对动态开辟内存的大小做调整
//ptr--要调整的内存地址
//size--调整之后大小
//返回值为调整后内存的起始位置

int main()
{
	//int* p = (int*)malloc(40);//10个随机值
	int* p = calloc(10, sizeof(int));//10个0

	if (p == NULL)
	{
		perror("main");
		return 1;
	}
		
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 5;
	}

	int* ptr = realloc(p, 20 * sizeof(int));
	if (ptr != NULL)
	{
		p = ptr;
	}

	free(p);
	p = NULL;
	return 0;
}