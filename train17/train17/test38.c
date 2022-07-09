#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//指针进阶

//一级指针传参
//void print(int* ptr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//p为一级指针
//	print(p, sz);
//	return 0;
//}



//二级指针传参
//void test(int** p2)
//{
//	**p2 = 20;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	test(ppa);//二级指针传参
//	printf("%d\n", a);
//	return 0;
//}



//函数指针--指向函数的指针
//&函数名--取到函数的地址