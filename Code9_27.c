#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<stdlib.h>
//int cmp(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//int main()
//{
//	int arr[] = {9,8,8,7,7,6,6,5,5,4,4,3,3,2,1};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr,len,sizeof(int),cmp);
//	int i = 0;
//	for ( i = 0; i < len - 1; i++)
//	{
//		if ((arr[i] != arr[i + 1]))
//			printf("%d ",arr[i]);
//	}
//		printf("%d\n",arr[i]);
//	return 0;
//}
//int func(int n)
//{
//    if (n<10)
//        return n % 2;
//    int c = func(n / 10);
//    return c * 10 + n % 10%2;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = 0;
//    ret = func(n);
//    printf("%d\n", ret);
//    return 0;
//}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	printf("请输入开始时间:");
//	scanf("%d%d%d",&year,&month,&day);
//	int count = 0;
//	int endYear = 2022;
//	int endMonth = 9;
//	int endDay = 20;
//	printf("请输入结束时间:");
//	scanf("%d%d%d", &endYear, &endMonth, &endDay);
//	int Month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int daymax = 0;
//	while (1)
//	{
//		if (year == endYear && month == endMonth && day == endDay)
//			break;
//		daymax = Month[month];
//		if (month == 2 && (year % 4 == 0 && year % 100 != 0 || year % 400 == 0))
//			daymax = 29;
//		if (day <= daymax)
//		{
//			count++;
//			day++;
//	         }
//		else
//		{
//			day = 1;
//			month++;
//			if (month >= 13)
//			{		year++;
//			      month = 1;
//		    }
//		}
//	}
//	printf("%d\n",count);
//	return 0;
//}
//int singleNonDuplicate(int* nums, int numsSize) {
//	int x = 0;
//	for (int i = 0; i < numsSize; i++)
//		x ^= nums[i];
//	return x;
//}
//struct ListNode
//{
//    int val;
//    struct ListNode* next;
//};
//struct ListNode* partition(struct ListNode* head, int x) {
//    struct ListNode* dummyhead = (struct ListNode*)malloc(sizeof(struct ListNode));
//    dummyhead->next = head;
//    struct ListNode* newdummyheadhead = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* newtail = newdummyheadhead;
//    struct ListNode* prev = dummyhead;
//    struct ListNode* cur = head;
//    struct ListNode* next = head;
//    while (cur)
//    {
//        if (cur->val < x)
//        {
//            next = cur->next;
//            prev->next = next;
//            newtail->next = cur;
//            cur->next = NULL;
//            newtail = cur;
//            cur = next;
//        }
//        else
//        {
//            prev = prev->next;
//            cur = cur->next;
//            next = cur;
//        }
//    }
//    if (newtail != newdummyheadhead)//有元素才链接
//    {
//        next = dummyhead->next;
//        dummyhead->next = newdummyheadhead->next;
//        newtail->next = next;
//    }
//    head = dummyhead->next;
//    free(dummyhead);
//    free(newdummyheadhead);
//    return head;
//}
//
//int main()
//{
//    struct ListNode a;
//    struct ListNode b;
//    struct ListNode c;
//    struct ListNode d;
//    struct ListNode e;
//    struct ListNode f;
//    a.val=1;
//    b.val = 4;
//    c.val = 3;
//    d.val = 2;
//    e.val = 5;
//    f.val=2;
//    a.next = &b;
//    b.next = &c;
//    c.next = &d;
//    d.next = &e;
//    e.next = &f;
//    f.next = NULL;
//    partition(&a,3);
//    return 0;
//}
//void merge(struct ListNode** lists, int left, int right, int* len)
//{
//    struct ListNode tmp = { 0 };
//    struct ListNode* dummyhead = &tmp;
//    struct ListNode* tail = dummyhead;
//    tail->next = NULL;
//    while (left < right)
//    {
//        struct ListNode* cur1 = lists[left];
//        struct ListNode* next1 = cur1;
//        struct ListNode* cur2 = lists[right];
//        struct ListNode* next2 = cur2;
//        while (cur1 && cur2)
//        {
//            if (cur1->val < cur2->val)
//            {
//                next1 = cur1->next;
//                cur1->next = NULL;
//                tail->next = cur1;
//                tail = cur1;
//                cur1 = next1;
//            }
//            else
//            {
//                next2 = cur2->next;
//                cur2->next = NULL;
//                tail->next = cur2;
//                tail = cur2;
//                cur2 = next2;
//            }
//        }
//        if (cur1)
//            tail->next = cur1;
//        if (cur2)
//            tail->next = cur2;
//        (*len)--;
//        lists[left] = dummyhead->next;
//        left++;
//        right--;
//        tail = dummyhead;
//        tail->next = NULL;
//
//    }
//}
//struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {
//    int len = listsSize;//有效数据个数
//    if (!len || !lists)
//        return NULL;
//    while (len != 1)
//    {
//        merge(lists, 0, len - 1, &len);
//    }
//    return lists[0];
//}