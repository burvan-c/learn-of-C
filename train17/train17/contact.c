#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"


void initcontact(contact* pc)
{
	pc->sz = 0;
	//memset();�ڴ�����,���ֽ�Ϊ��λ
	memset(pc->data, 0, sizeof(pc->data));
}


void addcontact(contact* pc) 
{
	if (pc->sz == 1000)
	{
		printf("ͨѶ¼�������޷����\n");
		return;
	}
	//����һ������Ϣ
	printf("��������:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("��������:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("�����Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("����绰:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�����ַ:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("���ӳɹ�\n");
}


void printcontact(const contact* pc)
{
	int i = 0;
	//��ӡ����
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);

	}
}