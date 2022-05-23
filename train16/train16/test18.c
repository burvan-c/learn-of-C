#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("*******************\n");
	printf("*******1.play******\n");
	printf("*******0.exit******\n");
	printf("*******************\n");
}

void game()
{
	//猜数字游戏的实现
	//1.生产随机数
	//rand函数返回了一个0---32767之间的数字
	//时间--时间戳
	//srand((unsigned int)time(NULL));
	int ret=rand()%100+1;//%100d的余数是0--99，再加1，范围就是1--100
	//printf("%d\n", ret);
	//2.猜数字
	int guess = 0;
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if(guess>ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对了\n");
			break;//跳出while循环
		}
	}
}

int main()
{
	//编写代码，多个字符从两端向中间移动

	//char arr1[] = "Annual salary of millions";
	//char arr2[] = "#########################";
	//int left = 0 ;       //A下标为0
	//int right = strlen(arr1) - 1;   //s字符下标

	//while (left<=right)
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	printf("%s\n", arr2);
	//	Sleep(1000);   //休息1000毫秒,首字母大写
	//	system("cls");   //清空屏幕
	//	left++;
	//	right--;
	//}
	//printf("%s\n", arr2);



	//模拟用户登入场景，只能登入三次。允许修改三次密码，密码正确就提示登入成功，三次都错，退出程序
	//int i = 0;
	//假设正确的密码是字符串"123456"

	//char password[20] = { 0 };

	//for (i = 0; i < 3; i++)
	//{
	//	printf("请输入密码:>");
	//	scanf("%s", password);
	//	//if ("123456" == password)//两个字符串的比较不能使用==，应该使用strcmp
	//	if(strcmp(password,"123456")==0)//两字符串相等返回0
	//	{
	//		printf("登入成功\n");
	//		break;
	//	}
	//	else
	//	{
	//		printf("密码错误，重新输入\n");
	//	}
	//}
	//if (3 == i)//break跳出到这里
	//{
	//	printf("三次密码错误，退出程序\n");
	//}
	//strcmp:字符串1<字符串2，返回值<0;字符串1=字符串2，返回值=0;字符串1>字符串2，返回值>0;
	//strcmp按字符的ASCII码值依次比较大小




	
	//写一个猜数字游戏
	//自动产生一个1-100的随机数；猜数字；猜对了游戏结束，猜错了会提醒大小后继续猜直到猜对。
	//游戏可以一直玩，除非退出游戏
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//打印菜单
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
				break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,重新选择\n");
			break;//这里break是跳出switch
		}

	} while (input);//input为真继续循环，为假跳出循环

	
	return 0;
}
