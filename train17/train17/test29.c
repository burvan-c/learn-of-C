#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ṹ��Ա���ʲ�����
//struct book
//{
//	char name[20];
//	char id[20];
//	int price;
//};
//int main()
//{
//	struct book b = { "c����","c0620",25 };
//	//�ṹ�������.��Ա��
//	printf("����:%s\n���:%s\n�۸�:%d\n", b.name, b.id, b.price);
//	
//	printf("\n");
//
//	struct book* pb = &b;
//	printf("����:%s\n���:%s\n�۸�:%d\n", (*pb).name, (*pb).id, (*pb).price);
//
//	printf("\n");
//
//	printf("����:%s\n���:%s\n�۸�:%d\n", pb->name, pb->id, pb->price);
//
//	return 0;
//}





//��������
//int main()
//{
//	char a = 3;//00000011->00000����00000011(����������
//	char b = 127;//01111111->00000����01111111������������
//	char c = a + b;//00000����10000010->10000010���ضϣ�
//	//a��b��char���ͣ�����һ���ֽڣ�û�дﵽint��4���ֽڵĴ�С
//	//����ᷢ����������
//	printf("%d\n", c);
//	//����c����������charΪ�з���λ����һλΪ����λ����ǰ��ȫ��1
//	//10000010->11111����10000010�����룩->100000����01111110��ԭ�룩
//	printf("%d\n", sizeof(b));
//	//sizeof�����޷���������%u
//	return 0;
//}



//����ת��--��������ͬʱ����ת��