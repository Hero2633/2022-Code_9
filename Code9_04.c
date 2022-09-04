#define  _CRT_SECURE_NO_WARNINGS 0
#include <stdio.h>

//int Count(int i)
//{
//    int count = 0;
//    int left;
//    int right;
//    for (int j = 1;j<=i; j++)
//    {
//        if (i % j == 0)
//        {
//            left = j;
//            right = i / j;
//            if (left == right)
//            {
//                count++;
//            }
//            else if (left < right)
//                count += 2;
//            else
//            {
//                break;
//            }
//        }
//    }
//    return count;
//}
//int solution(int m) {
//    int result;
//
//    // TODO: 请在此编写代码
//    int left = 1;
//    int right = 0;
//    int count = 0;
//    int i = 1;
//    m = 1;
//    while (1)
//    {
//        count = 0;
//        count = Count(i);
//        if (count == m)
//        {
//            result = i;
//            printf("%d\n",i);
//            m++;
//            i = 0;
//        }
//        i++;
//
//    }
//    return result;
//}


//int main() {
//
//    int m;
//    scanf("%d", &m);
//
//    int result = Count(m);
//
//   printf("%d", result);
//
//    return 0;
//}
//#include <stdio.h>
//void fun(int m, int* ret)
//{
//    if (m == 1)
//    {
//        (*ret)++;
//        return;
//    }
//    for (int i = m - 1; i >= 1; i--)
//    {
//        if (m % i == 0)
//        {
//            (*ret)++;
//            m = i;
//            break;
//        }
//    }
//    fun(m, ret);
//}
//
//int solution(int m) {
//    int result;
//    result = 0;
//    fun(m, &result);
//    // TODO: 请在此编写代码
//
//    return result;
//}
//
//
//int main() {
//
//    int m;
//    scanf("%d", &m);
//
//    int result = solution(m);
//
//    printf("%d", result);
//
//    return 0;
//}
//int mySqrt(int x) {
//
//    int left = 1;
//    int right = x;
//    int mid = 0;
//    int ans = 0;
//    while (right >= left)
//    {
//        //printf("%d ",mid);
//        mid = (right - left) / 2 + left;
//        if (mid == (x / mid))
//            return mid;
//        else if (mid > (x / mid))
//            right = mid - 1;
//        else
//        {
//            ans = mid;
//            left = mid + 1;
//        }
//    }
//    return ans;
////}
//int findPeakElement(int* nums, int numsSize) {
//    int left = 0;
//    int right = numsSize - 1;
//    while (left < right)
//    {
//        int mid = (left + right) / 2;
//        if (nums[mid] < nums[mid + 1])
//            left = mid + 1;
//        else
//            right = mid;
//    }
//    return left;
//}

//int searchMin(int* nums, int left, int right)
//{
//    while (left < right)
//    {
//        int mid = (left + right) / 2;
//        if (nums[mid] < nums[right])
//            right = mid;
//        else
//            left = mid + 1;
//    }
//    return left;
//}
//int func(int* nums, int left, int right, int key)
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
//
//}
//int search(int* nums, int numsSize, int target) {
//    int left = 0;
//    int right = numsSize - 1;
//    int minIndex = searchMin(nums, left, right);
//    printf("%d\n", minIndex);
//    int a = -2;
//    int b = -2;
//    a = func(nums, minIndex, right, target);
//    b = func(nums, left, minIndex - 1, target);
//    if (a == -1 && b != -1)
//        return b;
//    else if (a != -1 && b == -1)
//        return a;
//    return -1;
//}

//int find(int* nums,int begin, int end, int key)
//{
//    while (begin <= end)
//    {
//        int m = (begin + end) / 2;
//        if (nums[m] > key)
//            end = m - 1;
//        else  if (nums[m] < key)
//            begin = m + 1;
//        else
//        {
//            return m;
//        }
//    }
//    return -1;
//}
//void func(int* nums, int left, int right, int* index, int key)
//{
//    if (left > right)
//        return;
//    int mid = (left + right) / 2;
//    if (nums[mid] > nums[right])
//    {
//        int ret = find(nums, left, mid, key);
//        if (ret != -1)
//        {
//            *index = ret;
//            return;
//        }
//        func(nums, mid + 1, right, index, key);
//    }
//    else
//    {
//        int ret = find(nums, mid, right, key);
//        if (ret != -1)
//        {
//            *index = ret;
//            return;
//        }
//        func(nums, left, mid - 1, index, key);
//    }
//}
//int search(int* nums, int numsSize, int target) {
//    int left = 0;
//    int right = numsSize - 1;
//    int index = -1;
//    func(nums, left, right, &index, target);
//    return index;
//}