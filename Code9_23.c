#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//
//	int* tmp = (int*)calloc(10,sizeof(int));
//	if (tmp == NULL)
//	{
//		perror("malloc");//���ڴ�ӡ����Ϊʲô�쳣��ԭ��
//		return 1;
//}
//	int* str = (int*)realloc(tmp,sizeof(int)*INT_MAX);//���������Ҫ12000���ռ�
//	if (!str)
//	{//ԭ��freeֻ���ͬһ��ռ����һ���ͷ�
//		printf("����ʧ�ܣ��Ҳ����tmp�����ͷţ�������ǿ��Զ�tmp�Ƿ����ͷ����ж�realloc����ʧ�ܻ᲻���Զ��ͷ�tmp");
//		free(tmp);//��ִ�е�������쳣��ʾrealloc�Ѿ��Զ��������ͷţ���֮
//		return 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		tmp[i] = i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n",tmp[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int* arr = (int*)malloc(sizeof(int) * 10);
//	//arr = (int*)realloc(arr,sizeof(int)*5);
//	arr[6] = 10;
//	return 0;
//}
//int main()
//{
//	int* p = (int*)malloc(sizeof(int) * 4);
//	for (int i = 0; i < 4; i++)
//		p[i] = i;
//	free(p+1);//�ͷſռ䣬�����������ٵĿռ���׵�ַ���������м��ַ������
//	p = NULL;//Ϊ�˷�ֹ��������������ǽ�p�����ֵ�ÿգ���pʧ�䣩
//	return 0;
//}
#include<time.h>
#include<windows.h>
//int main()
//{
//	
//	while (1)
//	{
//		time_t t = time(NULL);
//		struct tm* p;
//		p = localtime(&t);
//		char* ret = asctime(p);
//		if (ret != 0)
//			printf(ret);
//		printf("\r");
//		Sleep(1000);
//	}
//	return 0;
//}
//int main()
//{
//	time_t start = time(NULL);
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int len = 10;
//	for (int i = 0; i < len; )
//	{
//		for (int j = 0; j < len - 1; j++)
//		{
//			if (arr[j + 1] < arr[j])
//			{
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//		len--;
//	}
//	for (int i = 0; i < 10; i++)
//		printf("%d ",arr[i]);
//	time_t end = time(NULL);
//	printf("%0.56f\n",difftime(end,start));
//	return 0;
//}
//int dayofweek(int year, int month, int day)
//{
//	if (month == 1 || month == 2)
//	{
//		year--;
//		month += 12;
//	}
//	return (year + year / 4 - year / 100 + year / 400 + (13 * month + 8) / 5 + day) % 7;
//}
//void Printf_mon(int year, int month,int day)
//{
//	int weekday = dayofweek(year,month,1);
//	printf("%d��:\n",month);
//	printf("�� һ �� �� �� �� ��\n");
//	printf("--------------------\n");
//	for (int i = 0; i < weekday; i++)
//		printf("   ");
//	for (int i = 1; i <= day; i++)
//	{
//		if (weekday >= 7)
//		{
//			printf("\n");
//			weekday = 0;
//		}
//		printf("%2d ",i);
//		weekday++;
//	}
//	printf("\n");
//}
//int is_leapyear(int year)
//{
//	return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
//}
//int main()
//{
//	int month = 1;
//	int year = 0;
//	int day = 0;
//	scanf("%d",&year);
//	int Day[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
//	while (month <= 12)
//	{
//		if (month == 2)
//		{
//			if (is_leapyear(year))
//				day = 29;
//			else
//				day = 28;
//		}
//		else
//		{
//			day = Day[month];
//		}
//		Printf_mon(year, month, day);
//		month++;
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int *tmp = (int*)malloc(sizeof(int)*10);
//	for (int i = 0; i < 10; i++)
//		tmp[i] = i;
//	return 0;
//}
//void test()
//{
//	int* p = (int*)malloc(INT_MAX / 4);
//	if (p == NULL)
//		return;
//	*p = 20;//���p��ֵ��NULL���ͻ�������
//	free(p);
//}
//int main()
//{
//	test();
//	return 0;
//}
//void test()
//{
//	int i = 0;
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (NULL == p)
//	{
//		exit(EXIT_FAILURE);
//	}
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = i;//��i��10��ʱ��Խ�����
//	}
//	free(p);
//}
//void test()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);//ok?
//}
//void test()
//{
//	int* p = (int*)malloc(100);
//	p++;
//	free(p);//p����ָ��̬�ڴ����ʼλ��
//}
//void test()
//{
//	int* p = (int*)malloc(100);
//	free(p);
//	free(p);//�ظ��ͷ�
//}
//��̬�����ڴ������ͷţ��ڴ�й©��
//int main()
//{
//	test();
//	return 0;
//}
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}