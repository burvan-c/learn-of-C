//#define _CRT_SECURE_NO_WARNINGS 1
////test.c--ɨ����Ϸ�Ĳ���
////game.c--��Ϸ��ʵ��
////game.h--��Ϸ����������
//
//#include"game2.h"
//void menu()
//{
//	printf("***************************\n");
//	printf("*********1.play************\n");
//	printf("*********0.exit************\n");
//	printf("***************************\n");
//}
//void game()
//{
//	char mine[ROWS][COLS]={0};//��Ų��úõ��׵���Ϣ
//	char show[ROWS][COLS]={0};//����Ų�����׵���Ϣ
//
//	//��ʼ������
//	initboard(mine, ROWS, COLS,'0');//'0'
//	initboard(show, ROWS, COLS,'*');//'*'
//
//	//��ӡ����
//	//displayboard(mine,ROW,COL);
//	displayboard(show,ROW,COL);
//
//	//������
//	setmine(mine,ROW,COL);
//	/*displayboard(mine, ROW, COL);*/
//
//	//�Ų���
//	findmine(mine, show, ROW, COL);
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			game();//ɨ����Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}