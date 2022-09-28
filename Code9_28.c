#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<stdlib.h>
//typedef struct st_type//一种柔性数组的表示方式
//{
//	int i;
//	int a[0];
//	//柔性数组成员
//}type_t;
//int main()
//{
//	//printf("%zu\n",sizeof(type_t));
//	type_t* ps = (type_t*)malloc(sizeof(type_t) + sizeof(int) * 1);
//	if (!ps)
//		return 1;
//	ps->i = 10;
//	ps->a[0] = 11;
//	//printf("%d %d",ps->i,ps->a[0]);
//	type_t* tmp = (type_t*)realloc(ps, sizeof(type_t) + sizeof(int) * 10);
//	if (!tmp)
//		return 1;
//	ps = tmp;
//	ps->i = 10;
//	printf("%d\n",ps->i);
//	for (int j = 0; j < 10; j++)
//		ps->a[j] = j;
//	for (int j = 0; j < 10; j++)
//		printf("%d ",ps->a[j]);
//	return 0;
//}
//struct S
//{
//	int i;
//	int* a;//用来控制动态开辟的数组
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	if (!ps)
//		return 1;
//	int* tmp = (int*)malloc(sizeof(int) * 10);//开辟数组空间
//	if (!tmp)
//		return 1;
//	ps->a = tmp;
//	ps->i = 10;
//	for (int j = 0; j < 10; j++)
//		ps->a[j] = j;
//	printf("%d\n",ps->i);
//	for (int j = 0; j < 10; j++)
//		printf("%d ", ps->a[j]);
//	free(ps->a);
//	ps->a = NULL;
//	free(ps);//注意两个free顺序不能改变，如果先先释放ps很有可能找不到动态开辟的数组了，容易造成内存泄漏
//	ps = NULL;
//	return 0;
//}
//int main()
//{
//	int grades = 0;
//	double n = 0;
//	scanf("%lf",&n);
//	int pass = 0;
//	int outstanding = 0;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d",&grades);
//		if (grades >= 60)
//			pass++;
//		if (grades >= 85)
//			outstanding++;
//	}
//	char ch[10] = { 0 };
//	sprintf(ch,"%.0f",pass/n*100);
//	printf("%s%%\n",ch);
//	sprintf(ch,"%.0f",outstanding/n*100);
//	printf("%s%%\n", ch);
//	return 0;
//}
//int main()
//{
//	/*char arr[10] = {"3%%"};
//	printf(arr);
//	printf("%s",arr);*/
//	//printf("%s","aa");
//	char arr[] = "%s";
//	char arr1[] = "Hello bit";
//	//printf(arr,'s');
//	return 0;
//}
//int main()
//{
//	char ch[] = "%d";
//	printf(ch,27);
//	return 0;
//}
//int main()
//{
//	long long i = 1;
//	long long j = 1;
//		long long k = 1;
//		long long sum = 0;
//		int count = 0;
//		int dest = 20190324;
//		//long long cur = 0;
//		while (count <= dest)
//		{
//			sum = i + j + k;
//			i = j;
//			j = k;
//			k = sum;
//			count++;
//		}
//		int n = 4;
//		while (n--)
//		{
//			printf("%lld ",sum%10);
//			sum /= 10;
//		}
//	return 0;
//}
//#include<string.h>
//#define LEN 100
//void AddChar(char* sum,char*ch1,char*ch2,char*ch3)
//{
//	int i = LEN - 1;
//	int tail = 0;
//	while (i)
//	{
//		sum[i] = (ch1[i] - '0' + ch2[i] - '0' + ch3[i] - '0' + tail) % 10 + '0';
//		tail = (ch1[i] - '0' + ch2[i] - '0' + ch3[i] - '0' + tail) / 10;
//		i--;
//	}
//	memcpy(ch1, ch2,LEN);
//	memcpy(ch2, ch3,LEN);
//	memcpy(ch3,sum,LEN);
//
//}
//int main()
//{
//	int count = 3;
//	int dest = 20190324;
//	char* sum = (char*)calloc(LEN,sizeof(char));
//	if (sum == NULL)
//		return 0;
//	char ch1[LEN] = { 0 };
//	char ch2[LEN] = { 0 };
//	char ch3[LEN] = { 0 };
//	for (int i = 0; i<LEN; i++)
//	{
//		ch1[i] = ch2[i] = ch3[i] = sum[i] = '0';
//	}
//	ch1[LEN - 1] = '1';
//	ch2[LEN - 1] = '1';
//	ch3[LEN - 1] = '1';
//
//	while (count <= dest)
//	{
//		AddChar(sum,ch1,ch2,ch3);
//		count++;
//	}
//	for (int i = LEN - 1; i > LEN-1-4; i--)
//		printf("%c ",sum[i]);
//
//	return 0;
//}
//#include<iostream>
////using namespace std;
//int f[20190324];
//int main() {
//	f[0] = f[1] = f[2] = 1;
//	for (int i = 3; i < 20190324; i++) {
//		f[i] = (f[i - 1] + f[i - 2] + f[i - 3]) % 10000;
//	}
//	//cout << f[20190323] << endl;
//	return 0;
//}
//memcmp();
//#include<stdlib.h>
//#include<string.h>
//int reinitializePermutation(int n) {
//    int nums[n];
//    int perm[n];
//    for (int i = 0; i < n; i++)
//    {
//        nums[i] = i;
//        perm[i] = i;
//    }
//    int arr[n];
//    int count = 0;
//    int i = 0;
//    while (1)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            if (i % 2 == 0)
//                arr[i] = perm[i / 2];
//            else
//                arr[i] = perm[n / 2 + (i - 1) / 2];
//        }
//        count++;
//        if (memcmp(nums, arr, n * sizeof(int)))
//        {
//            memcpy(perm, arr, n * sizeof(int));
//        }
//        else
//            break;
//
//    }
//    return count;
//}
//int romanToInt(char* s) {
//    int i = 0;
//    int sum = 0;
//    int len = strlen(s);
//    while (i < len)
//    {
//        if (s[i] == 'I')
//        {
//            switch (s[i + 1])
//            {
//            case 'V':
//                sum += 4; i += 2; break;
//            case 'X':
//                sum += 9; i += 2; break;
//            default:
//                sum += 1; i++;
//            }
//        }
//        else if (s[i] == 'X')
//        {
//            switch (s[i + 1])
//            {
//            case 'L':
//                sum += 40; i += 2; break;
//            case 'C':
//                sum += 90; i += 2; break;
//            default:
//                sum += 10; i++;
//            }
//        }
//        else if (s[i] == 'C')
//        {
//            switch (s[i + 1])
//            {
//            case 'D':
//                sum += 400; i += 2; break;
//            case 'M':
//                sum += 900; i += 2; break;
//            default:
//                sum += 100; i++;
//            }
//        }
//        else
//        {
//            switch (s[i])
//            {
//            case 'V':
//                sum += 5; break;
//            case 'L':
//                sum += 50; break;
//            case 'D':
//                sum += 500; break;
//            case 'M':
//                sum += 1000; break;
//            }
//            i++;
//        }
//    }
//    return sum;
//}