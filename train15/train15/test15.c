#define _CRT_SECURE_NO_WARNINGS 1
//whileѭ��
#include<stdio.h>
int main()
{
	//if (1)
	//	printf("nice\n");//��ӡһ��nice
	//while (1)
	//	printf("nice\n");//��ӡ���nice

	//int i = 1;
	//while (i <= 10)//Ϊ�棬ִ��ѭ�����
	//{
	//	if (i == 5)
	//		break;   //whileѭ���У�break�������õ���ֹѭ��
	//	printf("%d ", i);
	//	i++;
	//}



	//int a = 1;
	//while (a <= 10)
	//{    //whileѭ���У�continue����������������ѭ��continue����Ĵ��룬ֱ��ȥ�жϲ���
	//	if (a == 5)
	//		continue;   //�������ѭ��
	//	printf("%d ", i);
	//	i++;
	//}



	//getchar--�ַ����뺯��    putchar--�ַ��������
	//EOF--end of file �ļ�������־
	//int ch = getchar();
	//printf("%c\n", ch);
	//putchar(ch);

	//int ch_1 = 0;
	//while ((ch_1 = getchar()) != EOF)
	//{
	//	putchar(ch_1);//ctrl+z---getchar��ȡ����
	//}



	//char password[20] = { 0 };
	//printf("����������:>");
	//scanf("%s", password);
	//printf("��ȷ������(y/n):>");
	//int ch = getchar();//����getchar�ѻ�������\n�ù�ȥ��  printf����Ҫ��������
	//if (ch == 'y')
	//{
	//	printf("ȷ�ϳɹ�\n");
	//}
	//else
	//{
	//	printf("ȷ��ʧ��\n");
	//}


	//char password[20] = { 0 };
	//printf("����������:>");//12 34�������ִ���
	//scanf("%s", password);//scanf��ѿո�ǰ������ߣ�����̫��һ��getchar�ò���
	//printf("��ȷ������(y/n):>");
	////��������
	//getchar();//����\n

	//int ch = getchar();
	//if (ch == 'y')
	//{
	//	printf("ȷ�ϳɹ�\n");
	//}
	//else
	//{
	//	printf("ȷ��ʧ��\n");
	//}


	/*
	char password[20] = { 0 };
	printf("����������:>"); 
	scanf("%s", password); 
	printf("��ȷ������(y/n):>");
	//������������ַ�
	int tmp = 0;
	while ((tmp = getchar()) != '\n')
	{     //getcharһֱ���ַ�ֱ��getchar�õ�\n,��ʱtmp=\n,���Ϊ�٣�����
		;//����ʲô��������ֱ������
	}
	
	int ch = getchar();//getchar��������Ϊint�ͣ����Կ��������ͱ����洢
	if (ch == 'y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}
	*/


	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')//||--����
			continue;
		else 
		putchar(ch);
	}
	return 0;
}