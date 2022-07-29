//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include"contact.h"
//
////联合体(共用体)---成员共用同一块空间
//
////union un
////{
////	char c;//1字节
////	int i;//4字节
////};
////int main()
////{
////	union un u = { 10 };
////	printf("%d\n", sizeof(u));
////
////	printf("%p\n", &u);
////	printf("%p\n", &(u.c));
////	printf("%p\n", &(u.i));
////	//c  i  共用同一个空间
////
////	printf("%d\n", u.c);
////	printf("%d\n", u.i);
////
////	return 0;
////}
//
////check_sys()
////{
////	int a = 1;
////	if ((*(char*)&a) == 1)
////	{
////		return 1;//小端
////	}
////	else
////	{
////		return 0;//大端
////	}
////}
////check_sys()
////{
////	union U
////	{
////		char c;
////		int i;
////	}u;
////	u.i = 1;
////	return u.c;
////}
////int main()
////{
////	int ret = check_sys();
////	if (ret == 1)
////		printf("小端\n");
////	else
////		printf("大端\n");
////	
////	return 0;
////}
//
////union un
////{
////	short a[5];//5个字节
////	int i;//4个字节
////};
//////联合体大小至少为最大成员大小
//////对齐到最大对齐数的整数倍
////int main()
////{
////	union un u;
////	printf("%d\n", sizeof(u));
////	return 0;
////}
//
//
////通讯录
////1.包含1000个人的信息
////2.每个人的信息：名字+年龄+性别+电话+地址
////3.增加、删除、修改、查找指定人的信息
////4.排序通讯录信息
//
////版本2：
////动态增长版本
////初始化后存放3个人信息
////存满后，增加2个信息
////每次增加2个
//
//void menu()
//{
//	printf("************************************\n");
//	printf("*******1.add     2.del**************\n");
//	printf("*******3.search  4.modify***********\n");
//	printf("*******5.sort    6.print************\n");
//	printf("*******0.exit           ************\n");
//	printf("************************************\n");
//}
//enum option
//{
//	EXIT,
//	ADD,
//	DEL,
//	SEARCH,
//	MODIFY,
//	SORT,
//	PRINT,
//};
//int main()
//{
//	int input = 0;
//	//创建通讯录
//	contact con;//通讯录
//	//初始化通讯录
//	initcontact(&con);
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case ADD:
//			//增加一个人的信息
//			addcontact(&con);
//			break;
//		case DEL:
//			delcontact(&con);
//			break;
//		case SEARCH:
//			searchcontact(&con);
//			break;
//		case MODIFY:
//			modifycontact(&con);
//			break;
//		case SORT:
//
//			break;
//		case PRINT:
//			printcontact(&con);
//			break;
//		case EXIT:
//			printf("退出通讯录\n");
//			break;
//		default:
//			printf("选择错误,重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
