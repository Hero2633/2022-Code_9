#define  _CRT_SECURE_NO_WARNINGS 0
#include"Contact.h"
void test1()
{
	Contact p;
	InitContact(&p);
	AddContact(&p);
	AddContact(&p);
	AddContact(&p);
	SearchContact(&p);
	DelContact(&p);
	DelContact(&p);
	DelContact(&p);
	ShowContact(&p);
}
int main()
{
	//test1();
	int input = 0;
	
	Contact p;
	InitContact(&p);
	do
	{
		printf("******0.�˳�*********\n");
		printf("******1.����*********\n");
		printf("******2.ɾ��*********\n");
		printf("******3.����*********\n");
		printf("******4.�޸�*********\n");
		printf("******5.����*********\n");
		printf("******6.չʾ*********\n");
		printf("���������ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&p); break;
		case DEL:
			DelContact(&p); break;
		case SORT:
			SortContact(&p); break;
		case MODIFY:
			ModifyContact(&p); break;
		case SHOW:
			ShowContact(&p); break;
		case EXIT:
			printf("�˳�\n"); break;
		default:
			printf("ѡ�����\n"); break;
		case SEARCH:break;
		}
	
	} while (input);
	return 0;
}