#define _CRT_SECURE_NO_WARNINGS 1
//ָ��
//���ź�ת��Ϊ�����ź�   2^32bit=512Mb=0.5Gb   2^64bit
//���� �ֽ� kb Mb Gb Tb����
//һ���ڴ浥ԪΪһ���ֽ�
#include<stdio.h>
int main()
{
	int a = 10;//a���ڴ��з���Ŀռ�Ϊ8���ֽ�
	printf("%p\n", &a);//%pר���ڴ�ӡ��ַ
	int* pa = &a;//pa������ŵ�ַ��c������pa����ָ�����
	//*˵��pa��ָ�������int˵��paִ�еĶ�����int��
	* pa = 20;//*��Ӧ�ò�����*pa��ͨ��pa��ߵĵ�ַ�ҵ�a
	printf("%d\n", a);
	//ָ��Ĵ�С����ͬ


	//char ch = 'w';
	//char* pc = &ch;

	return 0;
}
