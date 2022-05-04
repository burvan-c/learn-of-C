#define _CRT_SECURE_NO_WARNINGS 1
//指针
//电信号转换为数字信号   2^32bit=512Mb=0.5Gb   2^64bit
//比特 字节 kb Mb Gb Tb……
//一个内存单元为一个字节
#include<stdio.h>
int main()
{
	int a = 10;//a在内存中分配的空间为8个字节
	printf("%p\n", &a);//%p专用于打印地址
	int* pa = &a;//pa用来存放地址，c语言中pa叫做指针变量
	//*说明pa是指针变量，int说明pa执行的对象是int型
	* pa = 20;//*解应用操作，*pa是通过pa里边的地址找到a
	printf("%d\n", a);
	//指针的大小都相同


	//char ch = 'w';
	//char* pc = &ch;

	return 0;
}
