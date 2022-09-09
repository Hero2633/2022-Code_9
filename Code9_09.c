#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//char** fizzBuzz(int n, int* returnSize) {
//    char** arr = (char**)malloc((n + 1) * 4);
//    int i = 1;
//    for (i = 1; i <= n; i++)
//    {
//        if (i % 3 == 0 && i % 5 == 0)
//        {
//            char* tmp = (char*)malloc(sizeof(char) * 15);
//            strcpy(tmp, "FizzBuzz");
//            arr[i] = tmp;
//
//        }
//        else if (i % 3 == 0)
//        {
//            char* tmp = (char*)malloc(sizeof(char) * 15);
//            strcpy(tmp, "Fizz");
//            arr[i] = tmp;
//
//        }
//        else if (i % 5 == 0)
//        {
//            char* tmp = (char*)malloc(sizeof(char) * 15);
//            strcpy(tmp, "Buzz");
//            arr[i] = tmp;
//        }
//        else
//        {
//            char* tmp = (char*)malloc(10);
//            sprintf(tmp, "%d", i);
//            arr[i] = tmp;
//        }
//    }
//    *returnSize = n + 1;
//    return arr;
//}
//int main()
//{
//    int ret = 0;
//    char**p=fizzBuzz(15,&ret);
//    for (int i = 1; i < ret; i++)
//        printf("%s\n",p[i]);
//    return 0;
//}
#include<assert.h>
//char* my_strcpy(char*dest,const char*sour)
//{
//	assert(dest&&sour);
//	
//	char *tmp = dest;
//	while ((*dest++) = *sour++);
//	return tmp;
//}
//int main()
//{
//	char arr[11];
//	char p[] = "***********";
//	//strcpy(arr,p);
//	printf(my_strcpy(arr,p));
//	return 0;
//}
//int main()
//{
//	char arr[] = "*****************";
//	char arr2[100]="bitejiuyeke";
//	strncpy(arr2,arr2,15);
//	printf(arr2);
//	return 0;
//}
//char*my_strcat(char *dest,const char *sour)
//{
//	assert(dest&&sour);
//	char* cur = dest;
//	while (*cur != '\0')
//		cur++;
//	while (*cur++ = *sour++);
//	return dest;
//}
//int main()//模拟实现strcat
//{
//	char arr[50] = "Hello \0****************";
//	char arr1[10] = "bit!";
//	char* ret = my_strcat(arr1,arr1);
//	//1、从被追加字符串'\0'开始追加
//	//2、追加字符串连‘\0’也要追加过去
//	//3、被追加字符串剩余空间必需够用
// //4、不能自己给自己拼接
//	printf(ret);
//	return 0;
//}
//char* my_strncpy(char*dest,const char*sour,size_t n)
//{
//	assert(dest&&sour);
//	 char* cur = dest;
//	 while ((n--)&&(* cur++ = *sour++));
//	 while (n--)
//		 *cur++ = '\0';
//	return dest;
//}
//int main()//模拟实现strncpy
//{
//		char arr[50] = "**********************";
//	char arr1[10] = "bit!";
//	char* ret = my_strncpy(arr,arr1,9);
//	//1、拷贝前n个字符
//	//2、不会主动添加\0
//	//3、目标数组，必须hanyou
//	//4、对于多余的拷贝直接以\0填充
//	puts(ret);
//
//	return 0;
//}
//int my_strncmp(const char* p1, const char* p2, size_t n)
//{
//	assert(p1&&p2);
//	while ((n) && (*p1 == *p2))
//	{
//		if (!*p2)
//			return 0;
//		p1++;
//		p2++;
//		n--;
//	}
//	if (!n)
//		return 0;
//	return *p1 - *p2;
//}
//int main()//模拟strncmp
//{
//	char arr[] = "abddaf";
//	char arr1[] = "abd";
//	int ret = my_strncmp(arr,arr1,20);
//	printf("%d\n",ret);
//	return 0;
//}interestin
//char* my_strncat(char* p, const char* p1,size_t n)
//{
//	assert(p&&p1);
//	char* cur = p;
//	while (*cur != '\0')
//		cur++;
//	while (n&&*p1)
//	{
//		*cur = *p1;
//		cur++;
//		p1++;
//		n--;
//	}
//	*cur = '\0';
//	return p;
//}
//int main()
//{
//	char p[50] = "**********\0*********";
//	char p1[] = "bit";
//	char* ret = my_strncat(p,p1,1);
//	printf(ret);
//	return 0;
//}
//char* my_strstr(const char* p1, const char* p2)
//{
//	const char* s2 = p2;
//	const char* s1 = p1;
//	while (*p1)
//	{
//		s1 = p1;
//		s2 = p2;
//		while (*s2&&(*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (!*s2)
//			return (char*)p1;
//		p1++;
//	}
//	return NULL;
//}
//int main()
//{
//	char p[] = "abcgerbbrewhabc";
//	char* p1 = "ew";
//	char* ret = my_strstr(p,p1);
//	if (ret)
//		puts(ret);
//	else
//		puts("NULL");
//	return 0;
//}