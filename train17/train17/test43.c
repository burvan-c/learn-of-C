#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�Զ������ͣ��ṹ��   ö��    ����
//�ṹ�ǳ�Ա�����ļ��ϣ���Ա������Ϊ��ͬ����

//struct tag  //�ؼ���  �ṹ��
//{
//	void smemb - list();//��Ա�����б�
//}variable_list;//�����б�

//struct book
//{
//	char name[20];
//	int price;
//	char id[12];
//}b4,b5,b6;     //�������ֱ�Ӵ���������Ϊȫ�ֱ�����b1 b2 b3Ϊ�ֲ�����
//int main()
//{
//	struct book b1;
//	struct book b2;
//	struct book b3;
//
//	return 0;
//}


//�ṹ����Բ���ȫ����

//struct   //�����ṹ������--ֻ����һ�Σ�û�б�ǩ
//{
//	int a;
//	char b;
//	char c;
//}x;
//struct   //�����ṹ������
//{
//	int a;
//	char b;
//	char c;
//}*ps;//�ṹ��ָ��


//�ṹ��������

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
//	struct n s;//��������ݹ�
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
//	struct note* next;//������+ָ���򣨽ṹ��������--����ͬ���ͽṹ��ָ�룩
//};
//
//typedef struct note  //typedef--������ 
//{
//	int data;
//	struct note* next;
//	//ǰ���Ѿ�����struct note,Ȼ�����������struct note*   ***************************
//}note;//�����Ӧtypedef,������Ϊnote  *************************************************



//�ṹ������Ķ������ʼ��

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
//	//��ӡ   .��Խṹ�����  ->��Խṹ��ָ��
//	printf("%lf %c %d %c\n", sb.d, sb.s.c1, sb.s.i, sb.c);
//	return 0;
//}


//�ṹ���ڴ���� 

struct S
{
	int i;//4���ֽ�
	char c;//1���ֽ�
};
struct S2
{
	char c1;//1���ֽ�
	int i;//4���ֽ�
	char c2;//1���ֽ�
};
int main()
{
	struct S s = { 0 };
	printf("%d\n", sizeof(s));
	struct S2 s2 = { 0 };
	printf("%d\n", sizeof(s2));
	//�ṹ���ڴ����
	return 0;
}


