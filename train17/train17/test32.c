//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}




//ͳ��һ������������1�ĸ���
//int number1(int n)
//{
//	int count = 0;
//	int i = 0;
//	/*for (i = 0; i < 64; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}*/
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 10;
//	int ret = number1(n);
//	printf("%d\n", ret);
//	return 0;
//}



//�������������Ʋ�ͬλ�ĸ���
//int main()
//{
//	int m = 0, n = 0, i = 0;
//	int count = 0;
//	scanf("%d %d", &m, &n);
//	for (i = 0; i < 64; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	//int ret = m ^ n;//���
//	////��ͳ��ret���������м���1Ҳ��
//	printf("%d\n", count);
//
//	return 0;
//}



//��ӡ���������Ƶ�����λ��ż��λ
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	//ż��λ
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//
//	printf("\n");
//
//	//����λ
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//
//	return 0;
//}



//���δ�С���κ�ƽ̨����4���ֽ�
//ָ���С��32ƽ̨4���ֽڣ�64ƽ̨8���ֽ�