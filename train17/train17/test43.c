#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�Զ������ͣ��ṹ��   ö��    ����
//�ṹ�ǳ�Ա�����ļ��ϣ���Ա������Ϊ��ͬ����

//struct tag  //�ؼ���  �ṹ��
//{
//	void smemb - list();//��Ա�����б�
//}variable_list;//�����б�

//struct book
//{
//	char name[20];
//	int price;
//	char id[12];
//}b4,b5,b6;     //�������ֱ�Ӵ���������Ϊȫ�ֱ�����b1 b2 b3Ϊ�ֲ�����
//int main()
//{
//	struct book b1;
//	struct book b2;
//	struct book b3;
//
//	return 0;
//}


//�ṹ����Բ���ȫ����

//struct   //�����ṹ������--ֻ����һ�Σ�û�б�ǩ
//{
//	int a;
//	char b;
//	char c;
//}x;
//struct   //�����ṹ������
//{
//	int a;
//	char b;
//	char c;
//}*ps;//�ṹ��ָ��


//�ṹ��������

//struct a
//{
//	int i;
//	char c;
//};
//struct b
//{
//	char c;
//	struct a sa;
//	double d;
//};
//
//struct n
//{
//	int d;
//	struct n s;//��������ݹ�
//};
//int main()
//{
//	struct n sn;
//	return 0;
//}
//
//struct note
//{
//	int data;
//	struct note* next;//������+ָ���򣨽ṹ��������--����ͬ���ͽṹ��ָ�룩
//};
//
//typedef struct note  //typedef--������ 
//{
//	int data;
//	struct note* next;
//	//ǰ���Ѿ�����struct note,Ȼ�����������struct note*   ***************************
//}note;//�����Ӧtypedef,������Ϊnote  *************************************************



//�ṹ������Ķ������ʼ��

//struct S
//{
//	char c1; 
//	int i;
//}s1,s2;
//struct B
//{
//	double d;
//	struct S s;
//	char c;
//};
//int main()
//{
//	struct S s3 = { 'x',10 };
//	struct B sb = { 3.14,{'w',100},'g' };
//	//��ӡ   .��Խṹ�����  ->��Խṹ��ָ��
//	printf("%lf %c %d %c\n", sb.d, sb.s.c1, sb.s.i, sb.c);
//	return 0;
//}


//�ṹ���ڴ���� 

//struct S
//{
//	int i;//4���ֽ�
//	char c;//1���ֽ�
//};
//struct S2
//{
//	char c1;//1���ֽ�
//	int i;//4���ֽ�
//	double d;//8���ֽ�
//};
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", sizeof(s));
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//	//�ṹ���ڴ����---�ÿռ任ʱ��
//	//1.��һ����Ա���ڴ洢λ��0ƫ�ƴ�
//	//2.�ڶ������Ժ��Ա����һ��������(��Ա��С��Ĭ�϶������Ľ�Сֵ)���������ĵ�ַ��
//	//3.�ṹ���ܴ�С�����г�Ա�����������Ķ�������������
//	return 0;
//}
//
//�޸�Ĭ�϶�����
//#pragma pack(2)//--��Ĭ�϶������ĳ�2
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//--ȡ���޸�
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}


//дһ����(offsrtof)������ṹ����ĳ����������׵�ַ��ƫ�ƣ�����˵��

//#include<stddef.h>
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//int main()
//{
//	printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, c2));
//	return 0;
//}


//�ṹ�崫��

//struct S
//{
//	int data[1000];
//	int num;
//};
//void print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
//void print2(struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	struct S s = { {1,2,3,4},1000 };
//	print1(s);//���ṹ�壬ʱ�䡢�ռ�ܴ�
//	print2(&s);//����ַ��ʱ�䡢�ռ��С��Ч�ʸ�***************************
//	return 0;
//}


//�ṹ��ʵ��λ�ε�����

//1.λ�γ�Ա����Ϊint  unsigned int   signed int
//2.λ�γ�Ա�����ð�š�����
//struct A
//{
//	//4���ֽ�--32������λ
//	int _a : 10;//_a��Առ4������λ
//	int _b : 20;//_b��Առ6������λ
//	//�ٿ���4���ֽ�--32������λ
//	int _c : 30;//_c��Առ7������λ
//	//�ٿ���4���ֽ�--32������λ
//	int _d : 12;//_d��Առ11������λ
//};
////�������λ�Σ����ǽṹ��
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	return 0;
//}
////1.λ�γ�Ա��Ϊint�ͻ�char�ͣ�����������������
////2.λ�γ�ԱΪint��ʱ��4���ֽڿ��ٿռ䣬Ϊchar��ʱ��1���ֽڿ��ٿռ�
////3.λ���ǲ���ƽ̨���漰�ܶ಻ȷ������


//λ���ڴ����

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	//ʮ�����Ƶ��ڴ����Ϊ 62 03 04
//	//�������vsλ���ڴ����Ϊ��һ���ֽ����ɵ�λ����λ���ҵ���ʹ�ñ���λ
//	//                          ʣ�����λ����ʹ��ʱ���˷ѵ�
//	//                          �����������ڴ���������ȷ��
//	return 0;
//}




//ö��

//enum color
//{
//	red=5,        //����,δ��ʼ��ʱĬ��Ϊ0
//	green=8,        //δ��ֵǰĬ�ϵ���Ϊ1
//	blue,
//};
//int main()
//{
//	//enum color c = blue;
//  //enum color c = color::blue;//�������޶���д
//	printf("%d\n", red);//5
//	printf("%d\n", green);//8
//	printf("%d\n", blue);//9
//	return 0;
//}