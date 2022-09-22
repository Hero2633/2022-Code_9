#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
//enum Color
//{
//	RED=10,
//	BLUE=99,
//	GREEN=34
//};
//int main()
//{
//
//	printf("%d\n",sizeof(enum Color));
//	/*printf("%d\n", RED);
//	printf("%d\n", BLUE);
//	printf("%d\n",GREEN);*/
//	return 0;
//}
//union un
//{
//	char a;
//	int b;
//};
//int main()
//{
//	union un p;
//	printf("%p\n", &p);//联合体的首地址
//	printf("%p\n", &(p.a));//a的首地址
//	printf("%p\n",&(p.b));//b的首地址
//
//	return 0;
//}
//union un
//{
//	char a[5];
//	int b;
//};
//int main()
//{
//	printf("%d\n",sizeof(union un));
//	return 0;
//}
//int check_duan()
//{
//	union
//	{
//		char a;
//		int b;
//	}s;
//	s.b = 1;
//	return s.a;
//}
//int main()
//{
//	if (check_duan())
//		printf("当前机器为小端\n");
//	else
//		printf("当前机器为大端\n");
//	return 0;
//}
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#pragma warning (disable:6031)
#pragma warning (disable:6011)
#pragma warning (disable:6386)
#pragma warning (disable:6385)
//void Josephus(int n, int k)
//{
//	int i = 1;
//	int* tmp = (int*)malloc(sizeof(int)*n);
//	assert(tmp);
//	for (int j = 0; j < n; j++)
//	{
//		tmp[j] = i++;
//	}
//	i = 0;
//	int len = n;
//	int count = 0;
//	while (len != 0)
//	{
//		if (count != k)
//		{
//			count++;
//			if (count != k)
//			i++;
//			if (i >= len)
//				i = 0;
//		}
//		else
//		{
//			printf("%d ",tmp[i]);
//			memmove(tmp+i,tmp+i+1,(len-i)*sizeof(int));
//			len--;
//			count = 0;
//		}
//	}
//	free(tmp);
//	tmp = NULL;
//}
//int main()
//{
//	int n = 10;
//	int k = 3;
//	scanf("%d%d",&n,&k);
//	Josephus(n,k);
//	return 0;
//}
//int* FindNumsAppearOnce(int* array, int arrayLen, int* returnSize) {
//    // write code here
//    int x1 = 0;
//    int x2 = 0;
//    int i = 0;
//    int x = 0;
//    for (i = 0; i < arrayLen; i++)
//        x ^= array[i];
//    int count = 0;
//    while (count < 32)//统计第几位不一样
//    {
//        if (x & (1 << count))
//            break;
//        count++;
//    }
//    for (i = 0; i < arrayLen; i++)
//    {
//        if (array[i] & (1 << count))//第count位为1
//            x1 ^= array[i];
//        else//第count位不为1
//            x2 ^= array[i];
//    }
//    int* tmp = (int*)malloc(sizeof(int) * 2);
//    *returnSize = 2;
//    int min = x1;
//    int max = x2;
//    if (x1 > x2)
//    {
//        min = x2;
//        max = x1;
//    }
//    tmp[0] = min;
//    tmp[1] = max;
//    return tmp;
//}
//int main()
//{
//	int aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa = 0;
//	int aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab = 233;
//	printf("%d\n", aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab);
//
//	return 0;
////}
//int Add(int,int);
//int main()
//{
//	_Bool a=1;
//	Add(2,3);
//	return 0;
//}
//int Add(int a, int b)
//{
//	return a + b;
//}
//#include<stdlib.h>
//int my_atoi(const char* str)
//{
//	assert(str);
//	int i = 0;
//	int flag = 1;//标识+、-法//默认加法
//	const int len = strlen(str);
//	const char* p = str;
//	while ((p[i] < '0' || p[i]>'9')&&i!=len)//再出现数字之前进行判断
//	{
//		if (p[i] == ' ' || (p[i]>='\t'&&p[i]<='\r'))//如果是空格和‘\t’~'\r'之间的也会跳过
//		{
//			i++;
//		}
//		else if (p[i] == '+'|| p[i] == '-')//遇到+号过后不能在出现+、-号，其后面必须跟数字，如果不是直接返回0；-同理
//		{
//			if (p[i + 1] >= '0' && p[i + 1] <= '9')
//			{
//				if (p[i] == '-')
//					flag = -1;
//				i++;
//				break;
//			}
//			else
//				return 0;
//		}
//		else
//			return 0;
//	}
//	if (i == len)//如果走到这，表示整个字符串走完了都没有遇到数字
//		return 0;
//	long long sum = 0;//遇到了数字，并且字符串没走完
//	while (p[i] >= '0' && p[i] <= '9' && i != len)
//	{
//		sum = sum * 10 + p[i++] - '0';
//	}
//	sum = flag * sum;
//	if (sum > INT_MAX)
//		return INT_MAX;
//	else if (sum < INT_MIN)
//		return INT_MIN;
//	return (int) sum;
//}
//int main()
//{
//	char* ptr1 = "-12345.12";
//	char* ptr2 = "+1234w34";
//	char* ptr3 = "   456er12";
//	char* ptr4 = "789 123";
//	int a1, b1, c1, d1,a2,b2,c2,d2;
//	a1 = atoi(ptr1); a2 = my_atoi(ptr1);
//	b1 = atoi(ptr2); b2 = my_atoi(ptr2);
//	c1 = atoi(ptr3); c2 = my_atoi(ptr3);
//	d1 = atoi(ptr4); d2 = my_atoi(ptr4);
//	printf("正版:a1 = %d, b1 = %d, c1 = %d, d1 = %d\n", a1, b1, c1, d1);
//	printf("高仿:a2 = %d, b2 = %d, c2 = %d, d2 = %d\n", a2, b2, c2, d2);
//	//blog.csdn.net/csdn_kou/article/details/81267625
//	/*const char* p = "-2147483648";
//	int ret = atoi(p);
//	int ret2 = my_atoi(p);
//	printf("正版:%d\n", ret);
//	printf("高仿:%d\n",ret2);*/
//	return 0;
//}