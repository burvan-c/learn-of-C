#define _CRT_SECURE_NO_WARNINGS 1
#pragma once


#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//union un                     //联合体--成员共用同一空间
//{
//	short s[7];//14->对齐->16(0-13偏移量)
//	int n;//4
//};
//int main()
//{
//	printf("%d\n", sizeof(union un));
//		return 0;
//}


//enum enum_a
//{
//	x1,//0
//	y1,//1
//	z1=255,
//	a1,//256
//	b1,//257
//};


//typedef struct
//{
//	int a;//0-3偏移量
//	char b;//4
//	//5--浪费
//	short c;//6-7
//	short d;//8-9
//	//0--9,占10个字节->对齐->12个字节
//}AA_t;



//模拟实现atoi--字符串转换为整形

//int main()
//{
//	char* p = "-1234";
//	int ret = atoi(p);
//	printf("%d\n", ret);
//	return 0;
//}
int my_atoi(const char*s)
{
	assert(NULL != s);
}
int main()
{
	const char* p = "-1234";//常量字符串不可修改，但是指针p的内容可以修改，可以加上const
	int ret = my_atoi(p);
	printf("%d\n", ret);
	return 0;
}