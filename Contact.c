#define  _CRT_SECURE_NO_WARNINGS 0
#include"Contact.h"

void InitContact(Contact* p)
{
	assert(p);
	p->size = 0;
	memset(p->arr,0,sizeof(struct Message)*MAX);
}
void AddContact(Contact* p)
{
	assert(p);
	if (p->size == MAX)
	{
		printf("ͨѶ¼����!\n");
		return;
	}
	printf("***���Ӳ���***\n");
	printf("����������:");
	scanf("%s",p->arr[p->size].name);
	printf("����������:");
	scanf("%d", &(p->arr[p->size].age));
	printf("�������Ա�:");
	scanf("%s", p->arr[p->size].sex);
	printf("������绰:");
	scanf("%s", p->arr[p->size].num);
	printf("������סַ:");
	scanf("%s", p->arr[p->size].address);
	p->size++;
}
void ShowContact(const Contact* p)
{
	assert(p);
	if (p->size == 0)
	{		printf("ͨѶ¼Ϊ��\n");
	return ;
}
	else
	{
		printf("%-10s\t%-5s\t%-10s\t%-20s\t%-25s\t\n","����","����","�Ա�","�绰","סַ");
		for (int i = 0; i < p->size; i++)
		{
			printf("%-10s\t%-5d\t%-10s\t%-20s\t%-25s\t\n",p->arr[i].name, p->arr[i].age, p->arr[i].sex, p->arr[i].num, p->arr[i].address);
		}
	}

}
void DelContact(Contact* p)
{
	assert(p);
	if (p->size == 0)
	{
		printf("ͨѶ¼λ��,�벻Ҫɾ����\n");
		return;
	}
	char name[20];
	printf("***ɾ������***\n");
	printf("����������:");
	scanf("%s", name);
	int i = 0;
	for (i = 0; i < p->size; i++)
	{
		if (!strcmp(p->arr[i].name, name))
		{
			for (int j = i; j < p->size - 1; j++)
			{
				p->arr[j] = p->arr[j + 1];
			}
			p->size--;
			return;
		}
	}
	printf("���޴��ˣ�ɾ��ʧ��\n!");
}
void SearchContact(const Contact* p)
{
	assert(p);
	if (p->size == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�����!\n");
		return;
	}
	char name[20];
	printf("***���Ҳ���***\n");
	printf("����������:");
	scanf("%s", name);
	int i = 0;
	for (i = 0; i < p->size; i++)
	{
		if (!strcmp(p->arr[i].name, name))
		{
			printf("%-10s\t%-5s\t%-10s\t%-20s\t%-25s\t\n", "����", "����", "�Ա�", "�绰", "סַ");
			printf("%-10s\t%-5d\t%-10s\t%-20s\t%-25s\t\n", p->arr[i].name, p->arr[i].age, p->arr[i].sex, p->arr[i].num, p->arr[i].address);
			return;
		}
	}
	printf("û�ҵ�\n");
}
void ModifyContact(Contact* p)
{
	assert(p);
	if (p->size == 0)
	{
		printf("�޷��޸ģ�ͨѶ¼Ϊ��\n");
		return;
	}
	char name[20];
	printf("***�޸Ĳ���***\n");
	printf("����������:");
	for (int i = 0; i < p->size; i++)
	{
		if (strcmp(p->arr[i].name, name))
		{
			printf("����������:");
			scanf("%s", p->arr[i].name);
			printf("����������:");
			scanf("%d", &(p->arr[i].age));
			printf("�������Ա�:");
			scanf("%s", p->arr[i].sex);
			printf("������绰:");
			scanf("%s", p->arr[i].num);
			printf("������סַ:");
			scanf("%s", p->arr[i].address);
			return;
		}
	}
	printf("���޴��ˣ��޸�ʧ��!\n");
}
int cmpByname(const void* p1, const void* p2)
{
	struct Message* a = (struct Message*)p1;
	struct Message* b = (struct Message*)p2;
	return strcmp(a->name,b->name);
}
int cmpBysex(const void* p1, const void* p2)
{
	struct Message* a = (struct Message*)p1;
	struct Message* b = (struct Message*)p2;
	return strcmp(a->sex, b->sex);
}
int cmpByaddres(const void* p1, const void* p2)
{
	struct Message* a = (struct Message*)p1;
	struct Message* b = (struct Message*)p2;
	return strcmp(a->address, b->address);
}
int cmpBynum(const void* p1, const void* p2)
{
	struct Message* a = (struct Message*)p1;
	struct Message* b = (struct Message*)p2;
	return strcmp(a->num, b->num);
}
int cmpByage(const void* p1, const void* p2)
{
	struct Message* a = (struct Message*)p1;
	struct Message* b = (struct Message*)p2;
	return a->age-b->age;
}
void SortContact(Contact* p)
{
	assert(p);
	assert(p->size);
	int input = 0;
	printf("******0.����*********\n");
	printf("******1.����*********\n");
	printf("******2.סַ*********\n");
	printf("******3.�绰*********\n");
	printf("******4.�Ա�*********\n");
	printf("*********************\n");
	int (*ch[5])(const void* p1, const void* p2) = {cmpByname,cmpByage ,cmpByaddres ,cmpBynum ,cmpBysex };
	scanf("%d", &input);
	if (input > 5 || input < 0)
	{
		printf("ѡ�����!\n");
		return;
	}
	else
	{
		qsort(p->arr,sizeof(struct Message),p->size,ch[input]);
	}
}
