#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
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
	int i = 0;
	//������ȷ���������ַ���"123456"

	char password[20] = { 0 };

	for (i = 0; i < 3; i++)
	{
		printf("����������:>");
		scanf("%s", password);
		//if ("123456" == password)//�����ַ����ıȽϲ���ʹ��==��Ӧ��ʹ��strcmp
		if(strcmp(password,"123456")==0)//���ַ�����ȷ���0
		{
			printf("����ɹ�\n");
			break;
		}
		else
		{
			printf("���������������\n");
		}
	}
	if (3 == i)//break����������
	{
		printf("������������˳�����\n");
	}
	//strcmp:�ַ���1<�ַ���2������ֵ<0;�ַ���1=�ַ���2������ֵ=0;�ַ���1>�ַ���2������ֵ>0;
	//strcmp���ַ���ASCII��ֵ���αȽϴ�С
	return 0;
}