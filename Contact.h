#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#define MAX 100//ͨѶ¼100��
//��Ҫʵ�־�̬�汾ͨѶ¼
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
	int size;//��¼��Ч����
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
void InitContact(Contact*p);//��ʼ��ͨѶ¼
void AddContact(Contact* p);//������ϵ��
void ShowContact(const Contact* p);//��ӡ��ϵ��
void DelContact(Contact*p);//ɾ����ϵ��(������ɾ��)
void SearchContact(const Contact* p);//������ϵ��
void ModifyContact(Contact* p);//�޸���ϵ��
void SortContact(Contact*p);//����