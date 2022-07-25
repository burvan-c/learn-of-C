#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"


void initcontact(contact* pc)
{
	pc->sz = 0;
	//memset();ÄÚ´æÉèÖÃ
	memset(pc->data, 0, sizeof(pc->data));
}

void addcontact(contact* pc) 
{
	
}