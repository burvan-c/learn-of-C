#define _CRT_SECURE_NO_WARNINGS 1

#define EASY_COUNT 10
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//��ʼ������
void initboard(char board[ROWS][COLS],int rows,int cols,char set);

//��ӡ����
void displayboard(char board[ROWS][COLS],int row,int col);

//������
void setmine(char mine[ROWS][COLS], int row, int col);

//�Ų���
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

