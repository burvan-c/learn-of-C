#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//程序环境、预处理
// 
//翻译环境、运行环境
// .c->编译器->.obj->链接器->可执行程序(.c--源文件，.obj--目标文件)
// 
//          编译（cl.exe)                   链接（link.exe)                                                          运行环境
//     预编译    编译    汇编        把多个文件和链接库进行链接(test.o....)合并段表，符号表的合并与重定位       main函数    堆栈
//预编译：头文件包含、#define定义的符号、宏的替换、注释删除（文本操作）
//编译：语法分析、词法分析、语义分析、符号分析
//汇编：把汇编代码转换成机器指令（二进制）,生成符号表
//
//预定义符号
//  __FILE__ 进行编译的源文件
//  __LINE__ 文件当前行号
//  __DATE__ 文件被编译日期
//  __TIME__ 文件被编译时间
//  __STDC__ 若编译器遵循ANSI C，值为1，否则未定义


//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	printf("%s\n", __FUNCTION__);
//
//	return 0;
//}



//#define--定义符号和宏

//#define m 100    //定义符号
//#define sq(x) x*x   //定义宏,宏不能递归
//int main()
//{
//	int n = m;//预处理阶段变为100
//	printf("%d\n", n);
//
//	printf("%d\n", sq(3+1));//7
//	return 0;
//}



//  #和##

//#define print(x,format) printf("the value of "#x" is "format"\n",x)   //#a<==>"a"
//#define ca(x,y) x##y
//int main()
//{
//	int a = 10;
//	print(a,"%d");
//
//	int c2 = 100;
//	printf("%d\n", ca(c, 2));//##把c与2组合成c2(把两个符号组合成一个)
//	return 0;
//}


//带副作用的宏参数

//#define max(x,y) ((x)>(y)?(x):(y))
//int main()
//{
//	int a = 5, b = 8;
//	int m = max(a++, b++);
//	printf("m=%d\n", m);//a=6,b=9,m=(b++)
//	return 0;
//}



//宏相比函数优势,函数无法替代

//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//int main()
//{
//	int* p = MALLOC(10, int);
//	return 0;
//}



//内联函数(inline) 结合了宏与函数的优点(宏与函数各有优缺点)

//宏的命名约定--宏名全部大写（函数名不要全部大写）

//#undef--移除一个宏定义

//#define M 100
//int main()
//{
//	int a = M;
//#undef M
//	printf("%d\n", a);
//	return 0;
//}



//条件编译

