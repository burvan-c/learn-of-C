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



int main()
{
	unsigned int i;
	for (i = 9; i >= 0; i--)
	{
		printf("%u\n", i);
		//�޷���������ڵ���0---��ѭ��
	}
	return 0;
}