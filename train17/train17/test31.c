#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

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



//release--发布版本
//无法调试