#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//���򻷾���Ԥ����
// 
//���뻷�������л���
// .c->������->.obj->������->��ִ�г���(.c--Դ�ļ���.obj--Ŀ���ļ�)
// 
//          ���루cl.exe)                   ���ӣ�link.exe)                                                          ���л���
//     Ԥ����    ����    ���        �Ѷ���ļ������ӿ��������(test.o....)�ϲ��α����ű�ĺϲ����ض�λ       main����    ��ջ
//Ԥ���룺ͷ�ļ�������#define����ķ��š�����滻��ע��ɾ�����ı�������
//���룺�﷨�������ʷ�������������������ŷ���
//��ࣺ�ѻ�����ת���ɻ���ָ������ƣ�,���ɷ��ű�
//
//Ԥ�������
//  __FILE__ ���б����Դ�ļ�
//  __LINE__ �ļ���ǰ�к�
//  __DATE__ �ļ�����������
//  __TIME__ �ļ�������ʱ��
//  __STDC__ ����������ѭANSI C��ֵΪ1������δ����


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



//#define--������źͺ�

//#define m 100    //�������
//#define sq(x) x*x   //�����,�겻�ܵݹ�
//int main()
//{
//	int n = m;//Ԥ����׶α�Ϊ100
//	printf("%d\n", n);
//
//	printf("%d\n", sq(3+1));//7
//	return 0;
//}



//  #��##

//#define print(x,format) printf("the value of "#x" is "format"\n",x)   //#a<==>"a"
//#define ca(x,y) x##y
//int main()
//{
//	int a = 10;
//	print(a,"%d");
//
//	int c2 = 100;
//	printf("%d\n", ca(c, 2));//##��c��2��ϳ�c2(������������ϳ�һ��)
//	return 0;
//}


//�������õĺ����

//#define max(x,y) ((x)>(y)?(x):(y))
//int main()
//{
//	int a = 5, b = 8;
//	int m = max(a++, b++);
//	printf("m=%d\n", m);//a=6,b=9,m=(b++)
//	return 0;
//}



//����Ⱥ�������,�����޷����

//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//int main()
//{
//	int* p = MALLOC(10, int);
//	return 0;
//}



//��������(inline) ����˺��뺯�����ŵ�(���뺯��������ȱ��)

//�������Լ��--����ȫ����д����������Ҫȫ����д��

//#undef--�Ƴ�һ���궨��

//#define M 100
//int main()
//{
//	int a = M;
//#undef M
//	printf("%d\n", a);
//	return 0;
//}



//��������

