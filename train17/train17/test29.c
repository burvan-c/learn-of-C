#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ṹ��Ա���ʲ�����
struct book
{
	char name[20];
	char id[20];
	int price;
};
int main()
{
	struct book b = { "c����","c0620",25 };
	printf("����:%s\n���:%s\n�۸�:%d\n", b.name, b.id, b.price);
	return 0;
}