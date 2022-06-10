#define _CRT_SECURE_NO_WARNINGS 1
//三子棋
//test.c  测试游戏逻辑
//game.h  函数、符号申明，头文件包含
//game.c  游戏实现

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
	//存储数据-二维数组
	char board[ROW][COL];
	//初始化棋盘--初始化空格
	InitBoard(board, ROW, COL);
	//打印棋盘--本质打印数组内容
	DisplayBoard(board, ROW, COL);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);//表达式为真继续循环，为假跳出循环
	return 0;
}