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
	printf("-------扫雷-------\n");
	//打印列号
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
	printf("-------扫雷-------\n");

}


//布置雷
void setmine(char mine[ROWS][COLS], int row, int col)
{
	//布置10个雷
	int count = EASY_COUNT;
	while (count)
	{
		//生成随机下标
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
//1.修饰局部变量
//2.修饰全局变量
//3.修饰函数

static int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] +
		mine[x][y - 1] + mine[x][y + 1] +
		mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0';
}

//排查雷
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//输入排查坐标
	//检查是否有雷

	int x = 0, y = 0;
	int win = 0;
	while (win<row*col- EASY_COUNT)
	{
		printf("输入要排查的坐标:>");
		scanf("%d%d", &x, &y);

		//判断坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("踩雷，被炸死\n");
				displayboard(mine, row, col);
				break;//跳出循环
			}
			else
			{
				//不是雷的情况下，统计周围有几个雷
				int count=get_mine_count(mine, x, y);
				show[x][y] = count + '0';//参考ASCII码表（数--字符 转化）
				//显示排查出的信息
				displayboard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("坐标不合法，重新输入\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("排雷成功\n");
		displayboard(mine, row, col);
	}
}

