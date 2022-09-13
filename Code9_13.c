#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
//void sort(int* nums, int left, int right, int* tmp)
//{
//    if (left >= right)
//        return;
//    int mid = (right - left) / 2 + left;
//    sort(nums, left, mid, tmp);
//    sort(nums, mid + 1, right, tmp);
//    int l = left;
//    int r = mid + 1;
//    int i = 0;
//    while (l <= mid && r <= right)
//    {
//        if (nums[l] > nums[r])
//        {
//            tmp[i++] = nums[r];
//            r++;
//        }
//        else
//        {
//            tmp[i++] = nums[l];
//            l++;
//        }
//    }
//    while (r <= right)
//        tmp[i++] = nums[r++];
//    while (l <= mid)
//        tmp[i++] = nums[l++];
//    int k = left;
//    for (int j = 0; j < i; j++)
//        nums[k++] = tmp[j];
//}
//void merge(int* nums, int left, int right)
//{
//    int* p = (int*)malloc(sizeof(int) * (right + 1));
//    sort(nums, left, right, p);
//    free(p);
//}
//int search(int* nums, int left, int right, int key)
//{
//    int mid = (right - left) / 2 + left;
//    while (left <= right)
//    {
//        mid = (right - left) / 2 + left;
//        if (nums[mid] > key)
//            right = mid - 1;
//        else if (nums[mid] < key)
//            left = mid + 1;
//        else
//            return mid;
//    }
//    return -1;
//}
//bool checkIfExist(int* arr, int arrSize) {
//
//    merge(arr, 0, arrSize - 1);
//    int i = 0;
//    int max = arr[arrSize - 1];
//    while (i < arrSize)
//    {
//        if (i)
//        {
//            int tmp = arr[i];
//            arr[i] = arr[0];
//            arr[0] = tmp;
//        }
//        if (2 * arr[0] > max)
//            return false;
//        else
//        {
//            int ret = search(arr, 1, arrSize - 1, 2 * arr[0]);
//            if (ret != -1)
//                return true;
//        }
//        i++;
//    }
//    return false;
//}
//int main()
//{
//    int arr[] = {10,2,5,3};
//    int ret=checkIfExist(arr,4);
//    return 0;
//}
//#include<math.h>
//int main()
//{
//	long long a = 0;
//	//a = 100000 * 100000;
//	int c = 5;
//	printf("%d\n",(int)sqrt(5));
//	return 0;
//
//}
//
//int search(int left, int right, long long key)
//{
//    int mid = 0;
//    long long tmp = 0;
//    while (left <= right)
//    {
//        mid = (right - left) / 2 + left;
//        tmp = mid * mid;
//        if (tmp > key)
//            right = mid - 1;
//        else if (tmp < key)
//            left = mid + 1;
//        else
//            return mid;
//    }
//    return -1;
//}
//bool judgeSquareSum(int c) {
//    int i = 0;
//    long long a = 0;
//    int max = c;
//    c = (int)sqrt(c);
//    while (i <= c)
//    {
//        a = i * i;
//        if (a > max)
//            return false;
//        else {
//            long long b = max - a;
//            int ret = search(0, c, b);
//            if (ret != -1)
//                return true;
//        }
//        i++;
//    }
//    return false;
//}
//#include<math.h>
//int main()
//{
//	printf("%d\n", (int)sqrt(5));
//	printf("%d\n",(int)pow(5,0.5));
//
//	return 0;
//}
//#define weighting 1000
//int cmp(const void* p1, const void* p2)
//{
//    return *(int*)p1 - *(int*)p2;
//}
//void count(int* nums, int left, int right, int* tmp, const int* ret)
//{
//    if (left > right)
//        return;
//    int mid = 0;
//    mid = (right - left) / 2 + left;
//    if (nums[mid] == 1)
//    {
//        tmp[*ret] += mid -left+ 1;
//        count(nums, mid + 1, right, tmp, ret);
//    }
//    else if (nums[mid] == 0)
//    {
//        count(nums, left, mid - 1, tmp, ret);
//    }
//}
//void count_soldier(int** nums, int row, int col, int* tmp)
//{
//    int ret = 0;
//    for (int i = 0; i < row; i++)
//    {
//        ret = i;
//        count(nums[i], 0, col - 1, tmp, &ret);
//        tmp[ret] = tmp[ret] * weighting + ret;
//    }
//}
//int* kWeakestRows(int** mat, int matSize, int* matColSize, int k, int* returnSize) {
//    int* p = (int*)calloc(matSize, sizeof(int));
//    count_soldier(mat, matSize, *matColSize, p);
//    qsort(p, matSize, sizeof(int), cmp);
//    for (int i = 0; i < k; i++)
//    {
//        p[i] = p[i] % weighting;
//        (*returnSize)++;
//    }
//    return p;
//}
//int main()
//{
//    int arr1[] = {1,1,0,0,0};
//    int arr2[] = {1,1,1,1,0};
//    int arr3[] = {1,0,0,0,0};
//    int arr4[] = {1,1,0,0,0};
//    int arr5[] = {1,1,1,1,1};
//    int* arr[] = {arr1,arr2,arr3,arr4,arr5};
//    int col = 5;
//    int ret = 0;
//    int*p=kWeakestRows(arr,4+1,&col,5,&ret);
//    for (int i = 0; i < ret; i++)
//        printf("%d\n",p[i]);
//    return 0;
//}