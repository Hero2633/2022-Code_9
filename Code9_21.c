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
		printf("******0.退出*********\n");
		printf("******1.增加*********\n");
		printf("******2.删除*********\n");
		printf("******3.搜索*********\n");
		printf("******4.修改*********\n");
		printf("******5.排序*********\n");
		printf("******6.展示*********\n");
		printf("请输入你的选择:");
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
			printf("退出\n"); break;
		default:
			printf("选择错误\n"); break;
		case SEARCH:break;
		}
	
	} while (input);
	return 0;
}