#define _CRT_SECURE_NO_WARNINGS 1
#include"game2.h"

void initboard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0, j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}


void displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0, j = 0;
	printf("-------ɨ��-------\n");
	//��ӡ�к�
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-------ɨ��-------\n");

}


//������
void setmine(char mine[ROWS][COLS], int row, int col)
{
	//����10����
	int count = EASY_COUNT;
	while (count)
	{
		//��������±�
		int x = rand()%row+1;
		int y = rand()%col+1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}


//static
//1.���ξֲ�����
//2.����ȫ�ֱ���
//3.���κ���

static int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] +
		mine[x][y - 1] + mine[x][y + 1] +
		mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0';
}

//�Ų���
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//�����Ų�����
	//����Ƿ�����

	int x = 0, y = 0;
	int win = 0;
	while (win<row*col- EASY_COUNT)
	{
		printf("����Ҫ�Ų������:>");
		scanf("%d%d", &x, &y);

		//�ж�����ĺϷ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ף���ը��\n");
				displayboard(mine, row, col);
				break;//����ѭ��
			}
			else
			{
				//�����׵�����£�ͳ����Χ�м�����
				int count=get_mine_count(mine, x, y);
				show[x][y] = count + '0';//�ο�ASCII�����--�ַ� ת����
				//��ʾ�Ų������Ϣ
				displayboard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("���겻�Ϸ�����������\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("���׳ɹ�\n");
		displayboard(mine, row, col);
	}
}

