#define _CRT_SECURE_NO_WARNINGS 1
//������
//test.c  ������Ϸ�߼�
//game.h  ����������������ͷ�ļ�����
//game.c  ��Ϸʵ��

#include"game1.h"
void menu()
{
	printf("**************************\n");
	printf("**********1.play**********\n");
	printf("**********0.exit**********\n");
	printf("**************************\n");
}
void game()
{
	//�洢����-��ά����
	char board[ROW][COL];
	//��ʼ������--��ʼ���ո�
	InitBoard(board, ROW, COL);
	//��ӡ����--���ʴ�ӡ��������
	DisplayBoard(board, ROW, COL);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);//���ʽΪ�����ѭ����Ϊ������ѭ��
	return 0;
}