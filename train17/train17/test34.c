#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����ֽ������ݵĵ�λ�ֽ������ݴ���ڸߵ�ַ������λ�ֽ�������ݷ��ڵ͵�ַ�����ɸߵ��ͣ�
//С���ֽ������ݵĵ�λ�ֽ������ݴ���ڵ͵�ַ������λ�ֽ�������ݷ��ڸߵ�ַ�� ���ɵ͵��ߣ�


//int check_sys()
//{
//	//�жϻ����ֽ���
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//	return 0;
//}
//int main()
//{
//	//�жϻ����ֽ���
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}


//int main()
//{
//	char a = -1;
//	//11111111
//	signed char b = -1;
//	//11111111
//	unsigned char c = -1;
//	//11111111
//
//	printf("%d,%d,%d", a, b, c);
//
//	return 0;
//}
//char���з��Ż����޷���ȡ���ڱ�����
//int c���Թ涨��signed int


//int main()
//{
//	char a = -128;
//	//10000000
//	printf("%u\n", a);
//
//	return 0;
//}

//int main()
//{
//	char a = 128;
//	//10000000
//	printf("%u\n", a);
//
//	return 0;
//}


//int main()
//{
//	int i = -20;
//   //��ͬ�����ö����Ʋ������
//	unsigned int j = 10;
//
//	//����+����    11111����11110110
//	//ԭ��         10000����00001010
//	printf("%d\n", i + j);
//	return 0;
//}



//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		//�޷���������ڵ���0---��ѭ��
//	}
//	return 0;
//}




//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//		//-1 -2����-128 127 126����3 2 1 0 -1 -2����-128 127 126������ԲȦѭ����
//		//ԭ�� ���� ����    ������Բ�����ʽ�������ݣ���ԭ����ʽ��ӡ����
//	}
//	printf("%d\n", strlen(a));//�ҵ�\0->0
//	return 0;
//}



//unsigned char i = 0;
//
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//		//��ѭ��--�޷���char��Χ��0-255��������Զ����
//
//		return 0;
//	}
//}






//���㴢��
//limits.h�������μ��壨int  short  char)ȡֵ��Χ
//float.h���帡���ͼ��壨float  double)ȡֵ��Χ

int main()
{
	int n = 9;
	float* pfloat = (float*)&n;
	printf("%d\n", n);
	printf("%f\n", *pfloat);

	*pfloat = 9.0;
	printf("%d\n", n);
	printf("%f\n", *pfloat);
	return 0;
}
