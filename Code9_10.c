#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
//size_t my_strlen(const char*p)
//{
//	assert(p);
//	if (!*p)
//		return 0;
//	return 1 + my_strlen(p+1);
//}
//int main()
//{
//	char const* p = "bit jie ye ke yyds!";
//	unsigned int ret1=my_strlen(p);
//	unsigned int ret2 = strlen(p);
//	printf("%u\n", ret1);
//	printf("%u\n",ret2);
//	return 0;
//}

//char* my_strcpy(char* dest, const char* sour)
//{
//	assert(dest&&sour);
//	char* tmp = dest;
//	while (*tmp++ = *sour++);
//	return dest;
//}
//int main()
//{
//	char arr[30] = "***********************";
//	char arr1[] = "bit jiu ye ke yyds!";
//	char arr2[30] = "***********************";
//	char arr3[] = "bit jiu ye ke yyds!";
//	char* ret1 = my_strcpy(arr, arr1);
//	char* ret2 = strcpy(arr2,arr3);
//	puts(ret1);
//	puts(ret2);
//	return 0;
//}
//int  my_strcmp(const char* p1, const char* p2)
//{
//	assert(p1&&p2);
//	while (*p1 == *p2)
//	{
//		if (!*p1)
//			return 0;
//		p1++;
//		p2++;
//	}
//	return *p1 - *p2;
//}
//int main()
//{
//	const char* p1 = "zyyds!";
//	const char* p2 = "yyds!";
//  int ret1 = my_strcmp(p1,p2);
//  int ret2 = strcmp(p1,p2);
//	printf("ret1=%d\n", ret1);
//	printf("ret2=%d\n",ret2);
//	return 0;
//}
//char* my_strcat(char* dest, const char* sour)
//{
//	assert(dest&&sour);
//	char* cur = dest;
//	while (*cur)cur++;
//	while (*cur++ = *sour++);
//	return dest;
//}
//int main()
//{
//	char arr1[30] = "Hello \0*******";
//	char arr2[] = "bit!";
//	char arr3[30] = "Hello \0********";
//	char arr4[] = "bit!";
//	char* ret1 = my_strcat(arr1,arr2);
//	char* ret2 = strcat(arr3, arr4);
//	puts(ret1);
//	puts(ret2);
//	return 0;
//}
const char* my_strstr(const char* dest, const char* p)
{
	assert(dest&&p);
	const char* cur1 = dest;
	const char* cur2 = p;
	const char* begin = cur1;
	while (*begin)
	{
		cur1 = begin;
		cur2 = p;
		while (*cur2 && (*cur1 == *cur2))
		{
			cur1++;
			cur2++;
		}
		if (!*cur2)
			return begin;
		begin++;
	}
	return NULL;
}
int main()
{
	char arr[] = "Hello bit! I love bit!";
	const char* p = "I ";
	const char* p1 = "bitkeji";
	const char* ret1 = my_strstr(arr, p1);
	char const* ret2 = strstr(arr, p1);
	if (!ret1 && !ret2)
		printf("NULL\n");
	else
	{		puts(ret1);
	puts(ret2);
}
	return 0;
}
//char* my_strncpy(char*dest,const char*sour,size_t n)
//{
//	assert(dest&&sour);
//	char* tmp = dest;
//	while (n && (*sour))
//	{
//		*tmp++ = *sour++;
//		n--;
//	}
//	while (n--)
//		*tmp++ = '\0';
//	return dest;
//}
//int main()//模拟strncpy
//{
//	char arr1[30] = "******************";
//	char arr2[] = "bit ke ji!";
//	char arr3[30] = "******************";
//	char arr4[] = "bit ke ji!";
//	char *ret1 = my_strncpy(arr1, arr2,strlen(arr4)+2);
//	char *ret2 = strncpy(arr3,arr4,strlen(arr4)+2);
//	puts(ret1);
//	puts(ret2);
//	return 0;
//}
//int my_strncmp(const char* p1, const char* p2,size_t n)
//{
//	assert(p1&&p2);
//	while (n && (*p1 == *p2))
//	{
//		if (!*p1)
//			return 0;
//		p1++;
//		p2++;
//		n--;
//		if (!n)
//			return 0;
//	}
//	return *p1 - *p2;
//}
//int  main()//模拟strncmp
//{
//	char* p1 = "ancjka";
//	char* p2 = "zaancfjka";
//	int ret1 = my_strncmp(p1,p2,10);
//	int ret2 = strncmp(p1, p2, 10);
//	printf("ret1=%d\n", ret1);
//	printf("ret2=%d\n",ret2);
//	return 0;
//}
//char* my_strncat(char* p1, const char* p2, size_t n)
//{
//	assert(p1&&p2);
//	char* cur = p1;
//	while (*cur)
//		cur++;
//	while (n && *p2)
//	{
//		*cur++= *p2++;
//		n--;
//	}
//		*cur = '\0';
//		return p1;
//}
//int main()//模拟实现strncat
//{
//	char arr[30] = "Hello \0****************";
//	char arr2[] = "bitkeji!";
//	char arr3[30] = "Hello \0***************";
//	char arr4[] = "bitkeji!";
//	char* ret1 = my_strncat(arr, arr2, 3);
//	char* ret2 = strncat(arr3,arr4,3);
//	puts(arr);
//	puts(arr3);
//	return 0;
//}
//int cmp(const void* p1, const void* p2)
//{
//    return *(int*)p1 - *(int*)p2;
//}
//int func(int* nums, int left, int right, int key)
//{
//    int mid = 0;
//    int ans = -1;
//    if (left > right)
//        return  -1;
//    while (left <= right)
//    {
//        mid = (right - left) / 2 + left;
//        if (nums[mid] > key)
//        {
//            ans = mid;
//            right = mid - 1;
//        }
//        else if (nums[mid] < key)
//            left = mid + 1;
//        else
//        {
//            int ret = func(nums, left, mid - 1, key);
//            if (ret == -1)
//                return mid;
//            return ret;
//        }
//    }
//    return ans;
//}
//int specialArray(int* nums, int numsSize) {
//    int x = 1;
//    qsort(nums, numsSize, sizeof(int), cmp);
//    while (x <= numsSize)
//    {
//        int tmp = x;
//        int ret = func(nums, 0, numsSize - 1, tmp);//找一个最接近x，但是又比x大的数的下标;
//        if (ret == -1)
//        {
//            x++;
//            continue;
//        }
//        if (numsSize - ret == x)
//            return x;
//        x++;
//    }
//    return -1;
//}