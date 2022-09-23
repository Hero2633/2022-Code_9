#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//
//	int* tmp = (int*)calloc(10,sizeof(int));
//	if (tmp == NULL)
//	{
//		perror("malloc");//用于打印函数为什么异常的原因
//		return 1;
//}
//	int* str = (int*)realloc(tmp,sizeof(int)*INT_MAX);//这次我们需要12000个空间
//	if (!str)
//	{//原理：free只会对同一块空间进行一次释放
//		printf("调整失败，我不会对tmp进行释放，因此我们可以对tmp是否能释放来判断realloc开辟失败会不会自动释放tmp");
//		free(tmp);//若执行到这出现异常表示realloc已经自定帮我们释放；反之
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
//	free(p+1);//释放空间，必须是所开辟的空间的首地址，不能是中间地址！！！
//	p = NULL;//为了防止后面误操作，我们将p里面的值置空（让p失忆）
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
//	printf("%d月:\n",month);
//	printf("日 一 二 三 四 五 六\n");
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
//	*p = 20;//如果p的值是NULL，就会有问题
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
//		*(p + i) = i;//当i是10的时候越界访问
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
//	free(p);//p不再指向动态内存的起始位置
//}
//void test()
//{
//	int* p = (int*)malloc(100);
//	free(p);
//	free(p);//重复释放
//}
//动态开辟内存忘记释放（内存泄漏）
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