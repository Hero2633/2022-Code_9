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
		printf("通讯录已满!\n");
		return;
	}
	printf("***增加操作***\n");
	printf("请输入名字:");
	scanf("%s",p->arr[p->size].name);
	printf("请输入年龄:");
	scanf("%d", &(p->arr[p->size].age));
	printf("请输入性别:");
	scanf("%s", p->arr[p->size].sex);
	printf("请输入电话:");
	scanf("%s", p->arr[p->size].num);
	printf("请输入住址:");
	scanf("%s", p->arr[p->size].address);
	p->size++;
}
void ShowContact(const Contact* p)
{
	assert(p);
	if (p->size == 0)
	{		printf("通讯录为空\n");
	return ;
}
	else
	{
		printf("%-10s\t%-5s\t%-10s\t%-20s\t%-25s\t\n","姓名","年龄","性别","电话","住址");
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
		printf("通讯录位空,请不要删除！\n");
		return;
	}
	char name[20];
	printf("***删除操作***\n");
	printf("请输入名字:");
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
	printf("查无此人，删除失败\n!");
}
void SearchContact(const Contact* p)
{
	assert(p);
	if (p->size == 0)
	{
		printf("通讯录为空，无法查找!\n");
		return;
	}
	char name[20];
	printf("***查找操作***\n");
	printf("请输入名字:");
	scanf("%s", name);
	int i = 0;
	for (i = 0; i < p->size; i++)
	{
		if (!strcmp(p->arr[i].name, name))
		{
			printf("%-10s\t%-5s\t%-10s\t%-20s\t%-25s\t\n", "姓名", "年龄", "性别", "电话", "住址");
			printf("%-10s\t%-5d\t%-10s\t%-20s\t%-25s\t\n", p->arr[i].name, p->arr[i].age, p->arr[i].sex, p->arr[i].num, p->arr[i].address);
			return;
		}
	}
	printf("没找到\n");
}
void ModifyContact(Contact* p)
{
	assert(p);
	if (p->size == 0)
	{
		printf("无法修改，通讯录为空\n");
		return;
	}
	char name[20];
	printf("***修改操作***\n");
	printf("请输入名字:");
	for (int i = 0; i < p->size; i++)
	{
		if (strcmp(p->arr[i].name, name))
		{
			printf("请输入名字:");
			scanf("%s", p->arr[i].name);
			printf("请输入年龄:");
			scanf("%d", &(p->arr[i].age));
			printf("请输入性别:");
			scanf("%s", p->arr[i].sex);
			printf("请输入电话:");
			scanf("%s", p->arr[i].num);
			printf("请输入住址:");
			scanf("%s", p->arr[i].address);
			return;
		}
	}
	printf("查无此人，修改失败!\n");
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
	printf("******0.姓名*********\n");
	printf("******1.年龄*********\n");
	printf("******2.住址*********\n");
	printf("******3.电话*********\n");
	printf("******4.性别*********\n");
	printf("*********************\n");
	int (*ch[5])(const void* p1, const void* p2) = {cmpByname,cmpByage ,cmpByaddres ,cmpBynum ,cmpBysex };
	scanf("%d", &input);
	if (input > 5 || input < 0)
	{
		printf("选择错误!\n");
		return;
	}
	else
	{
		qsort(p->arr,sizeof(struct Message),p->size,ch[input]);
	}
}
