#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//int a[] = { 1,2,3,4 };//整形变量4个字节
	//printf("%d\n", sizeof(a));//sizeof(数组名）--整个数组的大小
	//printf("%d\n", sizeof(a+0));//a+0:第一个元素地址，x64为8个字节
	//printf("%d\n", sizeof(*a));//*a:第一个元素，整形变量，4个字节
	//printf("%d\n", sizeof(a+1));//a+1:第二个元素地址，x64为8个字节
	//printf("%d\n", sizeof(a[1]));//第二个元素，整形变量，4个字节


	//printf("%d\n", sizeof(&a));//&a--数组地址，计算一个地址的大小
	//printf("%d\n", sizeof(*&a));//一个数组大小
	//printf("%d\n", sizeof(&a+1));//一个地址大小
	//printf("%d\n", sizeof(&a[0]));//一个地址大小
	//printf("%d\n", sizeof(&a[0]+1));//一个地址大小

	



	/*char arr[] = { 'a','b','c','d','e','f' };*/
	//printf("%d\n", sizeof(arr));// 计算数组大小--6个字符
	//printf("%d\n", sizeof(arr+0));// 计算首元素地址大小
	//printf("%d\n", sizeof(*arr));// 首元素个数
	//printf("%d\n", sizeof(arr[1]));// 第二个元素
	//printf("%d\n", sizeof(&arr));// 一个地址大小
	//printf("%d\n", sizeof(&arr+1));// 一个地址大小
	//printf("%d\n", sizeof(&arr[0]+1));// 一个地址大小



	//printf("%d\n", strlen(arr));// 随机值
	//printf("%d\n", strlen(arr+0));// 随机值
	////printf("%d\n", strlen(*arr));// 出错err
	////printf("%d\n", strlen(arr[1]));// 出错err
	//printf("%d\n", strlen(&arr));//随机值
	//printf("%d\n", strlen(&arr+1));// 随机值
	//printf("%d\n", strlen(&arr[0]+1));// 随机值




	//char arr[] = {"abcdef"};//'\0'
	//printf("%d\n", sizeof(arr));// 计算数组大小--7个字符7个字节 
	//printf("%d\n", sizeof(arr+0));// 首元素地址大小--8个字节
	//printf("%d\n", sizeof(*arr));//  第一个元素大小--1个字节
	//printf("%d\n", sizeof(arr[1]));// 第二个元素大小--1个字节 
	//printf("%d\n", sizeof(&arr));// 一个地址大小--8个字节 
	//printf("%d\n", sizeof(&arr+1));//  一个地址大小--8个字节 
	//printf("%d\n", sizeof(&arr[0]+1));//  一个地址大小--8个字节 



	//printf("%d\n", strlen(arr));//含6个字符--6
	//printf("%d\n", strlen(arr+0));//同上一个
	//printf("%d\n", strlen(*arr));//err 
	//printf("%d\n", strlen(arr[1]));// err
	//printf("%d\n", strlen(&arr));//同arr--6
	//printf("%d\n", strlen(&arr+1));//arr下个数组--随机值 
	//printf("%d\n", strlen(&arr[0]+1));// 从b开始数字符--5 



	char* p = "abcdef";//'\0'
	//printf("%d\n", sizeof(p));// 一个指针（地址）大小--8个字节
	//printf("%d\n", sizeof(p+1));//（b)一个指针（地址）大小--8个字节 
	//printf("%d\n", sizeof(*p));// *p<==>a,一个字符大小--1个字节  
	//printf("%d\n", sizeof(p[0]));// a,一个字符大小--1个字节  
	//printf("%d\n", sizeof(&p));// 一个指针（地址）大小--8个字节 
	//printf("%d\n", sizeof(&p+1));//  一个指针（地址）大小--8个字节 
	//printf("%d\n", sizeof(&p[0]+1));// 一个指针（地址）大小--8个字节  


	printf("%d\n", strlen(p));//含6个字符--6
	printf("%d\n", strlen(p + 1));// 从b开始--5
	//printf("%d\n", strlen(*p));// err 
	//printf("%d\n", strlen(p[0]));//  err
	printf("%d\n", strlen(&p));//同p,含6个字符--6
	printf("%d\n", strlen(&p + 1));//跳过字符串，随机值
	printf("%d\n", strlen(&p[0] + 1));//从b开始--5   
	return 0;
}