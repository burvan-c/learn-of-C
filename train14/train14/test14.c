#define _CRT_SECURE_NO_WARNINGS 1
//switch��֧���--�����ڶ��֧���
#include<stdio.h>
int main()
{
	//int day = 0;
	//scanf("%d", &day);
	//switch (day)
	//{
	//case 1://���γ���
	//	printf("����1\n");
	//	break;//����
	//case 2:
	//	printf("����2\n"); 
	//	break;
	//case 3:
	//	printf("����3\n");
	//	break;
	//case 4:
	//	printf("����4\n");
	//	break;
	//case 5:
	//	printf("����5\n");
	//	break;
	//case 6:
	//	printf("����6\n");
	//	break;
	//case 7:
	//	printf("������\n");
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
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	default:                //������ʾ***************************************
		printf("�������\n");
		break;
	}
	return 0;
}
