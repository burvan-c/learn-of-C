//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include"contact.h"
//
////������(������)---��Ա����ͬһ��ռ�
//
////union un
////{
////	char c;//1�ֽ�
////	int i;//4�ֽ�
////};
////int main()
////{
////	union un u = { 10 };
////	printf("%d\n", sizeof(u));
////
////	printf("%p\n", &u);
////	printf("%p\n", &(u.c));
////	printf("%p\n", &(u.i));
////	//c  i  ����ͬһ���ռ�
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
////		return 1;//С��
////	}
////	else
////	{
////		return 0;//���
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
////		printf("С��\n");
////	else
////		printf("���\n");
////	
////	return 0;
////}
//
////union un
////{
////	short a[5];//5���ֽ�
////	int i;//4���ֽ�
////};
//////�������С����Ϊ����Ա��С
//////���뵽����������������
////int main()
////{
////	union un u;
////	printf("%d\n", sizeof(u));
////	return 0;
////}
//
//
////ͨѶ¼
////1.����1000���˵���Ϣ
////2.ÿ���˵���Ϣ������+����+�Ա�+�绰+��ַ
////3.���ӡ�ɾ�����޸ġ�����ָ���˵���Ϣ
////4.����ͨѶ¼��Ϣ
//
////�汾2��
////��̬�����汾
////��ʼ������3������Ϣ
////����������2����Ϣ
////ÿ������2��
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
//	//����ͨѶ¼
//	contact con;//ͨѶ¼
//	//��ʼ��ͨѶ¼
//	initcontact(&con);
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case ADD:
//			//����һ���˵���Ϣ
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
//			printf("�˳�ͨѶ¼\n");
//			break;
//		default:
//			printf("ѡ�����,����ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
