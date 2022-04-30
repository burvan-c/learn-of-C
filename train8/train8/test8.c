#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void main()
{
	int a = 0;
	printf("%d\n", ~a);    //~按位取反--把所有二进制的数字1变成0，0变成1
	//原码  反码  补码   整数在内存中以补码形式存储
	//第一位为符号位，其他位为有效位；
	//原码的第一位不变其他位取反得到反码；
	//反码加1为补码
	//正整数原码 反码 补码相同


	int b = 2;
	int c = ++b;   //前置++表示先自加后使用
	printf("%d\n%d\n", c, b);


	int b2 = 4;
	int c2 = b2++;   //后置++表示先使用后自加
	printf("c2=%d\nb2=%d\n", c2, b2);

	int d = (int)3.14;//强制类型转换
	printf("d=%d\n", d);

	int a1, b1, c1, d1, max, d2;
	a1 = 5;
	b1 = 0;
	c1 = a1 && b1;//逻辑与
	d1 = a1 || b1;//逻辑或
	printf("c1=%d\nd1=%d\n", c1,d1);


	//条件操作符   E1?E2:E3
	//E1成立E2计算出结果
	//E1不成立E3计算出结果
	max = a1 > b1 ? a1 : b1;
	printf("max=%d\n", max);


	//逗号隔开的表达式为逗号表达式
	//从左向右依次计算，整个表达式的结果为最后表达式的结果
	d2 = (a1 = b1 + 2, c1 = a1 - 4, b1 = c1 + 2);
	printf("d2=%d\n", d2);


	return 0;
}