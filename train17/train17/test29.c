#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//结构成员访问操作符
struct book
{
	char name[20];
	char id[20];
	int price;
};
int main()
{
	struct book b = { "c语言","c0620",25 };
	printf("书名:%s\n书号:%s\n价格:%d\n", b.name, b.id, b.price);
	return 0;
}