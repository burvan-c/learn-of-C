#define _CRT_SECURE_NO_WARNINGS 1
//������
#include<stdio.h>
void main()
{
	int a = 9 / 2;
	printf("%d\n", a);

	float b = 9 / 2.0;
	printf("%f\n", b);     //ע�������������÷�

	int c = 9 % 2;    //%--ȥ�����ࣩ
	printf("%d\n", c);

	int d = 2;          //int--�ĸ��ַ���32λ
	int e = d << 1;     //���Ʋ������ƶ����Ƕ�����
	printf("%d\n", e);

	int a1 = 10;
	printf("%d\n", !a1);//��Ŀ����������ʾ�ǣ�0Ϊ�٣���0Ϊ�棩

	//if (a1)//���a1Ϊ��.......
	//{

	//}
	//if (!a1)//���a1Ϊ��.......
	//{

	//}

	int arr[5] = { 0 };
	printf("%d\n", sizeof arr);//���������ܴ�С����λ���ֽ�
	printf("%d\n", sizeof arr[0]);//���������±�Ԫ�ش�С����λ���ֽ�


	return 0;        
}