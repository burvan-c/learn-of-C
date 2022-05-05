#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//结构体可以让c语言创造新的类型
//创建一个学生
struct stu
{
	char name[10];
	int age;
	double score;
};
//创建一个书的类型
struct book
{
	char name[10];
	float price;
	char id[30];
};
int main()
{
	struct stu s = { "张三",20,85 };//结构体的创建与初始化
	printf("1:%s %d %lf\n", s.name, s.age, s.score);//结构体变量.成员变量
	struct stu* ps = &s;
	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);//指针指向对象
	//->   结构体指针->成员变量名
	return 0;
}