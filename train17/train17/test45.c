//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>

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

//int main()
//{
//	//int* p = (int*)malloc(40);//10个随机值
//	int* p = calloc(10, sizeof(int));//10个0
//
//	if (p == NULL)
//	{
//		perror("main");
//		return 1;
//	}
//		
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 5;
//	}
//
//	int* ptr = realloc(p, 20 * sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}




//动态内存开辟常见错误
//1.对NULL指针的解引用操作
//2.对动态内存越界访问
//3.使用free释放非动态开辟的空间
//4.使用free释放动态内存中的一部分
//5.对同一动态开辟空间多次释放
//6.动态内存开辟空间忘记释放--内存泄露--问题严重



//动态内存分配

//char* gm(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void test(void)
//{
//	char* str = NULL;
//	str = gm(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}

//char* gm(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void test(void)
//{
//	char* str = NULL;
//    gm(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}


//char* gm(void)
//{
//	char p[] = "hello world";
//	return p;   //错误代码，返回后栈区会被释放，主函数找不到p*************************
//}




//柔性数组--结构体中最后一个元素是未知大小数组
//柔性数组成员前必须有其他成员
//sizeof大小不包括柔性数组大小
//用malloc()创建含柔性数组的结构，分配内存大于结构内存以适应柔性数组结构大小
//方便内存释放
//有利于访问速度

//struct
//{
//	int n;
//	int arr[0];//柔性数组成员
//};
//struct S
//{
//	int n;
//	int arr[];//柔性数组成员
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
//	ps->n = 10;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//
//	}
//	//增加空间
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 20 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	//使用
//	
//	//释放
//	free(ps);
//	ps = NULL;
//	return 0;
//}