#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//int input = 0;//�������ֵ�ı���
	//printf("ѧϰ���:>\n");
	//printf("ѧϰc����?(1/0):>\n");
	//scanf("%d",&input);//scanf����Ҫȡ��ַ
	//if (input == 1)
	//	printf("δ����н����\n");
	//else
	//	printf("�����ð���><\n");



	int day = 0;
	while (day < 3600)
	{
		printf("д����:%d\n", day);
		day++;
	}
	if (day >= 3600)
		printf("��н���޴󣡹�����\n");
	return 0;
}