#define _CRT_SECURE_NO_WARNINGS 1

#define max_name 20
#define max_tele 12
#define max_sex 10
#define max_addr 30
#define max 1000

//类型的定义
typedef struct peoinfo
{
	char name[max_name];
	char sex[max_sex];
	int age;
	char tele[max_tele];
	char addr[max_addr];
}peoinfo;

//通讯录
typedef struct contact
{
	peoinfo data[max];//存放人的信息
	int sz;//记录当前通讯录中有效信息的个数
}contact;

//初始化通讯录
void initcontact(contact* pc);

//增加联系人
void addcontact(contact* pc);