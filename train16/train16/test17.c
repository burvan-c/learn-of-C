#define _CRT_SECURE_NO_WARNINGS 1
//do+ѭ����䣻+while(���ʽ);   ���Ϊ��ִ��ѭ����䣬Ϊ������ѭ��
#include<stdio.h>
int main()
{
	/*int i = 1;
	do
	{
		printf("%d ", i);
		i++;
	} while (i <= 10);*/


	//int i = 1;
	//do
	//{
	//	if (5 == i)
	//		break;     //break��������ѭ��

	//	printf("%d ", i);
	//	i++;
	//} while (i <= 10);


	//int i = 1;
	//do
	//{
	//	if (5 == i)
	//		continue;   //����continue�����ѭ����䣬����������ѭ��

	//	printf("%d ", i);
	//	i++;
	//} while (i <= 10);


	//ʵ��n��
	//int n;          //ע��scanf�������״��
	//scanf("%d", &n);//scanf�������������ͺ���һ�㲻����\n,������\n��scanf�ỻ�м�����ȡ����************
	//int i=0,a=1;
	//for (i = 1; i <= n; i++)//++i��ʾ���Լ��ٸ�ֵ
	//{
	//	a*=i;
	//}
	//printf("%d\n", a);


	//����1��+2!+.....+10!
	//int n,a;          //ע��scanf�������״��
	////scanf("%d", &n);//scanf�������������ͺ���һ�㲻����\n,������\n��scanf�ỻ�м�����ȡ����************
	//int i = 0, sum=0;
	//for (n = 1; n <= 10; n++)
	//{//����׳�ǰ����a��ʼΪ1
	//	for (a = 1, i = 1; i <= n; i++)//++i��ʾ���Լ��ٸ�ֵ
	//	{
	//		a *= i;
	//	}
	//	sum += a;
	//}
	//printf("%d\n", sum);

	//�Ľ�
	int n=0, a=1;           
	 	int i = 0, sum = 0;
	for (n = 1; n <= 10; n++)
	{ 
		a *= n;
		sum += a;
	}
	printf("%d\n", sum);
	return 0;
}