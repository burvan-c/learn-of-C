//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<assert.h>

//�ṹ�����
//����--��ͬ����Ԫ�ؼ���
//�ṹ��--ֵ�ļ��ϣ�ֵ�����Ϳ��Բ�ͬ

//struct b
//{
//	char c;
//	short s;
//	double d;
//};
//struct stu  //�ؼ���+�ṹ������
//{
//	//��Ա����
//	struct b sb;
//	char name[20];
//	int age;
//	char id[20];
//}s1,s2;//s1,s2Ҳ�ǽṹ���������ȫ�ֱ���
//
//void print1(struct stu t)
//{
//	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
//}
//
//void print2(struct stu* ps)
//{
//	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
//}
//
//int main()
//{
//	struct stu s={{'w',20,3.14},"c����",25,"2022"};//����
//	//s�Ǿֲ�����
//	/*printf("%c\n", s.sb.c);
//	printf("%s\n", s.id);*/
//
//	/*struct stu* ps = &s;
//	printf("%c\n", (*ps).sb.c);
//	printf("%s\n", (*ps).id);
//	printf("%c\n", ps->sb.c);*/
//
//	//д��������ӡs������
//	print1(s);//��ֵ����
//	print2(&s);//��ַ���ã����ţ�
//
//	return 0;
//}






//���Լ���
//debug--���԰汾  
// f10��f11--����   f5--������һ���ϵ�   f9--������ȡ���ϵ�
//ctrl+f5--��ʼִ�в����ԣ������ӹ����Թ����д����������ϵ㣬�����ж��޸ĺ�Ĵ����Ƿ���ȷ��
//�ϵ�




//release--�����汾
//�޷�����,���и����Ż��������С�������ٶ�����


//�ֲ���������ջ����ջ����ʹ�øߵ�ַ�ռ䣬��ʹ�õ͵�ַ�ռ�





//ģ��ʵ��strcpy������Ŀ��ռ����ʼ��ַ��
//void my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);//����
//	assert(dest!=NULL);//����
//  chnar* ret=dest;
//	while (*dest++ = *src++)//'\0'��ASCII��ֵΪ0   **************************
//	{
//		;
//	}
// return ret;
//}
//
//int main()
//{
//	char arr1[20] = {"xxxxxxxxxxx"};
//	char arr2[] = { "hello" };
//	
//	printf("%s\n", my_strcpy(arr1, arr2));//��ʽ����
//
//	return 0;
//}



//int main()
//{
//	//const���� �������������������޸�
//	const int num = 10;
//	const int* p = &num;
//	//const��*���
//	//const����p����ʾָ��������ɸı䣬��ָ��ָ�����ݿ��Ըı�
//	//*p = 20;
//
//	const int num = 10;
//	int* const p = &num;
//	//const��*�ұ�
//	//const����*p����ʾָ��ָ�����ݲ���ͨ��ָ�����ı�,��ָ�����������޸�
//	//*p = 20;
//	printf("%d\n", num);
//
//	return 0;
//}





//ģ��ʵ��strlen
//size_t my_strlen(const char* str)//size_t--unsigned int
//{
//	//assert(str != NULL);
//	assret(str);//ͬ��
//	size_t count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//��̳�������
//1.�����ʹ���--�﷨����
//2.�����ʹ���--��ʶ����ƴд����
//3.�����ʹ���--���ԡ���λ