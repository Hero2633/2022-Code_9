#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<stdlib.h>
//int countNegatives(int** grid, int gridSize, int* gridColSize) {
//    int left = -1;
//    int right = *gridColSize;
//    int up = -1;
//    int down = gridSize;
//    int r = 0;
//    int c = *gridColSize - 1;
//    int count = 0;
//    while (r<down && r>up && c<right && c>left)
//    {
//        if (grid[r][c] < 0)
//        {
//            count += down - r;
//            c--;
//        }
//        else if (grid[r][c] >= 0)
//            r++;
//    }
//    return count;
//}
//bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int key) {
//    int left = 0;
//    int right = *matrixColSize;
//    int up = 0;
//    int down = matrixSize;
//    int r = 0;
//    int c = *matrixColSize - 1;
//    while (r >= up && r < down && c >= left && c < right)
//    {
//        if (matrix[r][c] > key)
//            c--;
//        else if (matrix[r][c] < key)
//            r++;
//        else
//            return true;
//
//    }
//    return false;
//}
//#define MOD (1000000007)
//void merge(int* nums, int* tmp, int left, int right, int* ret)
//{
//    if (left == right)
//        return;
//    int mid = 0;
//    mid = (right - left) / 2 + left;
//    merge(nums, tmp, left, mid, ret);
//    merge(nums, tmp, mid + 1, right, ret);
//    int L = left;
//    int R = mid + 1;
//    int i = 0;
//    while (L <= mid && R <= right)//排序
//    {
//        if (nums[L] > nums[R])
//        {
//            *ret += mid - L + 1;
//            tmp[i] = nums[R];
//            R++;
//        }
//        else
//        {
//            tmp[i] = nums[L];
//            L++;
//        }
//        i++;
//    }
//    while (R<=right)//左区间先走完
//    {
//        tmp[i++] = nums[R++];
//    }
//    while (L<=mid)//右区间先走完
//    {
//        tmp[i++] = nums[L++];
//    }
//    int k = 0;
//    for (int j = left; j <= right; j++)//拷贝
//    {
//        nums[j] = tmp[k++];
//    }
//}
//
//int InversePairs(int* data, int dataLen) {
//    // write code here
//    int count = 0;
//    int* tmp = (int*)malloc(sizeof(int) * dataLen);
//    merge(data, tmp, 0, dataLen - 1, &count);
//    free(tmp);
//    tmp = NULL;
//    return count%MOD;
//}
//int main()
//{
//    int arr[] = {1,2,3,4,5,6};
//    int ret=InversePairs(arr,sizeof(arr)/sizeof(int));
//    printf("%d\n",ret);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    while (n--)
//    {
//        puts("Happy new year!Good luck!");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int countA = 0;
//    int countB = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        if (i % 2)
//            countA++;
//        else
//            countB++;
//    }
//    printf("%d %d\n", countA, countB);
//    return 0;
//}
//#include<stdio.h>
//#include<stdbool.h>
//bool is_zhishu(int i)
//{
//    if (i <= 2)
//        return true;
//    for (int j = 2; j < i; j++)
//    {
//        if (i % j == 0)
//            return false;
//    }
//    return true;
//}
//int main()
//{
//    int max = 1000;
//    int count = 0;
//    for (int i = 100; i < max; i++)
//    {
//        if (is_zhishu(i))
//            count++;
//    }
//    printf("%d\n", count);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 1;
//    int count = 0;
//    for (int i = 100; i <= 999; i++)
//    {
//        n = 1;
//        for (int j = 2; j < i; j++)
//        {
//            if (i % j == 0)
//            {
//                n = 0;
//            }
//        }
//        if (n)
//        {
//            count++;
//        }
//    }
//    printf("%d ", count);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    for (int i = 1; i <= 9; i++)
//    {
//        for (int j = 1; j <= i; j++)
//            printf("%d * %d=%-2d ", j, i, i * j);
//        printf("\n");
//    }
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int sum = 0;
//    int flag = 1;
//    for (int i = 1; i <= n; i++)
//    {
//        sum += i * flag;
//        flag *= -1;
//    }
//    printf("%d\n", sum);
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    double sum = 0.0;
//    float flag = 1.0f;
//    int n = 0;
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++)
//    {
//        sum += 1 * flag / i;
//    }
//    printf("%.6lf\n", sum);
//
//
//    return 0;
//}