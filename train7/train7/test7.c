#define _CRT_SECURE_NO_WARNINGS 1
//操作符
#include<stdio.h>
void main()
{
	int a = 9 / 2;
	printf("%d\n", a);        //默认取商

	float b = 9 / 2.0;
	printf("%f\n", b);     //注意除法运算符的用法

	int c = 9 % 2;    //%--去摸（余）
	printf("%d\n", c);

	int d = 2;          //int--四个字符，32位
	int e = d << 1;     //左移操作符移动的是二进制
	printf("%d\n", e);

	int a1 = 10;
	printf("%d\n", !a1);//单目操作符！表示非（0为假，非0为真）

	//if (a1)//如果a1为真.......
	//{

	//}
	//if (!a1)//如果a1为假.......
	//{

	//}

	int arr[5] = { 0 };
	printf("%d\n", sizeof arr);//计算数组总大小，单位是字节
	printf("%d\n", sizeof arr[0]);//计算数组下标元素大小，单位是字节


	return 0;        
}
