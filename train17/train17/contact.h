#define _CRT_SECURE_NO_WARNINGS 1

#define max_name 20
#define max_tele 12
#define max_sex 10
#define max_addr 30
#define max 1000

//���͵Ķ���
typedef struct peoinfo
{
	char name[max_name];
	char sex[max_sex];
	int age;
	char tele[max_tele];
	char addr[max_addr];
}peoinfo;

//ͨѶ¼
typedef struct contact
{
	peoinfo data[max];//����˵���Ϣ
	int sz;//��¼��ǰͨѶ¼����Ч��Ϣ�ĸ���
}contact;

//��ʼ��ͨѶ¼
void initcontact(contact* pc);

//������ϵ��
void addcontact(contact* pc);