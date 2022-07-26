#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"


void initcontact(contact* pc)
{
	pc->sz = 0;
	//memset();内存设置,以字节为单位
	memset(pc->data, 0, sizeof(pc->data));
}


void addcontact(contact* pc) 
{
	if (pc->sz == 1000)
	{
		printf("通讯录已满，无法添加\n");
		return;
	}
	//增加一个人信息
	printf("输入名字:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("输入年龄:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("输入性别:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("输入电话:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("输入地址:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("增加成功\n");
}


void printcontact(const contact* pc)
{
	int i = 0;
	//打印标题
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
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