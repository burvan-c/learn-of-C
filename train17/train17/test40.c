#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//int a[] = { 1,2,3,4 };//���α���4���ֽ�
	//printf("%d\n", sizeof(a));//sizeof(��������--��������Ĵ�С
	//printf("%d\n", sizeof(a+0));//a+0:��һ��Ԫ�ص�ַ��x64Ϊ8���ֽ�
	//printf("%d\n", sizeof(*a));//*a:��һ��Ԫ�أ����α�����4���ֽ�
	//printf("%d\n", sizeof(a+1));//a+1:�ڶ���Ԫ�ص�ַ��x64Ϊ8���ֽ�
	//printf("%d\n", sizeof(a[1]));//�ڶ���Ԫ�أ����α�����4���ֽ�


	//printf("%d\n", sizeof(&a));//&a--�����ַ������һ����ַ�Ĵ�С
	//printf("%d\n", sizeof(*&a));//һ�������С
	//printf("%d\n", sizeof(&a+1));//һ����ַ��С
	//printf("%d\n", sizeof(&a[0]));//һ����ַ��С
	//printf("%d\n", sizeof(&a[0]+1));//һ����ַ��С

	



	/*char arr[] = { 'a','b','c','d','e','f' };*/
	//printf("%d\n", sizeof(arr));// ���������С--6���ַ�
	//printf("%d\n", sizeof(arr+0));// ������Ԫ�ص�ַ��С
	//printf("%d\n", sizeof(*arr));// ��Ԫ�ظ���
	//printf("%d\n", sizeof(arr[1]));// �ڶ���Ԫ��
	//printf("%d\n", sizeof(&arr));// һ����ַ��С
	//printf("%d\n", sizeof(&arr+1));// һ����ַ��С
	//printf("%d\n", sizeof(&arr[0]+1));// һ����ַ��С



	//printf("%d\n", strlen(arr));// ���ֵ
	//printf("%d\n", strlen(arr+0));// ���ֵ
	////printf("%d\n", strlen(*arr));// ����err
	////printf("%d\n", strlen(arr[1]));// ����err
	//printf("%d\n", strlen(&arr));//���ֵ
	//printf("%d\n", strlen(&arr+1));// ���ֵ
	//printf("%d\n", strlen(&arr[0]+1));// ���ֵ




	//char arr[] = {"abcdef"};//'\0'
	//printf("%d\n", sizeof(arr));// ���������С--7���ַ�7���ֽ� 
	//printf("%d\n", sizeof(arr+0));// ��Ԫ�ص�ַ��С--8���ֽ�
	//printf("%d\n", sizeof(*arr));//  ��һ��Ԫ�ش�С--1���ֽ�
	//printf("%d\n", sizeof(arr[1]));// �ڶ���Ԫ�ش�С--1���ֽ� 
	//printf("%d\n", sizeof(&arr));// һ����ַ��С--8���ֽ� 
	//printf("%d\n", sizeof(&arr+1));//  һ����ַ��С--8���ֽ� 
	//printf("%d\n", sizeof(&arr[0]+1));//  һ����ַ��С--8���ֽ� 



	//printf("%d\n", strlen(arr));//��6���ַ�--6
	//printf("%d\n", strlen(arr+0));//ͬ��һ��
	//printf("%d\n", strlen(*arr));//err 
	//printf("%d\n", strlen(arr[1]));// err
	//printf("%d\n", strlen(&arr));//ͬarr--6
	//printf("%d\n", strlen(&arr+1));//arr�¸�����--���ֵ 
	//printf("%d\n", strlen(&arr[0]+1));// ��b��ʼ���ַ�--5 



	char* p = "abcdef";//'\0'
	//printf("%d\n", sizeof(p));// һ��ָ�루��ַ����С--8���ֽ�
	//printf("%d\n", sizeof(p+1));//��b)һ��ָ�루��ַ����С--8���ֽ� 
	//printf("%d\n", sizeof(*p));// *p<==>a,һ���ַ���С--1���ֽ�  
	//printf("%d\n", sizeof(p[0]));// a,һ���ַ���С--1���ֽ�  
	//printf("%d\n", sizeof(&p));// һ��ָ�루��ַ����С--8���ֽ� 
	//printf("%d\n", sizeof(&p+1));//  һ��ָ�루��ַ����С--8���ֽ� 
	//printf("%d\n", sizeof(&p[0]+1));// һ��ָ�루��ַ����С--8���ֽ�  


	printf("%d\n", strlen(p));//��6���ַ�--6
	printf("%d\n", strlen(p + 1));// ��b��ʼ--5
	//printf("%d\n", strlen(*p));// err 
	//printf("%d\n", strlen(p[0]));//  err
	printf("%d\n", strlen(&p));//ͬp,��6���ַ�--6
	printf("%d\n", strlen(&p + 1));//�����ַ��������ֵ
	printf("%d\n", strlen(&p[0] + 1));//��b��ʼ--5   
	return 0;
}