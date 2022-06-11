#define _CRT_SECURE_NO_WARNINGS 1
//头文件的包含
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//符号定义
#define ROW 3
#define COL 3

//函数申明

//初始化棋盘函数
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘函数
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void playermove(char board[ROW][COL], int row, int col);

//电脑下棋
void computermove(char board[ROW][COL], int row, int col);

//判断游戏输赢
char iswin(char board[ROW][COL], int row, int col);