#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//传址调用
//void add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("%d\n", num);//1
//
//	add(&num);
//	printf("%d\n", num);//2
//
//	add(&num);
//	printf("%d\n", num);//3
//	return 0;
//}


//函数的嵌套调用、链式访问
//函数不可以嵌套定义，但在函数中可以嵌套调用函数。
//即一个函数内不可以再定义另一个函数，但可以调用另一个函数。
//void test3()
//{
//	printf("学习使我快乐\n");
//}
//int test2() 
//{
//	test3();
//	return 0;
//}
//int main()
//{
//	test2();
//	return 0;
//}



//链式访问指把一个函数的返回值当作另一个函数的参数
//int main()
//{
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//
//
//	char arr1[20] = { 0 };
//	char arr2[] = "programming";
//	//strcpy(arr1, arr2);
//	//链式访问
//	printf("%s\n", strcpy(arr1, arr2));//strcpy函数的返回值作为printf函数的参数
//
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	//printf函数返回值是打印在屏幕上字符的个数：先屏幕打印43然后返回值为2；再屏幕打印2返回值为1……
//	return 0;
//}




//函数的声明和定义
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//函数声明一下--告知
//	int add(int, int);
//
//	int c = add(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//函数定义（在主函数前面时不需要声明）
//int add(int x, int y)
//{
//	return x + y;
//}


//函数声明一般放在头文件中：创建 add.h   add.c   sub.h sub.c 几个文件
//函数的定义一般放在对应的.c文件中
#include"add.h"//这里引用别人的文件用双引号
#include"sub.h"
int main()
{
	int a = 10, b = 20;
	int c = add(a, b),d=sub(a,b);
	printf("%d\n%d\n", c,d);
	return 0;
}
//头文件和源文件中的文件可以先移除（不是删除）然后通过添加现有文件再添加回来



//防止透露原码操作：
// 
//卖方：分开写.h与.c文件； 把.h与.c文件放在新项目中；  
//      右击新项目名称，选择属性，常规，配置类型，把应用程序（.exe)改为静态库（.lib),点击应用,确定
//      ctrl+f7编译一下,然后CTRL+f5；在debug文件中可以找到对应的.lib静态文件
//      静态文件中全部是乱码；把复制的.h文件详细解释全部删除；把对应.h和.lib静态文件卖给买方

//买方：把买来的.h文件添加到头文件中；（记得程序中引用对应的头文件）
//      在程序中导入静态库，如下：
//      #pragma comment(lib,"***.lib")   ***.lib是指买来的静态库文件
//      此时程序就可正常运行