#define _CRT_SECURE_NO_WARNINGS 1
//�����ؼ���--c�����ṩ�������Լ�������������������
//auto--�ֲ������ؼ��֣�һ��ʡ��
//extern--�����ⲿ����
//register--�Ĵ����ؼ��� 
//auto  break  case  char  const  contine  default  do  double  else  enum 
//extern  float  for  goto  if  long  register  return  short  signed  sizeof
//static  struct  switch  typedef  union  unsigned  void  volatile  while
//typedef--�����ض���
#include<stdio.h>
/*typedef unsigned int u_t;*///��unsigned int���¶���Ϊu_t
void dbas()
{
	static int b = 1;//2 3 4 5 6 7 8 9 10 11�ı�����������
	b++;
	printf("%d ", b);
}
int main()
{
	/*unsigned int a = 1;
	u_t a = 1;*/

	//static--��̬��
	//���ξֲ�������ȫ�ֱ���������
	//static����ȫ�ֱ���ʹ�������ֻ�����Լ���Դ�ļ�ʹ�ã������ļ�����ʹ��
	//static���κ���ʹ�������ֻ�����Լ���Դ�ļ�ʹ�ã������ļ�����ʹ��
	int i = 0;
	while (i < 10)
	{
		dbas();
		i++;
	}
	return 0;
}
//ջ�����洢�ֲ���������������
//��������̬�ڴ����
//��̬����ȫ�ֱ�����static���εľ�̬����