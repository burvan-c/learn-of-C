#define _CRT_SECURE_NO_WARNINGS 1
#pragma once


#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//union un                     //������--��Ա����ͬһ�ռ�
//{
//	short s[7];//14->����->16(0-13ƫ����)
//	int n;//4
//};
//int main()
//{
//	printf("%d\n", sizeof(union un));
//		return 0;
//}


//enum enum_a
//{
//	x1,//0
//	y1,//1
//	z1=255,
//	a1,//256
//	b1,//257
//};


//typedef struct
//{
//	int a;//0-3ƫ����
//	char b;//4
//	//5--�˷�
//	short c;//6-7
//	short d;//8-9
//	//0--9,ռ10���ֽ�->����->12���ֽ�
//}AA_t;



//ģ��ʵ��atoi--�ַ���ת��Ϊ����

//int main()
//{
//	char* p = "-1234";
//	int ret = atoi(p);
//	printf("%d\n", ret);
//	return 0;
//}
int my_atoi(const char*s)
{
	assert(NULL != s);
}
int main()
{
	const char* p = "-1234";//�����ַ��������޸ģ�����ָ��p�����ݿ����޸ģ����Լ���const
	int ret = my_atoi(p);
	printf("%d\n", ret);
	return 0;
}