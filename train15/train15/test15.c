#define _CRT_SECURE_NO_WARNINGS 1
//whileѭ��
#include<stdio.h>
int main()
{
	//if (1)
	//	printf("nice\n");//��ӡһ��nice
	//while (1)
	//	printf("nice\n");//��ӡ���nice

	int i = 1;
	while (i <= 10)//Ϊ�棬ִ��ѭ�����
	{
		printf("%d ", i);
		i++;
	}
	return 0;
}