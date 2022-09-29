#define  _CRT_SECURE_NO_WARNINGS 0

//void reverse_(char* nums, int left, int right)
//{
//    while (left < right)
//    {
//        char tmp = nums[left];
//        nums[left] = nums[right];
//        nums[right] = tmp;
//        left++;
//        right--;
//    }
//}
//bool isFlipedString(char* s1, char* s2) {
//    int len1 = strlen(s1);
//    int len2 = strlen(s2);
//    if (len1 != len1)
//        return false;
//    if (!len1)
//        return true;
//    for (int i = 0; i < len1; i++)
//    {
//        reverse_(s1, 0, 0);
//        reverse_(s1, 1, len1 - 1);
//        reverse_(s1, 0, len1 - 1);
//        if (strcmp(s1, s2) == 0)
//            return true;
//    }
//    return false;
//
//}
//#include<limits.h>
//int* singleNumber(int* nums, int numsSize, int* returnSize) {
//    int x = 0;
//    for (int i = 0; i < numsSize; i++)
//        x ^= nums[i];
//    int count = 0;
//    while ((x & (1 << count)) == 0)
//    {
//        count++;
//    }
//    int x1 = 0;
//    int x2 = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (nums[i] & (1 << count))
//            x1 ^= nums[i];
//        else
//            x2 ^= nums[i];
//    }
//    int* ret = (int*)malloc(sizeof(int) * 2);
//    *returnSize = 2;
//    ret[0] = x1;
//    ret[1] = x2;
//    return ret;
//}
//int main()
//{
//    int arr[] = {1,1,0,INT_MIN};
//    int ret = 0;
//    singleNumber(arr,4,&ret);
//    return 0;
//}
//int findRepeatNumber(int* nums, int numsSize) {
//    int i = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (nums[abs(nums[i])] >= 0)
//            nums[abs(nums[i])] *= -1;
//        else
//            break;
//    }
//    return abs(nums[i]);
//}
//int main()
//{
//    int arr[] = {3,4,2,1,1,0};
//    findRepeatNumber(arr,6);
//    return 0;
//}


//int findRepeatNumber(int* nums, int numsSize) {
//    int* tmp = (int*)calloc(numsSize, sizeof(int));
//    memset(tmp, -1, sizeof(int) * numsSize);
//    int i = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        if (tmp[nums[i]] == -1)
//            tmp[nums[i]] = nums[i];
//        else
//            break;
//    }
//    free(tmp);
//    return nums[i];
//}
