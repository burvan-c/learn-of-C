#define _CRT_SECURE_NO_WARNINGS 1
//常见关键字--c语言提供，不可自己创建，不可做变量名
//auto--局部变量关键字，一般省略
//extern--申明外部符号
//register--寄存器关键字 
//auto  break  case  char  const  contine  default  do  double  else  enum 
//extern  float  for  goto  if  long  register  return  short  signed  sizeof
//static  struct  switch  typedef  union  unsigned  void  volatile  while
//typedef--类型重定义
#include<stdio.h>
/*typedef unsigned int u_t;*///把unsigned int重新定义为u_t
void dbas()
{
	static int b = 1;//2 3 4 5 6 7 8 9 10 11改变了生命周期
	b++;
	printf("%d ", b);
}
int main()
{
	/*unsigned int a = 1;
	u_t a = 1;*/

	//static--静态的
	//修饰局部变量、全局变量、函数
	//static修饰全局变量使这个变量只能在自己的源文件使用，其他文件不可使用
	//static修饰函数使这个函数只能在自己的源文件使用，其他文件不可使用
	int i = 0;
	while (i < 10)
	{
		dbas();
		i++;
	}
	return 0;
}
//栈区：存储局部变量，函数参数
//堆区：动态内存分配
//静态区：全局变量，static修饰的静态变量