#define _CRT_SECURE_NO_WARNINGS 1
//#define���峣���ͺ�
#include<stdio.h>
#define add(x,y) x+y
void main()
{
	printf("%d\n", add(3, 5));//3+5=8
	printf("%d\n", 2*(add(3, 5)));//2*(3+5)=8
	printf("%d\n",2*add(3, 5));//2*3+5=8
	//ע�ⶨ������÷�
	return 0;
}