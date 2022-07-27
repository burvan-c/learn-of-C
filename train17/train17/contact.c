//#define _CRT_SECURE_NO_WARNINGS 1
//#include"contact.h"
//
//
//void initcontact(contact* pc)
//{
//	pc->sz = 0;
//	//memset();内存设置,以字节为单位
//	memset(pc->data, 0, sizeof(pc->data));
//}
//
//
//void addcontact(contact* pc) 
//{
//	if (pc->sz == 1000)
//	{
//		printf("通讯录已满，无法添加\n");
//		return;
//	}
//	//增加一个人信息
//	printf("输入名字:>");
//	scanf("%s", pc->data[pc->sz].name);
//	printf("输入年龄:>");
//	scanf("%d", &(pc->data[pc->sz].age));
//	printf("输入性别:>");
//	scanf("%s", pc->data[pc->sz].sex);
//	printf("输入电话:>");
//	scanf("%s", pc->data[pc->sz].tele);
//	printf("输入地址:>");
//	scanf("%s", pc->data[pc->sz].addr);
//
//	pc->sz++;
//	printf("增加成功\n");
//}
//
//
//
//
//void printcontact(const contact* pc)
//{
//	int i = 0;
//	//打印标题
//	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
//	for (i = 0; i < pc->sz; i++)
//	{
//		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n",
//			pc->data[i].name,
//			pc->data[i].age,
//			pc->data[i].sex,
//			pc->data[i].tele,
//			pc->data[i].addr);
//
//	}
//}
//
//
//
//
//static int findbyname(contact* pc, char name[])
//{
//	int i = 0;
//	for (i = 0; i < pc->sz; i++)
//	{
//		if (strcmp(pc->data[i].name, name) == 0)
//			return i;
//	}
//	return -1;//找不到
//
//}
//void delcontact(contact* pc)
//{
//	char name[max_name] = { 0 };
//	if (pc->sz == 0)
//	{
//		printf("通讯录为空，无需删除\n");
//		return;
//	}
//	printf("输入删除姓名:>");
//	scanf("%s", name);
//	//1.查找要删除的人
//	int pos = findbyname(pc, name);
//	if (pos == -1)
//	{
//		printf("要删除的人不存在\n");
//		return ;
//	}
//	//2.删除
//	int i = 0;
//	for (i = pos; i < pc->sz-1; i++)
//	{
//		pc->data[i] = pc->data[i + 1];
//	}
//	pc->sz--;
//	printf("删除成功\n");
//}
//
//
//
//void searchcontact(contact* pc)
//{
//	char name[max_name] = { 0 };
//	printf("输入要查找的联系人的名字:>");
//	scanf("%s", name);
//	int pos = findbyname(pc, name);
//	if (pos == -1)
//	{
//		printf("要查找的人不存在\n");
//		return;
//	}
//	else
//	{
//	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
//		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n",
//				pc->data[pos].name,
//				pc->data[pos].age,
//				pc->data[pos].sex,
//				pc->data[pos].tele,
//				pc->data[pos].addr);
//	}
//}
//
//
//
//void modifycontact(contact* pc)
//{
//	char name[max_name] = { 0 };
//	printf("输入要修改的联系人的名字:>");
//	scanf("%s", name);
//	int pos = findbyname(pc, name);
//	if (pos == -1)
//	{
//		printf("要修改的人不存在\n");
//		return;
//	}
//	else
//	{
//		printf("输入名字:>");
//		scanf("%s", pc->data[pos].name);
//		printf("输入年龄:>");
//		scanf("%d", &(pc->data[pos].age));
//		printf("输入性别:>");
//		scanf("%s", pc->data[pos].sex);
//		printf("输入电话:>");
//		scanf("%s", pc->data[pos].tele);
//		printf("输入地址:>");
//		scanf("%s", pc->data[pos].addr);
//		printf("修改成功\n");
//	}
//}
//
