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

//struct S
//{
//	int i;//4个字节
//	char c;//1个字节
//};
//struct S2
//{
//	char c1;//1个字节
//	int i;//4个字节
//	double d;//8个字节
//};
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", sizeof(s));
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//	//结构体内存对齐---拿空间换时间
//	//1.第一个成员放在存储位置0偏移处
//	//2.第二个及以后成员放在一个对齐数(成员大小与默认对齐数的较小值)的整数倍的地址处
//	//3.结构体总大小是所有成员对齐数中最大的对齐数的整数倍
//	return 0;
//}
//
//修改默认对齐数
//#pragma pack(2)//--把默认对齐数改成2
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//--取消修改
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}


//写一个宏(offsrtof)，计算结构体中某变量相对于首地址的偏移，给出说明

//#include<stddef.h>
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//int main()
//{
//	printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, c2));
//	return 0;
//}


//结构体传参

//struct S
//{
//	int data[1000];
//	int num;
//};
//void print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
//void print2(struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	struct S s = { {1,2,3,4},1000 };
//	print1(s);//传结构体，时间、空间很大
//	print2(&s);//传地址，时间、空间较小，效率高***************************
//	return 0;
//}


//结构体实现位段的能力

//1.位段成员必须为int  unsigned int   signed int
//2.位段成员后边有冒号、数字
//struct A
//{
//	//4个字节--32个比特位
//	int _a : 10;//_a成员占4个比特位
//	int _b : 20;//_b成员占6个比特位
//	//再开辟4个字节--32个比特位
//	int _c : 30;//_c成员占7个比特位
//	//再开辟4个字节--32个比特位
//	int _d : 12;//_d成员占11个比特位
//};
////上面的是位段，不是结构体
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	return 0;
//}
////1.位段成员可为int型或char型，不可以是其他类型
////2.位段成员为int型时以4个字节开辟空间，为char型时以1个字节开辟空间
////3.位段是不跨平台，涉及很多不确定因素


//位段内存分配

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	//十六进制的内存分配为 62 03 04
//	//所以这个vs位段内存分配为：一个字节内由低位到高位（右到左）使用比特位
//	//                          剩余比特位不够使用时会浪费掉
//	//                          其他编译器内存分配情况不确定
//	return 0;
//}




//枚举

//enum color
//{
//	red=5,        //常量,未初始化时默认为0
//	green=8,        //未赋值前默认递增为1
//	blue,
//};
//int main()
//{
//	//enum color c = blue;
//  //enum color c = color::blue;//可以用限定符写
//	printf("%d\n", red);//5
//	printf("%d\n", green);//8
//	printf("%d\n", blue);//9
//	return 0;
//}