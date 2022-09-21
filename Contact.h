#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#define MAX 100//通讯录100人
//主要实现静态版本通讯录
#pragma warning (disable:6031)
struct Message
{
	char name[10];
	char sex[10];
	char num[20];
	char address[25];
	int age;

};

typedef struct Contact
{
	struct Message arr[MAX];
	int size;//记录有效数据
}Contact;
 
enum INPUT
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	SHOW
};
void InitContact(Contact*p);//初始化通讯录
void AddContact(Contact* p);//增加联系人
void ShowContact(const Contact* p);//打印联系人
void DelContact(Contact*p);//删除联系人(以名字删除)
void SearchContact(const Contact* p);//查找联系人
void ModifyContact(Contact* p);//修改联系人
void SortContact(Contact*p);//排序