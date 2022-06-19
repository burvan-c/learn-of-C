#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//结构成员访问操作符
struct book//结构体必须有分号
{
	char name[20];
	char id[20];
	int price;
};
int main()
{
	struct book b = { "c语言","c20220620",55 };
	printf("书名:%s\n", b.name);
	printf("书号:%s\n", b.id);
	printf("价格:%d\n", b.price);
	return 0;
}