#define _CRT_SECURE_NO_WARNINGS 1
//ͷ�ļ��İ���
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//���Ŷ���
#define ROW 3
#define COL 3

//��������

//��ʼ�����̺���
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ���̺���
void DisplayBoard(char board[ROW][COL], int row, int col);

//�������
void playermove(char board[ROW][COL], int row, int col);

//��������
void computermove(char board[ROW][COL], int row, int col);

//�ж���Ϸ��Ӯ
char iswin(char board[ROW][COL], int row, int col);