#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = -1;
//	printf("%d\n",s.b);
//	return 0;
//}
#include<stdlib.h>
//#define MAX_SIZE 2+3
//struct _Record_Struct
//{
//	unsigned char Env_Alarm_ID : 4;
//	unsigned char Para1 : 2;
//	unsigned char state;
//	unsigned char avail : 1;
//}*Env_Alarm_Record;
//int main()
//{
//	/*struct _Record_Struct* pointer = (struct _Record_Struct*)malloc
//	(sizeof(struct _Record_Struct) * MAX_SIZE);*/
//	printf("%d\n",sizeof(struct _Record_Struct));
//	return 0;
//}
//#include<string.h>
//int main()
//{
//    unsigned char puc[4];
//    struct tagPIM
//    {
//        unsigned char ucPim1;
//        unsigned char ucData0 : 1;
//        unsigned char ucData1 : 2;
//        unsigned char ucData2 : 3;
//    }*pstPimData;//2
//    pstPimData = (struct tagPIM*)puc;
//    memset(puc, 0, 4);
//    pstPimData->ucPim1 = 2;
//    pstPimData->ucData0 = 3;
//    pstPimData->ucData1 = 4;
//    pstPimData->ucData2 = 5;
//    printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);//02 29 00 00
//    return 0;
//}
//int search_min(int* nums, int left, int right, int key)
//{
//    int mid = 0;
//    int ans = -1;
//    mid = (right - left) / 2 + left;
//    while (left <= right)
//    {
//        mid = (right - left) / 2 + left;
//        if (nums[mid] <= key)
//        {
//            ans = mid;
//            left = mid + 1;
//        }
//        else
//            right = mid - 1;
//    }
//    return ans;
//}
//int cmp(const void* p1, const void* p2)
//{
//    return *(int*)p1 - *(int*)p2;
//}
//int* findClosestElements(int* arr, int arrSize, int k, int x, int* returnSize) {
//    int mid = search_min(arr, 0, arrSize, x);
//    *returnSize = k;
//    int* tmp = (int*)malloc(sizeof(int) * k);
//    int L = mid;
//    int R = mid + 1;
//    int i = 0;
//    while (L >= 0 && R <= arrSize - 1 && i < k)
//    {
//        if (abs(arr[L] - x) < abs(arr[R] - x))
//            tmp[i++] = arr[L--];
//        else if (abs(arr[R] - x) < abs(arr[L] - x))
//            tmp[i++] = arr[R++];
//        else
//            tmp[i++] = arr[L--];
//    }
//    if (i < k)
//    {
//        while (L >= 0 && i < k)
//            tmp[i++] = arr[L--];
//        while (R <= arrSize - 1 && i < k)
//            tmp[i++] = arr[R++];
//    }
//    qsort(tmp, k, 4, cmp);
//    return tmp;
//}