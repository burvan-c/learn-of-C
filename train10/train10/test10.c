#define _CRT_SECURE_NO_WARNINGS 1
//#define定义常量和宏
#include<stdio.h>
#define add(x,y) x+y
void main()
{
	printf("%d\n", add(3, 5));//3+5=8
	printf("%d\n", 2*(add(3, 5)));//2*(3+5)=8
	printf("%d\n",2*add(3, 5));//2*3+5=8
	//注意定义后宏的用法
	return 0;
}