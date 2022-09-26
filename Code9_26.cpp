#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include <corecrt.h>
#include<limits.h>
//int main()
//{
//	/*long int a;
//	unsigned long int c;
//	short int b;
//	 short int v;
//	 long long int d;
//	 unsigned long long  f;*/
//	/*int a = 19;
//	int arr[a];*/
//	/*int a = 22e1;*/
//	int a = -1;
//	printf("%o,%x",a,a);
//	short int erns;
//	int b = INT_MIN;
//	-2147483648;
//	return 0;
//}
#include<stdbool.h>
#include<stdint.h>
//int main()
//{
//	/*long a = 2L;
//	long long c = 3LL;
//	int cq = 10U;
//	int cd = -1u;*/
//	/*short int a = 2;*/\
//		//char a = '\x1LL';
//	/*	char a = -2;
//	printf("%hX\n",a);*/
//	/*printf("%d\n",sizeof(_Bool));*/
//		/*int16_t a;*/
//		int32_t a;
//	/*PRId32;*/
//	/*double a = 0x1.1;*/
//	return 0;
//}
#include<stdlib.h>
//int main()
//{
//	int* nums = (int*)calloc(10,sizeof(int));
//	if (!nums)
//		return 0;
//	int key = 0;
//	int tmp = 0;
//	int dest = 2020;
//	while (key <= dest)
//	{
//		if (!key)
//			nums[key]++;
//		else
//		{
//			tmp = key;
//			while (tmp)
//			{
//				nums[tmp % 10]++;
//				tmp /= 10;
//			}
//		}
//		key++;
//	}
//	printf("%d\n",nums[2]);
//	return 0;
//}
//bool maximum_is1(int a, int b)
//{
//	int c = 0;
//	while (a % b)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	if (b == 1)
//		return true;
//	return false;
//}
//int main()
//{
//	int up = 1;
//	int max = 2020;
//	int down = 1;
//	int count = 0;
//	for (up = 1; up <= max; up++)
//	{
//		for (down = 1; down <= max; down++)
//		{
//			if (maximum_is1(up, down))
//				count++;
//		}
//	}
//	printf("%d\n",count);
//	return 0;
//}
//#define N 45
//int main()
//{
//	int nums[N][N] = { 1 };
//	int r = 0;
//	int c = 1;
//	int right = 2;
//	int down = 2;
//	int key = 2;
//	int dest = 20;
//	dest--;
//	while (right <= N && down <= N)
//	{
//
//		while (r < right && c < down&&(right <= N && down <= N))
//		{
//			if (r == c && r == dest)
//			{
//				nums[r][c] = key;
//				printf("%d\n",key);
//				goto eg;
//			}
//			else
//			{
//				nums[r][c] = key;
//				r++;
//				c--;
//			}
//			key++;
//		}
//		right++;
//		down++;
//		c++;
//		while (r < right && c < down && (right <= N && down <= N))
//		{
//			if (r == c && r == dest)
//			{
//				nums[r][c] = key;
//				printf("%d\n", key);
//				goto eg;
//			}
//			else
//			{
//				nums[r][c] = key;
//				r--;
//				c++;
//			}
//			key++;
//		}
//		right++;
//		down++;
//		r++;
//	}
//	eg:
//	/*for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//			printf("%d ",nums[i][j]);
//		printf("\n");
//	}*/
//	return 0;
//}
//int fun(int n)
//{
//	if (n == 1)
//		return 1;
//	return fun(n - 1) + (n - 1) * 4;
//}
//int main()
//{
//	printf("%d\n",fun(20));
//	return 0;
//}
//#define MONTH 10
//#define YEAR 2020
//#define MAX
//#ifdef MAX
//bool is_lepyear(int a)
//{
//	return (((0 == a % 4) && (a % 100 != 0)) || (0 == a % 400));
//}
//int main()
//{
//	int km = 0;
//	int year = 2000;
//	int month = 1;
//	int day = 1;
//	int week = 6;
//	int DAY[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (1)
//	{
//		if (year == YEAR && month == MONTH && day == 1)
//		{
//			break;
//		}
//		int daymax = DAY[month];
//		if (month == 2 && is_lepyear(year))
//		{
//			daymax = 29;
//		}
//		if (day <= daymax)
//		{
//			week %= 7;
//			if (week == 1 || day == 1)
//				km += 2;
//			else
//				km += 1;
//			day++;
//			week++;
//		}
//		else
//		{		month++;
//		      day = 1;
//	        }
//		if (month > 12)
//		{
//			month %= 12;
//			year++;
//		}
//	}
//	printf("%dkm\n",km+2);
//	return 0;
//}
//#else
//#include<iostream>
//using namespace std;
////2000 1 1(星期六)-2020 10 1
///**/
//int ants = 0;
//int Month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//int main()
//{
//	int year = 2000, month = 1, day = 1, weekday = 6;
//	while (1)
//	{
//		ants += (weekday == 1 || day == 1) + 1;//判断是否是星期一或者是每个月月初
//		if (year == YEAR && month == MONTH && day == 1)//结束条件
//		{
//			break;
//		}
//		//星期循环，和天数增加
//		day += 1;
//		weekday = (weekday + 1) % 7;
//		//判断是否是瑞年并且是二月份
//		if (month == 2 && (year % 4 == 0 && year % 100 != 0 || year % 400 == 0))
//		{
//			if (day > Month[month] + 1)
//			{
//				day = 1;
//				month += 1;
//			}
//		}
//		else if (day > Month[month])
//		{
//			day = 1;
//			month += 1;
//		}
//		if (month == 13)
//		{
//			month = 1;
//			year += 1;
//		}
// 
//	}
//	cout << ants << endl;
//	return 0;
//}
//#endif
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int sum = 0;
//	int k = n;
//	int count = 4;
//	int tmp = n+1;
//	while (1)
//	{
//		k = tmp;
//		while (count--)
//		{
//			sum = sum * 10 + k % 10;
//			k /= 10;
//			if (k == sum)
//			{
//				printf("%d\n",tmp);
//				return 0;
//			}
//		}
//		tmp++;
//		count = 4;
//		sum = 0;
//	}
//	return 0;
//}
//#include<string.h>
//void AddChar1(char* nums)
//{
//	int end = strlen(nums)-1;
//	int tail = 0;
//	char ch[] = { "00000001" };
//	while (end >= 0)
//	{
//		char tmp = nums[end];
//		nums[end] = (nums[end] - '0' + ch[end]-'0' + tail) % 10 + '0';
//		tail = (tmp - '0' + ch[end]-'0' + tail) / 10;
//		end--;
//	}
//}
//bool is_palindrome(char const* nums)
//{
//	int left = 0;
//	int right = strlen(nums)-1;
//	while (left < right&&(nums[left] == nums[right]) )
//	{
//		left++;
//		right--;
//	}
//	if (left > right)
//		return true;
//	return false;
//}
//bool is_ABABBABA(char* const nums)
//{
//	return(nums[1] == nums[3] && nums[4] == nums[3] && nums[4] == nums[6] && nums[0] == nums[2]
//		&& nums[2] == nums[5] && nums[5] == nums[7]);
//}
//int main()
//{
//	char nums[10] = { 0 };
//	char palindrome[10] = { 0 };
//	int flag1 = 0;
//	int flag2 = 0;
//	while (scanf("%s", nums) != EOF)
//	{
//		//scanf("%s", nums);
//		flag1 = 0;
//		flag2 = 0;
//		while (1)
//		{
//			AddChar1(nums);
//			if (is_palindrome(nums)&&!flag1)
//			{
//				strcpy(palindrome,nums);
//				flag1 = 1;
//			}
//			if (is_ABABBABA(nums)&&!flag2)
//			{
//				flag2 = 1;
//			}
//			if (flag1 && flag2)
//			{
//				printf("%s\n", palindrome);
//				printf("%s\n",nums);
//				printf("********\n");
//				//memset(nums,0,strlen(nums));
//				break;
//			}
//		}
//	}
//	return 0;
//
//}