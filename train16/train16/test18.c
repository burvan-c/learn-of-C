#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("*******************\n");
	printf("*******1.play******\n");
	printf("*******0.exit******\n");
	printf("*******************\n");
}

void game()
{
	//��������Ϸ��ʵ��
	//1.���������
	//rand����������һ��0---32767֮�������
	//ʱ��--ʱ���
	//srand((unsigned int)time(NULL));
	int ret=rand()%100+1;//%100d��������0--99���ټ�1����Χ����1--100
	//printf("%d\n", ret);
	//2.������
	int guess = 0;
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if(guess>ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("�¶���\n");
			break;//����whileѭ��
		}
	}
}

int main()
{
	//��д���룬����ַ����������м��ƶ�

	//char arr1[] = "Annual salary of millions";
	//char arr2[] = "#########################";
	//int left = 0 ;       //A�±�Ϊ0
	//int right = strlen(arr1) - 1;   //s�ַ��±�

	//while (left<=right)
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	printf("%s\n", arr2);
	//	Sleep(1000);   //��Ϣ1000����,����ĸ��д
	//	system("cls");   //�����Ļ
	//	left++;
	//	right--;
	//}
	//printf("%s\n", arr2);



	//ģ���û����볡����ֻ�ܵ������Ρ������޸��������룬������ȷ����ʾ����ɹ������ζ����˳�����
	//int i = 0;
	//������ȷ���������ַ���"123456"

	//char password[20] = { 0 };

	//for (i = 0; i < 3; i++)
	//{
	//	printf("����������:>");
	//	scanf("%s", password);
	//	//if ("123456" == password)//�����ַ����ıȽϲ���ʹ��==��Ӧ��ʹ��strcmp
	//	if(strcmp(password,"123456")==0)//���ַ�����ȷ���0
	//	{
	//		printf("����ɹ�\n");
	//		break;
	//	}
	//	else
	//	{
	//		printf("���������������\n");
	//	}
	//}
	//if (3 == i)//break����������
	//{
	//	printf("������������˳�����\n");
	//}
	//strcmp:�ַ���1<�ַ���2������ֵ<0;�ַ���1=�ַ���2������ֵ=0;�ַ���1>�ַ���2������ֵ>0;
	//strcmp���ַ���ASCII��ֵ���αȽϴ�С




	
	//дһ����������Ϸ
	//�Զ�����һ��1-100��������������֣��¶�����Ϸ�������´��˻����Ѵ�С�������ֱ���¶ԡ�
	//��Ϸ����һֱ�棬�����˳���Ϸ
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
				break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,����ѡ��\n");
			break;//����break������switch
		}

	} while (input);//inputΪ�����ѭ����Ϊ������ѭ��

	
	return 0;
}
