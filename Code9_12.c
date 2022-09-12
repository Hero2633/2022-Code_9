#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#pragma warning (disable:6385)
//void GetNext(const char*p,int*next)
//{
//	next[0] = -1;
//	next[1] = 0;
//	int k = 0;
//	int i = 1;
//	int len = strlen(p);
//	for (i = 1; i < len; )
//	{
//		if (k==-1||p[k] == p[i])
//		{
//			next[i + 1] = k + 1;
//			i++;
//			k++;
//		}
//		else 
//		{
//			k = next[k];
//		}
//	}
//}
//int KMP(const char* p1, const char* p2, int pos)
//{
//	assert(p1&&p2);
//	int len1 = strlen(p1);
//	int len2 = strlen(p2);
//	assert(pos>=0&&pos<len1);
//	int i = pos;//主串
//	int j = 0;//字串
//	int* next=(int*)malloc(sizeof(int)*len2);//
//	assert(next);
//	GetNext(p2,next);
//	while (i < len1 && j < len2)
//	{
//		if(j==-1||p1[i] == p2[j])
//		{
//			i++;
//			j++;
//		}
//		else 
//			j = next[j];
//	}
//	if (j >= len2)
//		return i - j;
//	return -1;
//}
//const char* my_strstr(const char* p1, const char* p2,int pos)
//{
//	int ret = KMP(p1,p2,pos);
//	if (ret == -1)
//		return NULL;
//	return p1+ret;
//}
//
//int main()
//{
//	const char* p1 = "ababcabcdabcdef";
//	const char* p2 = "cbcdab";
//	const char* ret = my_strstr(p1,p2,6);
//	if (ret)
//		printf("%s\n", ret);
//	else
//		printf("NULL\n");
//	return 0;
//}
#include<string.h>
#include<stdlib.h>
//int main()//strtok使用
//{
//	char arr[] = "Wanzuoyi@2002.11.01.edu.com";
//	char* buff = arr;
//	char* tmp = arr;
//	//do
//	//{
//	//	tmp=strtok(buff,"@.");
//	//	if(tmp)
//	//	printf("%s\n",tmp);
//	//	buff = NULL;
//	//} while (tmp);
//	/*for (buff = strtok(buff, "@."); buff; buff=strtok(NULL, "@."))
//		printf("%s\n",buff);*/
//	return 0;
//}
#include<errno.h>
//int main()
//{
//	/*for (int i = 0; i < 10; i++)
//		printf("%d:%s\n",i,strerror(i));*/
//	//FILE* pf = fopen("Code9_12.txt","r");
//	//if (!pf)
//	//{
//	//	printf("%d:%s\n",errno,strerror(errno));
//	//	perror("fopen");
//	//	return 0;
//	//}
//	/*printf("%s\n", strerror(404));
//	printf("%s\n",strerror(errno));*/
//
//	return 0;
//}
//int main()//感受mencpy
//{
//	//int arr[20] = { 0 };
//	//printf("memcpy之前:\n");
//	//for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	//	printf("%2d ", arr[i]);
//	//printf("\n");
//	//int arr2[] = {1,2,3,4,5,6,7,8,9,0,11,12,13,14,15,16,17,18,19};
//	//memcpy(arr,arr2,sizeof(arr2));
//	//printf("memcpy之后:\n");
//	//for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	//	printf("%2d ",arr[i]);
//	double arr[10] = {1.1,1.2,1.3};
//	double arr2[] = {3.14,11.01,2.2,20.1,6.66,5.4321,1.2,1.3,1.4};
//	printf("memcpy之前:\n");
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//		printf("%.2lf ",arr[i]);
//	putchar('\n');
//	memcpy(arr,arr2,sizeof(arr2));
//	printf("memcpy之后:\n");
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//		printf("%.2lf ", arr[i]);
//
//	return 0;
//}
//void* my_memcpy(void* dest, const void* sour, size_t num)//模拟实现moncpy
//{
//	assert(dest&&sour);
//	char* p1 = (char*)dest;
//	char* p2 = (char*)sour;
//	while (num--)
//		*p1++ = *p2++;
//	return dest;
//}
//int main()//感受mencpy
//{
	//int arr[20] = { 0 };
	//printf("memcpy之前:\n");
	//for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	//	printf("%2d ", arr[i]);
	//printf("\n");
	//int arr2[] = {1,2,3,4,5,6,7,8,9,0,11,12,13,14,15,16,17,18,19};
	//my_memcpy(arr,arr2,sizeof(arr2));
	//printf("memcpy之后:\n");
	//for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	//	printf("%2d ",arr[i]);

//	double arr[10] = { 1.1,1.2,1.3 };
//	double arr2[] = { 3.14,11.01,2.2,20.1,6.66,5.4321,1.2,1.3,1.4 };
//	printf("memcpy之前:\n");
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//		printf("%.2lf ", arr[i]);
//	putchar('\n');
//	my_memcpy(arr, arr2, sizeof(arr2));
//	printf("memcpy之后:\n");
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//		printf("%.2lf ", arr[i]);
//
//	return 0;
//}
//int main()//感受memmove//重叠拷贝
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	printf("memmove重叠拷贝之前:\n");
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//		printf("%d ",arr[i]);
//	putchar('\n');
//	memmove(arr,arr+2,20);
//	printf("memmove重叠拷贝之后:\n");
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//		printf("%d ", arr[i]);
//	return 0;
//}
//void* my_mommove(void*dest,const void*sour,size_t num)
//{
//	assert(dest&&sour);
//	char* p1 = (char*)dest;
//	char* p2 = (char*)sour;
//	if (dest <= sour)
//	{
//		while (num--)
//		{
//			*p1++ = *p2++;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*(p1 + num ) = *(p2 + num);
//		}
//	}
//	return dest;
//}
//int main()//模拟memmove//重叠拷贝
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("memmove重叠拷贝之前:\n");
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//		printf("%d ", arr[i]);
//	putchar('\n');
//	memmove(arr+3, arr + 2, 20);
//	printf("memmove重叠拷贝之后:\n");
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//		printf("%d ", arr[i]);
//	return 0;
//}
//int main()//使用memset
//{
//	int arr[10] = { 0 };
//	printf("memset之前:\n");
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//				printf("%d ", arr[i]);//0
//	putchar('\n');
//	memset(arr,-1,sizeof(arr));
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//		printf("%d ", arr[i]);//-1
//
//	return 0;
//}
//void* my_memset(void* ptr, int val, size_t num)
//{
//	assert(ptr);
//	char* p1 = (char*)ptr;
//	while (num--)
//	{
//		*p1++ = val;
//	}
//	return ptr;
//}
//int main()//模拟实现memset
//{
//	int arr[10] = { 0 };
//	printf("memset原装:\n");
//	memset(arr, 1, sizeof(arr));
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//		printf("%d ", arr[i]);//0
//	putchar('\n');
//	printf("memset盗版:\n");
//	my_memset(arr, 1, sizeof(arr));
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//		printf("%d ", arr[i]);//-1
//
//	return 0;
//}
//int main()//输出一个盗版杨辉三角
//{
//	int arr[10][10] = { 0 };
//	int r = 0;
//	int c = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (int R = 0; R < n; R++)
//	{
//		arr[R][0] = 1;
//		arr[R][R] = 1;
//		for (int C = 1; C < R; C++)
//		{
//			arr[R][C] = arr[R - 1][C - 1] + arr[R - 1][C];
//		}
//	}
//	for (r = 0; r < n; r++)
//	{		
//		for (c = 0; c <= r; c++)
//			printf("%-2d ", arr[r][c]);
//	putchar('\n');
//}
//	return 0;
//}