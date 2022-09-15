#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

  //Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode* next;
};



//struct ListNode* rotateRight(struct ListNode* head, int k) {
//    if (!head || head->next == NULL)
//        return head;
//    struct ListNode* dummyhead = (struct ListNode*)malloc(sizeof(struct ListNode));
//    dummyhead->next = head;
//    struct ListNode* endPrev = dummyhead;
//    struct ListNode* end = dummyhead->next->next;
//    dummyhead->next = head;
//    while (k--)
//    {
//         endPrev = dummyhead;
//         end = dummyhead->next->next;
//        while (end != NULL)//找倒数第二个节点
//        {
//            endPrev = endPrev->next;
//            end = end->next;
//
//        }
//        struct ListNode* tail = endPrev->next;
//        tail->next = head;
//        // printf("%p\n",tail);
//        endPrev->next = NULL;
//        head = tail;
//        dummyhead->next = head;
//    }
// 
//    return dummyhead->next;
//}
//int main()
//{
//    struct ListNode a;
//    struct ListNode b;
//    struct ListNode c;
//    struct ListNode d;
//    struct ListNode e;
//    a.val = 1;
//    a.next = &b;
//    b.val = 2;
//    b.next = &c;
//    c.val = 3;
//    c.next = NULL;
//    d.val = 4;
//    d.next = &e;
//    e.val = 5;
//    e.next = NULL;
//    rotateRight(&a, 2000000000);
//    return 0;
//}
//int count(struct ListNode* p)
//{
//    struct ListNode* cur = p;
//    int count = 0;
//    while (cur != NULL)
//    {
//        count++;
//        cur = cur->next;
//    }
//    return count;
//}
//struct ListNode* rotateRight(struct ListNode* head, int k) {
//    if (!head || head->next == NULL || !k)
//        return head;
//    struct ListNode* dummyhead = (struct ListNode*)malloc(sizeof(struct ListNode));
//    dummyhead->next = head;
//    struct ListNode* endPrev = head;
//    struct ListNode* end = head;
//    int ret = count(head);
//    k = k % ret;
//    if (!k)
//        return head;
//    k = k + 1;
//    int tmp = k;
//    while (tmp--)//快指针
//    {
//        end = end->next;
//    }
//    while (end != NULL)//断开链表
//    {
//        end = end->next;
//        endPrev = endPrev->next;
//    }
//    struct ListNode* phead = endPrev->next;
//    endPrev->next = NULL;
//    dummyhead->next = phead;
//    while (phead->next != NULL)//链接链表
//    {
//        phead = phead->next;
//    }
//    phead->next = head;
//    return dummyhead->next;
//}
#include<assert.h>
//int is_left(char* arr1, char* arr2)
//{
//    assert(arr1&&arr2);
//    int len1 = strlen(arr1);
//    int len2 = strlen(arr2);
//    if (len1 != len2)
//        return 0;
//    strncat(arr1,arr1,len1);
//    char* ret = strstr(arr1,arr2);
//    if (ret)
//        return 1;
//    return 0;
//
//}
//int main()
//{
//    char arr1[20] = "ABCDEF";
//    char arr2[] = "CDEdAB";
//    int ret=is_left(arr1,arr2);
//    if (ret)
//        printf("YES\n");
//    else
//        printf("NO\n");
//
//    return 0;
//}
//int func(int n)
//{
//    if (n >= 0 && n <= 9)
//    {
//        if (n % 2)
//            return 1;
//        else
//            return 0;
//    }
//    int c=func(n/10);
//    if (n % 10 % 2)
//       return  c = c * 10 + 1;
//    return  c = c * 10 + 0;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d",&n);
//    int ret = 0;
//   ret=func(n);
//    printf("%d\n",ret);
//    return 0;
//}
//void Quick_sort(int* arr, int left,int right)
//{
//    if (left >= right)
//        return;
//    int pit = left;
//    int key = arr[pit];
//    int begin = left;
//    int end = right;
//    while (begin < end)
//    {
//        while(begin < end&&arr[end] < key)
//            end--;
//        if (begin >= end)
//            break;
//        arr[pit] = arr[end];
//        pit = end;
//        while (begin < end && arr[begin] >= key)
//            begin++;
//        if (begin >= end)
//            break;
//        arr[pit] = arr[begin];
//        pit = begin;
//    }
//    arr[end] = key;
//    Quick_sort(arr, left, end - 1);
//    Quick_sort(arr,end+1,right);
//}
//int main()
//{
//
//    int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//    int len = sizeof(arr) / sizeof(arr[0]);
//    Quick_sort(arr,0,len-1);
//    for (int i = 0; i < len; i++)
//        printf("%d ",arr[i]);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        while (n--)
//        {
//            for (int i = 0; i < n; i++)
//                printf(" ");
//            printf("*\n");
//        }
//    }
//    return 0;
//}
//int removeDuplicates(int* nums, int numsSize) {
//    int cur = 0;
//    int r = 0;
//    int count = 0;
//    int key = 0;
//    while (r < numsSize)
//    {
//        key = nums[r];
//        while (r < numsSize && key == nums[r])
//        {
//            count++;
//            r++;
//        }
//        count = ((count <= 2) ? count : 2);
//        while (count--)
//            nums[cur++] = key;
//        count = 0;
//    }
//    return cur;
//}