#define _CRT_SECURE_NO_WARNINGS 1
//�ַ�������һ���ַ�--��˫������������һ���ַ�
#include<stdio.h>
#include<string.h>
int main()
{
	//�ַ�����--һ����ͬ���͵�Ԫ��
	//�ַ����ڽ�β��λ��������\0���ַ�
	//\0���ַ����Ľ�����־
	//char arr[] = "hello";
	//˫�����ַ������������ַ�
	char arr1[] = "abc";  //a,b,c,/0
	char arr2[] = { 'a', 'b', 'c' };  //a,b,cû�н�����־
	//%s��ʾ��ӡ�ַ���
	printf("%s\n", arr1);   
	printf("%s\n", arr2);
	//���ַ�������
	int len=strlen("abc");//string lengthҪ����ͷ�ļ�
	printf("%d\n", len);
	printf("%d\n", strlen(arr1));//3
	printf("%d\n", strlen(arr2));//�����һ�����ֵ
return 0;
}