#define _CRT_SECURE_NO_WARNINGS 1
//��֧��ѭ�����
#include<stdio.h>
int main()
{
	int age = 10;
	if (age >= 18)
		printf("����\n");
	else
		printf("δ����\n����̸����\n");//if��elseִ��{}�ڵ�����ִֻ��һ�����


	if (age < 18)
		printf("����\n");
	else if (age >= 18 && age < 26)//����д����18<=age<26,�������������ִ�б�Ϊ�棨1��
		printf("����\n");
	else if (age >= 26 && age < 40)//&&�Լ�ǰ��Ŀ��Բ�д
		printf("����\n");
	else if (age >= 40 && age < 60)
		printf("׳��\n");
	else if (age >= 60 && age < 100)
		printf("����\n");
	else                          //����else����Ҫ�����б�
		printf("�ϲ���\n");



	//����else
	int a = 0, b = 2;
	if (a == 1)
	{
		if (b == 2)
			printf("����ܷ�\n");
		else
			printf("�ϰ�һ��\n");
	}//����ָ� 
	//else�������if ƥ��

	/*int num ;
	scanf("num=%d\n", &num);
	if (num % 2 == 1)
		printf("����\n");
	else
		printf("ż��\n");*/

	int i=1;
	while (i <= 100)
	{
		if (i % 2 == 0)
			i++;
		else
		{
			printf("%d ", i);
			i++;
		}//ִ�ж������ʱҪ�Ӵ�����****************************************
	}
	return 0;
}