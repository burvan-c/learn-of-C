#define _CRT_SECURE_NO_WARNINGS 1
//����
#include<stdio.h>
//int main()
//{
//	int x, y, sum;
//	scanf("%d%d", &x, &y);
//	/*sum = x + y;*/
//	//�ú�����ʽ
//	sum = add(x, y);
//	printf("%d\n", sum);
//	return 0;
//}
//add(int a,int b)
//{
//	int c;
//	c = a+ b;
//	return c;
//}


//����--һ����ͬ����Ԫ�صļ���
int main()
{
	int arr[5] = { 1,2,3,4,5 };//�������±����0,1,2,3,4
	char ch[5] = { 'a','b','c' };//����ȫ��ʼ����ʣ��Ĭ��Ϊ0
	int i=0;
	while (i < 5)//ѭ�����
	{
		printf("%d\n", arr[i]);//����±��Ӧ��Ԫ��
		i++;
	}
	return 0;
}
