#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
//int searchInsert(int* nums, int numsSize, int target) {
//    int left = 0;
//    int right = numsSize - 1;
//    int mid = 0;
//    while (left <= right)
//    {
//        mid = (left + right) / 2;
//        if (nums[mid] > target)
//            right = mid - 1;
//        else if (nums[mid] < target)
//            left = mid + 1;
//        else
//            return mid;
//    }
//    return right + 1;
//}
//int peakIndexInMountainArray(int* nums, int len) {
//    int left = 0;
//    int right = len - 1;
//    int mid = 0;
//    while (left < right)
//    {
//        mid = (left + right) / 2;
//        if (nums[mid] > nums[mid + 1])
//            right = mid;
//        else
//            left = mid + 1;
//    }
//    return left;
//}
//int searchBin(int* nums, int left, int right, int key)
//{
//    int mid = 0;
//    while (left <= right)
//    {
//        mid = (left + right) / 2;
//        if (nums[mid] > key)
//            right = mid - 1;
//        else if (nums[mid] < key)
//            left = mid + 1;
//        else
//            return mid;
//    }
//    return -1;
//}
//void func(int* nums, int left, int right, int key, int* ret)
//{
//    if (left > right)
//        return;
//    int ret_val = -1;
//    ret_val = searchBin(nums, left, right, key);
//    if (ret_val ==-1)
//        return;
//    if (ret[1] < ret_val)
//        ret[1] = ret_val;
//    else if (ret_val < ret[0])
//        ret[0] = ret_val;
//    func(nums, left, ret_val - 1, key, ret);//×óÇø¼äÑ°ÕÒ
//    func(nums, ret_val + 1, right, key, ret);//×óÇø¼äÑ°ÕÒ
//}
//int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
//    *returnSize = 2;
//    static int ret[2];
//    ret[0] = -1;
//    ret[1] = -1;
//    int ret_val = searchBin(nums, 0, numsSize - 1, target);
//    if (ret_val == -1)
//        return ret;
//    ret[0] = ret_val;
//    ret[1] = ret_val;
//    func(nums, 0, ret_val - 1, target, ret);//×óÇø¼äÑ°ÕÒ
//    func(nums, ret_val + 1, numsSize - 1, target, ret);//×óÇø¼äÑ°ÕÒ
//    return ret;
//}
//int main(void)
//{
//    int arr[] = {5,7,7,8,8,10};
//    int ret = 0;
//    searchRange(arr,6,8,&ret);
//    return 0;
//}
//void Show()
//{
//    printf("¹þ¹þ¹þ\n");
//}
//int main()
//{
//    Show();
//    return 0;
//}
//void searchBin(int* nums, int left, int right, int key,int* ret)
//{
//    int mid = 0;
//    while (left <= right)
//    {
//        mid = (left + right) / 2;
//        if (nums[mid] > key)
//            right = mid - 1;
//        else if (nums[mid] < key)
//            left = mid + 1;
//        else
//            break;
//    }
//    if (left > right)
//        return;
//    else
//    {
//        if (ret[0] == -1 && -1 == ret[1])
//            ret[0] = ret[1] = mid;
//        else
//        {
//            if (mid < ret[0])
//                ret[0] = mid;
//            else if (mid > ret[1])
//                ret[1] = mid;
//        }
//        searchBin(nums, left, mid - 1, key, ret);
//        searchBin(nums, mid + 1, right, key, ret);
//    }
//}
//int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
//    static int ret[2];
//    ret[0] = ret[1] = -1;
//    *returnSize = 2;
//    searchBin(nums, 0, numsSize - 1, target, ret);
//    return ret;
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
//
//int searchBin(int* nums, int left, int right, int key)
//{
//    int mid = 0;
//    while (left <= right)
//    {
//        mid = (left + right) / 2;
//        if (nums[mid] > key)
//            right = mid - 1;
//        else if (nums[mid] < key)
//            left = mid + 1;
//        else
//            return mid;
//    }
//    return -1;
//}
//void func(int* nums, int left, int right, int key, int* p)
//{
//    if (left > right)
//        return;
//    int mid = 0;
//    mid = (left + right) / 2;
//    int ret_val = -1;
//    if (nums[mid] > nums[right])
//    {
//        ret_val = searchBin(nums, left, mid, key);
//        if (ret_val != -1)
//        {
//            *p = ret_val;
//            return;
//        }
//        func(nums, mid + 1, right, key, p);
//    }
//    else if (nums[mid] < nums[right])
//    {
//        ret_val = searchBin(nums, mid, right, key);
//        if (ret_val != -1)
//        {
//            *p = ret_val;
//            return;
//        }
//        func(nums, left, mid - 1, key, p);
//    }
//    else
//    {
//        if (nums[mid] == key)
//        {
//            *p = mid;
//            return;
//        }
//        right--;
//        func(nums, left, right, key, p);
//    }
//}
//bool search(int* nums, int numsSize, int target) {
//    int ret = -1;
//    func(nums, 0, numsSize - 1, target, &ret);
//    if (ret != -1)
//        return true;
//    return false;
//}
//int findMin(int* nums, int numsSize) {
//    int mid = 0;
//    int left = 0;
//    int right = numsSize - 1;
//    while (left < right)
//    {
//        mid = (left + right) / 2;
//        if (nums[mid] > nums[right])
//            left = mid + 1;
//        else if (nums[mid] < nums[right])
//        {
//            right = mid;
//        }
//        else
//            right--;
//    }
//    return nums[left];
//}