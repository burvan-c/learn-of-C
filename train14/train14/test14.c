#define _CRT_SECURE_NO_WARNINGS 1
//switch分支语句--常用于多分支情况
#include<stdio.h>
int main()
{
	//int day = 0;
	//scanf("%d", &day);
	//switch (day)
	//{
	//case 1://整形常量
	//	printf("星期1\n");
	//	break;//跳出
	//case 2:
	//	printf("星期2\n"); 
	//	break;
	//case 3:
	//	printf("星期3\n");
	//	break;
	//case 4:
	//	printf("星期4\n");
	//	break;
	//case 5:
	//	printf("星期5\n");
	//	break;
	//case 6:
	//	printf("星期6\n");
	//	break;
	//case 7:
	//	printf("星期天\n");
	//	break;
	//}


	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	default:                //错误提示***************************************
		printf("输入错误\n");
		break;
	}
	return 0;
}
