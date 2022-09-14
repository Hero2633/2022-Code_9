#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<assert.h>
//void* my_memcpy(void* dest, const void* sour, size_t num)
//{
//	assert(dest && sour);
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
//			*(p1 + num) = *(p2 + num);
//		}
//	}
//	return dest;
//}
//int main(int argc, char* argv[]) {
//	int arr1[8] = { 0 };
//	int arr2[] = { 1,2,3,4,5,6,7,8 };
//	//my_memcpy(arr2+2, arr2, 20);
//	memmove(arr2+2,arr2,20);
//	int i = 0;
//	for (i = 0; i < sizeof(arr2)/ sizeof(int); i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
//int my_memcmp(const void* ptr1, const void* ptr2, size_t num)
//{
//	assert(ptr1&&ptr2);
//	unsigned char* p1 = (unsigned char*)ptr1;
//	unsigned char* p2 = (unsigned char*)ptr2;
//	while (num&&(*p1==*p2))
//	{
//		p1++;
//		p2++;
//		num--;
//		if (!num)
//			return 0;
//	}
//	return *p1 - *p2;
//
//}
//int main()
//{
//	int arr1[] = {1,1,2,3,4,5,6};
//	int arr2[] = {-1,1,2,3,4,5,6};
//	int ret = my_memcmp(arr1,arr2,sizeof(arr2));
//	if (ret < 0)
//		puts("arr1<arr2");
//	else if (ret > 0)
//		puts("arr1>arr2");
//	else
//		puts("arr1==arr2");
//	return 0;
//}
//void* my_memset(void* ptr, int value, size_t num)
//{
//	assert(ptr);
//	unsigned char a = value;
//	unsigned char* p = (unsigned char*)ptr;
//	while (num--)
//	{
//		*(p +num)= a;
//	}
//	return ptr;
//}
//int main()
//{
//	int arr[10];
//	int arr2[10];
//
//	printf("盗版memset:\n");
//	my_memset(arr2, 1, sizeof(arr2));//利用memset给数组赋值
//	for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
//		printf("%d ", arr2[i]);
//	putchar('\n');
//	printf("正版memset:\n");
//	memset(arr,1,sizeof(arr));//利用memset给数组赋值
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//		printf("%d ",arr[i]);
//	return 0;
//}
//int SearchDistance(int* nums, int left, int right, int key, int j)
//{
//    int ans = -1;
//    int mid = 0;
//    while (left <= right)
//    {
//        mid = (right - left) / 2 + left;
//        if (nums[mid] <= key)
//        {
//            ans = mid;
//            right = mid - 1;
//        }
//        else
//            left = mid + 1;
//    }
//    if (ans == -1)
//        return 0;
//    return j - ans;
//}
//
//int maxDistance(int* nums1, int nums1Size, int* nums2, int nums2Size) {
//    int i = 0;
//    int j = 0;
//    int maxdistance = 0;
//    for (j = 0; j < nums2Size && i < nums1Size; i++, j++)
//    {
//        i = j;
//        int ret = SearchDistance(nums1, 0, i, nums2[j], j);
//        printf("%d ", ret);
//        if (ret > maxdistance)
//            maxdistance = ret;
//    }
//    while (j < nums2Size)
//    {
//        int ret = SearchDistance(nums1, 0, nums1Size - 1, nums2[j], j);
//        //printf();
//        if (ret > maxdistance)
//            maxdistance = ret;
//        j++;
//    }
//    return maxdistance;
//}
//int main()
//{
//    int arr[] = { 55,30,5,4,2 };
//    int arr1[] = {100,20,10,10,5};
//    //maxDistance(arr,5);
//
//    return 0;
//}


//int maxDistance(int* nums1, int nums1Size, int* nums2, int nums2Size) {
//    int i = 0;
//    int j = 0;
//    int max = 0;
//    while (i < nums1Size && j < nums2Size)
//    {
//        if (i <= j)
//        {
//            if (nums1[i] > nums2[j])
//                i++;
//            else
//            {
//                int distance = j - i;
//                if (distance >= max)
//                {
//                    max = distance;
//                }
//                j++;
//            }
//        }
//        else
//            j++;
//    }
//    while (j < nums2Size)
//    {
//        if (nums1[i - 1] <= nums2[j])
//        {
//            int distance = j - i + 1;
//            if (distance > max)
//            {
//                max = distance;
//            }
//        }
//        j++;
//    }
//    return max;
//}
// int main()
//{
//        int arr[] = { 55,30,5,4,2 };
//        int arr1[] = {100,20,10,10,5};
//        maxDistance(arr,5,arr1,5);
//        return 0;
// }
#include<stdbool.h>
#include<math.h>
#include<float.h>
//bool is_sqrt(int n)
//{
//	int key = (int)sqrt(n);
//	if (fabs(sqrt(n) - key) < DBL_EPSILON)
//		return true;
//	return false;
//}
//bool is_right(int n)
//{
//	if (!is_sqrt(n))
//		return false;
//	int tmp = n;
//	while (tmp)
//	{
//		char key = tmp % 10+'0';
//		if (key=='0'||key=='1'||key=='4'||key=='9')
//		{
//			tmp /= 10;
//		}
//		else
//			return false;
//	}
//	return true;
//
//}
//int main()
//{ 
//	/*int i = 0;
//	scanf("%d",&i);
//	printf("%d\n",is_sqrt(i));*/
//	int count = 0;
//	int i = 0;
//	int tail = 0;
//	while (count != 2020)
//	{
//		if (is_right(i))
//		{
//			count++;
//			tail = i;
//			//printf("%d\n", tail);
//		}
//		
//		i++;
//	}
//	printf("%d %d\n",count,tail);
//	return 0;
//}
//int main()
//{
//	int count = 0;
//	int i = 0;
//	while ()
//	{
//	}
//	return 0;
//}
//int min(int a, int b)
//{
//    if (a > b)
//        return b;
//    return a;
//}
//int maxArea(int* height, int heightSize) {
//    int i = 0;
//    int j = heightSize - 1;
//    int max = 0;
//    int s = 0;
//    while (i < j)
//    {
//        s = (j - i) * min(height[i], height[j]);
//        printf("%d\n", s);
//        if (s > max)
//            max = s;
//        if (height[i] > height[j])
//            j--;
//        else
//            i++;
//    }
//    return max;
//}