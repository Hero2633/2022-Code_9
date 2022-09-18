#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 1;
//	scanf("%d%d",&a,&b);
//	while (a%b)
//	{
//		c = b;
//		b = a % b;
//		a = c;
//	}
//	printf("%d\n",b);
//	return 0;
//}
//int cmp(const void* p1, const void* p2)
//{
//    return *(int*)p1 - *(int*)p2;
//}
//void search(int* nums, int left, int right, int key, int* ret)
//{
//    if (left > right)
//        return;
//    int mid = 0;
//    mid = (right - left) / 2 + left;
//    if (nums[mid] < key)
//    {
//        *ret += mid - left + 1;
//        search(nums, mid + 1, right, key, ret);
//    }
//    else
//    {
//        search(nums, left, mid - 1, key, ret);
//    }
//
//}
//int triangleNumber(int* nums, int numsSize) {
//    qsort(nums, numsSize, sizeof(int), cmp);
//    int i = 0;
//    int j = 1;
//    int count = 0;
//    for (i = 0; i < numsSize - 1; i++)
//    {
//        if (!nums[i])
//            continue;
//        for (j = i + 1; j < numsSize; j++)
//        {
//            search(nums, j + 1, numsSize - 1, nums[i] + nums[j], &count);
//        }
//    }
//    return count;
//
//}
#include<stdlib.h>
 struct ListNode {
    int val;
    struct ListNode* next;
    
};

//int count(struct ListNode* head)
//{
//    int ret = 0;
//    while (head)
//    {
//        head = head->next;
//        ret++;
//    }
//    return ret;
//}
//
//void reorderList(struct ListNode* head) {
//    if (!head)
//        return;
//    int len = count(head);//N
//    int i = 0;
//    struct ListNode* next = NULL;
//    struct  ListNode** phead = (struct ListNode**)malloc(sizeof(struct ListNode*) * len);
//    for (i = 0; i < len; i++)//N
//    {
//        phead[i] = head;
//        next = head->next;
//        head->next = NULL;
//        head = next;
//    }
//    int left = 1;
//    int right = len - 1;
//    head = phead[0];
//    struct ListNode* cur = head;
//    while (left <= right)//N
//    {
//        if (left <= right)
//        {
//            //ÓÒ
//            cur->next = phead[right];
//            right--;
//            cur = cur->next;
//        }
//        if (left <= right)
//        {
//            //×ó
//            cur->next = phead[left];
//            left++;
//            cur = cur->next;
//        }
//    }
//    free(phead);
//}
// int count(struct ListNode* head)
// {
//     int ret = 0;
//     while (head)
//     {
//         head = head->next;
//         ret++;
//     }
//     return ret;
// }
//
// int cmp(const void* p1, const void* p2)
// {
//     struct ListNode** s1 = (struct ListNode**)p1;
//     struct ListNode** s2 = (struct ListNode**)p2;
//     return (*s1)->val - (*s2)->val;
// }
// struct ListNode* sortList(struct ListNode* head) {
//     if (!head)
//         return head;
//     int i = 0;
//     int len = count(head);//n
//     struct ListNode* next = NULL;
//     struct ListNode* tmpHead = head;
//     struct  ListNode** phead = (struct ListNode**)malloc(sizeof(struct ListNode*) * len);
//     for (i = 0; i < len; i++)//N
//     {
//         phead[i] = head;
//         next = head->next;
//         head->next = NULL;
//         head = next;
//     }
//     qsort(phead, len, sizeof(struct ListNode*), cmp);//nlogn
//     struct ListNode* cur = head = phead[0];
//     for (int j = 1; j < len; j++)//n
//     {
//         cur->next = phead[j];
//         cur = cur->next;
//     }
//     free(phead);
//     return head;
// }
//int main()
//{
//    struct ListNode a;
//    struct ListNode b;
//    struct ListNode c;
//    struct ListNode d;
//    a.val = 4;
//    b.val = 2;
//    c.val = 1;
//    d.val = 3;
//    a.next = &b;
//    b.next = &c;
//    c.next = &d;
//    d.next = NULL;
//    sortList(&a);
//    return 0;
//}
//#include<string.h>
//void Roman_conversion(char* nums, int num)
//{
//    if (!num)
//        return;
//    if (num >= 1 && num < 5)
//    {
//        if (num >= 4)
//        {
//            strcat(nums, "IV");
//            Roman_conversion(nums, num - 4);
//        }
//        else
//        {
//            strcat(nums, "I");
//            Roman_conversion(nums, num - 1);
//        }
//      
//    }
//    else if (num >= 5 && num < 10)
//    {
//        if (num >= 9)
//        {
//            strcat(nums, "IX");
//            Roman_conversion(nums, num - 9);
//        }
//        else
//        {
//            strcat(nums, "V");
//            Roman_conversion(nums, num - 5);
//        }
//        
//    }
//    else if (num >= 10 && num < 50)
//    {
//        if (num >= 40)
//        {
//            strcat(nums, "XL");
//            Roman_conversion(nums, num - 40);
//        }
//        else
//        {
//            strcat(nums, "X");
//            Roman_conversion(nums, num - 10);
//        }
//        
//    }
//    else if (num >= 50 && num < 100)
//    {
//        if (num >= 90)
//        {
//            strcat(nums, "XC");
//            Roman_conversion(nums, num - 90);
//        }
//        else
//        {
//            strcat(nums, "L");
//            Roman_conversion(nums, num - 50);
//        }
//        
//    }
//    else if (num >= 100 && num < 500)
//    {
//        if (num>= 400)
//        {
//            strcat(nums, "CD");
//            Roman_conversion(nums, num - 400);
//        }
//        else
//        {
//            strcat(nums, "C");
//            Roman_conversion(nums, num - 100);
//        }
//        
//    }
//    else if (num >= 500 && num < 1000)
//    {
//        if (num >= 900)
//        {
//            strcat(nums, "CM");
//            Roman_conversion(nums, num - 900);
//        }
//        else
//        {
//            strcat(nums, "D");
//            Roman_conversion(nums, num - 500);
//        }
//        
//    }
//    else
//    {
//        strcat(nums, "M");
//        Roman_conversion(nums, num - 1000);
//    }
//}
//char* intToRoman(int num) {
//    char* Roman_numer = (char*)calloc(100, 1);
//    Roman_conversion(Roman_numer, num);
//    return Roman_numer;
//}
//int main()
//{
//    int a = 0;
//    scanf("%d",&a);
//    char* ret = intToRoman(a);
//    printf(ret);
//    free(ret);
//    return 0;
//}