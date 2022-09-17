#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<stdlib.h>
//int main() {
//	FILE* pic_file, * word_file, * finnaly_file;
//	int i = 0;
//	pic_file=fopen( "j1.txt", "r");
//	if (!pic_file)
//		return 0;
//	word_file=fopen( "j2.txt", "r");
//	if (!word_file)
//		return 0;
//	finnaly_file=fopen( "j3.txt", "w");
//	if (!finnaly_file)
//		return 0;
//	char ch;
//	while ((ch = fgetc(pic_file))!=EOF) {
//		fwrite(&ch, sizeof(char), 1, finnaly_file);
//	}
//	int a = -2;
//	while (EOF!= (ch = fgetc(word_file))) {
//		fwrite(&ch,sizeof(char),1,finnaly_file);
//	}
//	fclose(pic_file);
//	fclose(word_file);
//	fclose(finnaly_file);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	float a, b, c;
//	a = 2.5f;
//	b = 3.6f;
//	c = a * b;
//	printf("%f",c);
//	return 0;
//}
//typedef struct Person
//{
//	char name[20];
//	char sex[5];
//	int age;
//}Person;
//
//int main()
//{
//	Person p1 = { .age = 19,.name = "张三",.sex = "man" };
//	printf("%s\n", p1.name);
//	printf("%s\n", p1.sex);
//	printf("%d\n",p1.age);
//	return 0;
//}
//struct 
//{
//	char name[20];
//	char sex[5];
//	char id[20];
//	int age;
//}str1 = { "张三","man","110112119112",10 };
//{
//	struct str2= { "李四","man","110112119112",10 };//不能像这样写，编译器会报错
//	printf("%s\n", str2.name);
//	printf("%s\n", str2.sex);
//	printf("%s\n", str2.id);
//	printf("%d\n",str2.age);
//	return 0;
//}

//int main()
//{
//	/*struct Person p1 = { .age = 19,.name = "张三",.sex = "man" }; 
//	struct Person* pp1 = &p1;
//
//	printf("%s\n", pp1->name);
//	printf("%s\n", pp1->sex);
//	printf("%d\n", pp1->age);*/
//
//	return 0;
//}
//struct Message
//{
//	int age;
//	float weight;
//};
//struct Person
//{
//	char name[20];
//	struct Person *p1;
//};
//int main()
//{
//
//	/*int a = 0;
//	scanf("%d",&a);
//	printf("hello,%d!\n",a);*/
//	return 0;
//}
////struct Person
////{
////	char a;
////	char b;
////	int c;
////};
////#pragma pack(4)
////struct S3
////{
////	double d;
////	char c;
////	int i;
////};
////#pragma pack()
////#include<stddef.h>
////int main()
////{
////	struct S3 p;
////	printf("成员d的偏移量:%d\n", offsetof(struct S3, d));
////	printf("成员c的偏移量:%d\n", offsetof(struct S3, c));
////	printf("成员i的偏移量:%d\n",offsetof(struct S3,i));
////
////	return 0;
////}
//void my_strcat(char* dest, const char* sour, int* i)
//{
//    while (*sour)
//    {
//        dest[*i] = *sour;
//        (*i)++;
//        sour++;
//    }
//}
//char* replaceSpace(char* s) {
//    // write code here
//    int i = 0;
//    const char* p = "%20";
//    while (s[i] != '\0')
//    {
//        if (s[i] == ' ')
//            my_strcat(s + i, p, &i);
//        else
//            i++;
//    }
//    return s;
//}
//char* replaceSpace(char* s) {
//    char* t = s;
//    int cnt = 0;
//    while (*t)
//    {
//        if (*t == ' ')
//            cnt += 3;
//        ++t;
//    }
//    t = (char*)malloc(strlen(s) + cnt + 1);
//    char* res = t;
//    while (*s)
//    {
//        if (*s == ' ')
//        {
//            *t++ = '%';
//            *t++ = '2';
//            *t++ = '0';
//            s++;
//        }
//        else
//        {
//            *t++ = *s++;
//        }
//    }
//    *t = '\0';
// free(t);
//    return res;
//}
//int main()
//{
//    char arr[] = "aedb da d eaabbbee dee debd bcae ecaeaeeb bebd e c  bceba c eb  ddc bbc b e c ccea bbceaddbeddddbaab aeadeecced bcae caabdbeb acce  be aeeacdeecc adaa aa ceaa a baaed cccdbddcb edec acc eb dd b bacbadeddc cdaebcdeed baaa aedbcdcd dd eeeaacbb e dbedeab  edbeaae ba edcb aeadb dccbdeebcca bddaac a ead  dcc ac daddb aabea eabe bddcc ebdca cdcbee  bae d  eeecdab  be c  a cc eb ecaeb d aeda dbacdcdaecdacdaeeba bdbaaaaaadbdaacbeca cdebebd de ee ebcdbce ccec ceaed abcd adcbadcdc caddcbdde aaccadbcebbcaecca  aaedddcb c dedcd becbbadddecdebc  ccebabac bebadedccd ebcac  e baebdba acc ccae ceedeabc cbbaa  ecd a cab acd ebc aeb d abad c b  c adeb  abcbeeea  edccbd  aebbda ccac  bccabccace  adeccbebca bdc a eeadceda  aed dee   b dbdcbdbabbaebcebbb deaad  ddbe   bdaebaceeb ddeadccac bbcdacadacdbbbb b cedadeb acdaaada acd acb  a aabedececbacba daea ecb caca caeeddddbcdcdc cc beccbbead cbcdacbedacdbcdcaedce  e aececbc a becaadbaeeaeeddc  cb  e  dd debdcbbaada dee ccaec";
//    char*ret=replaceSpace(arr);
//    printf(ret);
//    return 0;
//}
//int count(struct ListNode* head)
//{
//    int ret = 0;
//    while (head != NULL)
//    {
//        head = head->next;
//        ret++;
//    }
//    return ret;
//}
//int* printListFromTailToHead(struct ListNode* listNode, int* returnSize) {
//    // write code here
//    if (!listNode)
//        return NULL;
//    int len = count(listNode);
//    *returnSize = len;
//    int* tmp = (int*)malloc(sizeof(int) * len);
//    for (int i = len - 1; i >= 0; i--)
//    {
//        tmp[i] = listNode->val;
//        listNode = listNode->next;
//    }
//    return tmp;
//}
//void reverse(char* dest, char* sour)
//{
//    while (dest <= sour)
//    {
//        char tmp = *dest;
//        *dest = *sour;
//        *sour = tmp;
//        dest++;
//        sour--;
//    }
//}
//char* LeftRotateString(char* str, int n) {
//    // write code here
//    if (!str)
//        return str;
//    int len = strlen(str);
//    if (!len)
//        return str;
//    n = n % len;
//    reverse(str, str + n - 1);
//    reverse(str + n, str + len - 1);
//    reverse(str, str + len - 1);
//    return str;
//
//}
//int NumberOf1(int n) {
//    // write code here
//    int i = 0;
//    int count = 0;
//    int num = sizeof(int)*8;
//    while (i < num)
//    {
//        int x = 1 << (num - 1 - i);
//        if ((x & n))
//            count++;
//        i++;
//    }
//    return count;
//}
//int main()
//{
//    NumberOf1(INT_MAX);
//    return 0;
//}
//struct ListNode* deleteNode(struct ListNode* head, int val) {
//    // write code here
//    if (!head)
//        return NULL;
//    struct ListNode* dummyhead = (struct ListNode*)malloc(sizeof(struct ListNode));
//    dummyhead->next = head;
//    struct ListNode* cur = dummyhead;
//    while (cur->next && cur->next->val != val)
//        cur = cur->next;
//    struct ListNode* end = cur->next->next;
//    cur->next = end;
//    return dummyhead->next;
//}
//struct ListNode
//{
//    struct ListNode* next;
//    int val;
//};
//int count(struct ListNode* p)
//{
//    int count = 0;
//    while (p)
//    {       p = p->next;
//    count++;
//}
//    return count;
//}
//struct ListNode* FindKthToTail(struct ListNode* pHead, int k) {
//    // write code here
//    if (!pHead)
//        return pHead;
//    struct ListNode* slow = pHead;
//    struct ListNode* fast = pHead;
//    int ret = count(pHead);
//    if (k > ret || !k)
//        return NULL;
//    printf("%d\n", slow->val);
//    while (k--)
//        fast = fast->next;
//
//    while (fast)
//    {
//        slow = slow->next;
//        fast = fast->next;
//    }
//    printf("%d\n", slow->val);
//    return slow;
//
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
//    c.next = &d;
//    d.val = 4;
//    d.next = &e;
//    e.next = NULL;
//    e.val = 5;
//    FindKthToTail(&a,5);
//    return 0;
//}