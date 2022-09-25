#define  _CRT_SECURE_NO_WARNINGS 0
//#include<stdio.h>
//int main()
//{
//	int arr[10];
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = 2021;
//	}
//	int j = 1;
//	int k = 1;
//	int tmp = 0;
//	while (1)
//	{
//		k = j;
//		if (!k)
//			arr[k]--;
//		while (k)
//		{
//			if (arr[k % 10] == 0)
//			{
//				printf("%d\n",j-1);
//				return 0;
//			}
//			arr[k % 10]--;
//			k /= 10;
//		}
//		j++;
//	}
//	return 0;
//}
#include<stdio.h>
//#define N 3000
//int main()
//{
//	unsigned long long arr[N] = { 1,1,1 };
//	int i = 1;
//	int j = i + 1;
//	int r = 3;
//	int begin = 3;
//	int end = begin + r - 1;
//	int cur = begin + 1;
//	int Rmax = 75;
//	while (r <= Rmax)
//	{
//		arr[begin] = arr[end] = 1;
//		while(j < begin)
//		{
//			arr[cur] = arr[i] + arr[j];
//			i++;
//			j++;
//			cur++;
//		}
//		r++;
//		i = j++;
//		begin = end + 1;
//		end = begin + r - 1;
//		cur = begin + 1;
//	}
//	int len = (1+Rmax)*Rmax/2;
//	int count = 0;
//	int cmp = 4;
//	/*for (int k = 0; k < len; k++)
//		printf("%llu\n",arr[k]);*/
//	for (int k = 0; k < len; k++)
//	{
//		count++;
//		if (arr[k] == cmp)
//			break;
//	}
//	printf("%d\n",count);
//	return 0;
//}
//#include<stdlib.h>
//int cmpUp(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//int cmpDown(const void* p1, const void* p2)
//{
//	return *(int*)p2 - *(int*)p1;
//}
//void sort(int* nums, int left, int right, int key)
//{
//	int len = right - left + 1;
//	int (*fun[2])(const void*, const void*) = {cmpDown,cmpUp};
//	qsort(nums+left,len,sizeof(int),fun[key]);
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d",&n,&m);
//	int k = 1;
//	int* nums = (int*)malloc(sizeof(int) * n);
//	for (int i = 0; i < n; i++)
//	{
//		nums[i] = k++;
//	}
//	int key = 0;
//	int beginORend = 0;
//	int left = 0;
//	int right = 0;
//	while (m--)
//	{
//		scanf("%d%d", &key, &beginORend);
//		left = 0;
//		right = beginORend-1;
//		if (key)
//		{
//			left = beginORend - 1;
//			right = n - 1;
//		}
//		sort(nums,left,right,key);
//
//	}
//	for (int i = 0; i < n; i++)
//		printf("%d ",nums[i]);
//	return 0;
//}
//int findDuplicate(int* nums, int numsSize) {
//    int i = 0;
//    while (i < numsSize)
//    {
//        if (nums[abs(nums[i]) - 1] < 0)
//            break;
//        else
//        {
//            nums[abs(nums[i]) - 1] *= -1;
//            i++;
//        }
//    }
//    return abs(nums[i]);
//}