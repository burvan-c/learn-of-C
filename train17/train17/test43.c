#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//自定义类型：结构体   枚举    联合
//结构是成员变量的集合，成员变量可为不同类型

//struct tag  //关键字  结构名
//{
//	void smemb - list();//成员变量列表
//}variable_list;//变量列表

//struct book
//{
//	char name[20];
//	int price;
//	char id[12];
//}b4,b5,b6;     //这里可以直接创建变量，为全局变量，b1 b2 b3为局部变量
//int main()
//{
//	struct book b1;
//	struct book b2;
//	struct book b3;
//
//	return 0;
//}


//结构体可以不完全声明

//struct   //匿名结构体类型--只能用一次，没有标签
//{
//	int a;
//	char b;
//	char c;
//}x;
//struct   //匿名结构体类型
//{
//	int a;
//	char b;
//	char c;
//}*ps;//结构体指针


//结构体自引用

//struct a
//{
//	int i;
//	char c;
//};
//struct b
//{
//	char c;
//	struct a sa;
//	double d;
//};
//
//struct n
//{
//	int d;
//	struct n s;//这里会死递归
//};
//int main()
//{
//	struct n sn;
//	return 0;
//}
//
//struct note
//{
//	int data;
//	struct note* next;//数据域+指针域（结构体自引用--包含同类型结构体指针）
//};
//
//typedef struct note  //typedef--重命名 
//{
//	int data;
//	struct note* next;
//	//前面已经有了struct note,然后这里可以用struct note*   ***************************
//}note;//这里对应typedef,重命名为note  *************************************************



//结构体变量的定义与初始化

//struct S
//{
//	char c1; 
//	int i;
//}s1,s2;
//struct B
//{
//	double d;
//	struct S s;
//	char c;
//};
//int main()
//{
//	struct S s3 = { 'x',10 };
//	struct B sb = { 3.14,{'w',100},'g' };
//	//打印   .针对结构体变量  ->针对结构体指针
//	printf("%lf %c %d %c\n", sb.d, sb.s.c1, sb.s.i, sb.c);
//	return 0;
//}


//结构体内存对齐 

struct S
{
	int i;//4个字节
	char c;//1个字节
};
struct S2
{
	char c1;//1个字节
	int i;//4个字节
	char c2;//1个字节
};
int main()
{
	struct S s = { 0 };
	printf("%d\n", sizeof(s));
	struct S2 s2 = { 0 };
	printf("%d\n", sizeof(s2));
	//结构体内存对齐
	return 0;
}


