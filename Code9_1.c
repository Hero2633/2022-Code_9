#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//	printf("Hello Septwmber!\n");
//	system("pause");
//	return 0;
//}
//int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
//    *returnSize = matrixSize * (*matrixColSize);
//    int* ret = (int*)malloc(sizeof(int) * (*returnSize));
//    int r = 0;
//    int c = 0;
//    int startR = 0;
//    int startC = 0;
//    int left = -1;
//    int right = *matrixColSize;
//    int up = -1;
//    int j = 0;
//    int down = matrixSize;
//    while (1)
//    {
//        r = startR;
//        c = startC;
//        if (!(r > up && r<down && c>left && c < right))
//            break;
//        for (c = startC; c < right; c++)//往右走
//        {
//            ret[j++] = matrix[r][c];
//        }
//        c--;
//        r++;
//        if (!(r > up && r<down && c>left && c < right))
//            break;
//        for (; r < down; r++)//往下走
//            ret[j++] = matrix[r][c];
//        r--;
//        c--;
//        if (!(r > up && r<down && c>left && c < right))
//            break;
//        for (; c > left; c--)//往左走
//            ret[j++] = matrix[r][c];
//        c++;
//        r--;
//        if (!(r > up && r<down && c>left && c < right))
//            break;
//        while (r != startR)//往上走
//        {
//            ret[j++] = matrix[r][c];
//            r--;
//            //c++;//bug出现点;
//        }
//        left++;
//        right--;
//        up++;
//        down--;
//        startC++;
//        startR++;
//
//    }
//    return ret;
//}
//int main()
//{//[[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]]
//    int arr1[] = { 1,2,3,4 };
//    int arr2[] = {5,6,7,8};
//    int arr3[] = { 9,10,11,12};
//    int arr4[] = {13,14,15,16};
//    int* arr[] = {arr1,arr2,arr3,arr4};
//    int col = 4;
//    int ret = 0;
//    int*Ret=spiralOrder(arr,4,&col,&ret);
//    for (int i = 0; i < 16; i++)
//        printf("%d ",Ret[i]);
//    return 0;
//}
//int** generateMatrix(int  n, int* returnSize, int** returnColumnSizes) {
//    *returnColumnSizes = malloc(sizeof(int) * n);
//    for (int i = 0; i < n; i++)
//        (*returnColumnSizes)[i] = n;
//    *returnSize = n;
//    int** ret = (int**)malloc(sizeof(int*) * n);
//    for (int i = 0; i < n; i++)
//    {
//        ret[i] = (int*)malloc(sizeof(int) * n);
//    }
//    int left = -1;
//    int right = n;
//    int up = -1;
//    int down = n;
//    int startR = 0;
//    int startC = 0;
//    int r = 0;
//    int c = 0;
//    for (int i = 1; i <= n * n;)
//    {
//        r = startR;
//        c = startC;
//        for (; c < right; c++)
//            ret[r][c] = i++;
//        if (i == n * n + 1)
//            break;
//        c--;
//        r++;
//        for (; r < down; r++)
//            ret[r][c] = i++;
//        if (i == n * n + 1)
//            break;
//        r--;
//        c--;
//        for (; c > left; c--)
//            ret[r][c] = i++;
//        c++;
//        r--;
//        if (i == n * n + 1)
//            break;
//        while (r != startR)
//        {
//            ret[r][c] = i++;
//            r--;
//        }
//        if (i == n * n + 1)
//            break;
//        left++;
//        right--;
//        up++;
//        down--;
//        startC++;
//        startR++;
//    }
//    return ret;
//}
//int main()
//{
//    int n = 3;
//    int ret = 0;
//    int* p = NULL;
//    int**tmp=generateMatrix(n,&ret,&p);
//    for (int i=0;i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            printf("%d ",tmp[i][j]);
//        }
//    }
//    return 0;
//}
//void Recursive_search(int** ret, int* r, int* c, int const Col, int* nums, int index)
//{
//    if (index >= Col)
//        return;
//    while (index < Col)
//    {
//        ret[*r][*c] = nums[index];
//        (*c)++;
//        if ((*c) >= Col)
//        {
//            *c = 0;
//            (*r)++;
//        }
//        index++;
//        Recursive_search(ret, r, c, Col, nums, index);
//        int tmp = nums[0];
//        nums[0] = nums[index];
//        nums[index] = tmp;
//    }
//}
//int** permute(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
//    int Size = 1;
//    for (int i = 1; i <= numsSize; i++)
//        Size *= i;
//    *returnSize = Size;
//    *returnColumnSizes = (int*)malloc(sizeof(int) * (*returnSize));
//    for (int i = 0; i < (*returnSize); i++)
//        (*returnColumnSizes)[i] = numsSize;
//    int** ret = (int**)malloc(sizeof(int*) * Size);
//    int r = 0;
//    int c = 0;
//    Recursive_search(ret, &r, &c, numsSize, nums, 0);
//
//    return ret;
//}