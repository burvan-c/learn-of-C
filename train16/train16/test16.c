#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//     for(���ʽ1�����ʽ2�����ʽ3��  ��ʼ��  �ж�  ����
//          ѭ�����
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("%d ", i);
	}

	printf("\n");

	int i_1 = 0;
	for (i_1 = 1; i_1 <= 10; i_1++)
	{
		if (i_1 == 5)
			break;   //����ѭ��
		printf("%d ", i_1);
	}

	printf("\n");

	int i_2= 0;
	for (i_2 = 1; i_2 <= 10; i_2++)
	{
		if (i_2 == 5)
			continue;//����continue��������
		printf("%d ", i_2);
	}


	//forѭ�������� ǰ�պ����� д��
	//�жϲ���ʡ��--��ѭ��
	for (;;)
	{
		printf("123\n");
	}

	int a = 0, b = 0;
	for (a = 0, b = 0; b = 0; a++, b++)//�жϲ���Ϊ��ֵ��䣬�ж�Ϊ�٣�0ѭ��
		b++;
	return 0;
}