#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�ṹ��Ա���ʲ�����
struct book//�ṹ������зֺ�
{
	char name[20];
	char id[20];
	int price;
};
int main()
{
	struct book b = { "c����","c20220620",55 };
	printf("����:%s\n", b.name);
	printf("���:%s\n", b.id);
	printf("�۸�:%d\n", b.price);
	return 0;
}