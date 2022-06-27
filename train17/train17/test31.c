//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<assert.h>

//结构体初阶
//数组--相同类型元素集合
//结构体--值的集合，值的类型可以不同

//struct b
//{
//	char c;
//	short s;
//	double d;
//};
//struct stu  //关键字+结构体名字
//{
//	//成员变量
//	struct b sb;
//	char name[20];
//	int age;
//	char id[20];
//}s1,s2;//s1,s2也是结构体变量，是全局变量
//
//void print1(struct stu t)
//{
//	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
//}
//
//void print2(struct stu* ps)
//{
//	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
//}
//
//int main()
//{
//	struct stu s={{'w',20,3.14},"c语言",25,"2022"};//对象
//	//s是局部变量
//	/*printf("%c\n", s.sb.c);
//	printf("%s\n", s.id);*/
//
//	/*struct stu* ps = &s;
//	printf("%c\n", (*ps).sb.c);
//	printf("%s\n", (*ps).id);
//	printf("%c\n", ps->sb.c);*/
//
//	//写个函数打印s的内容
//	print1(s);//传值调用
//	print2(&s);//传址调用（更优）
//
//	return 0;
//}






//调试技巧
//debug--调试版本  
// f10、f11--调试   f5--跳到下一个断点   f9--创建和取消断点
//ctrl+f5--开始执行不调试（可以逃过调试过程中创建的条件断点，进而判断修改后的代码是否正确）
//断点




//release--发布版本
//无法调试,进行各种优化，代码大小、运行速度最优


//局部变量放在栈区，栈区先使用高地址空间，再使用低地址空间





//模拟实现strcpy（返回目标空间的起始地址）
//void my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);//断言
//	assert(dest!=NULL);//断言
//  chnar* ret=dest;
//	while (*dest++ = *src++)//'\0'的ASCII码值为0   **************************
//	{
//		;
//	}
// return ret;
//}
//
//int main()
//{
//	char arr1[20] = {"xxxxxxxxxxx"};
//	char arr2[] = { "hello" };
//	
//	printf("%s\n", my_strcpy(arr1, arr2));//链式访问
//
//	return 0;
//}



//int main()
//{
//	//const修饰 变量，常变量，不可修改
//	const int num = 10;
//	const int* p = &num;
//	//const在*左边
//	//const修饰p，表示指针变量不可改变，但指针指向内容可以改变
//	//*p = 20;
//
//	const int num = 10;
//	int* const p = &num;
//	//const在*右边
//	//const修饰*p，表示指针指向内容不能通过指针来改变,但指针变量本身可修改
//	//*p = 20;
//	printf("%d\n", num);
//
//	return 0;
//}





//模拟实现strlen
//size_t my_strlen(const char* str)//size_t--unsigned int
//{
//	//assert(str != NULL);
//	assret(str);//同上
//	size_t count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//编程常见错误
//1.编译型错误--语法错误
//2.链接型错误--标识符、拼写错误
//3.运行型错误--调试、定位