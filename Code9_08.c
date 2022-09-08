#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<string.h>
//int main()
//{
//	printf("%d\n",strcmp("ab","abc"));
//	return 0;
//}
#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    while (scanf("%d%d%d", &a, &b, &c) != EOF)
//    {
//        if (a + b > c && a + c > b && c + b > a)
//        {
//            if (a == b && b == c)
//                printf("Equilateral triangle!\n");
//            else if (a == b || a == c || b == c)
//                printf("Isosceles triangle!\n");
//            else
//                printf("Ordinary triangle!\n");
//        }
//        else
//        {
//            printf("Not a triangle!\n");
//        }
//    }
//    return 0;
//}
//int main()
//{
//	/*char* p=NULL;
//	gets(p);*/
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int countA = 0;
//    int countB = 0;
//    char arr[100];
//    gets(arr);
//    int len = strlen(arr);
//    int i = 0;
//    while (arr[i] != '\0')
//    {
//        if (arr[i] == 'B')
//            countB++;
//        else if (arr[i] == 'A')
//            countA++;
//        i++;
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int countA = 0;
//    int countB = 0;
//    char arr[100];
//    gets(arr);
//    int len = strlen(arr);
//    int i = 0;
//    while (arr[i] != '\0')
//    {
//        if (arr[i] == 'B')
//            countB++;
//        else if (arr[i] == 'A')
//            countA++;
//        i++;
//    }
//    if (countB > countA)
//        putchar('B');
//    else if (countA > countB)
//        putchar('A');
//    else
//        putchar('E');
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int arr[7] = { 0 };
//    int max = 0;
//    int min = 0;
//    float div = 0.0f;
//    int sum = 0;
//    while (scanf("%d", arr) != EOF)
//    {
//        sum = max = min = arr[0];
//        for (int i = 1; i < 7; i++)
//        {
//            scanf("%d", arr + i);
//            sum += arr[i];
//            if (arr[i] > max)
//                max = arr[i];
//            if (arr[i] < min)
//                min = arr[i];
//        }
//        //printf("%d %d\n",max,min);
//        sum -= (max + min);
//        div = sum / 5.0;
//        printf("%.2f\n", div);
//        sum = 0;
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//
//    int n = 0;
//    while (EOF != scanf("%d", &n))
//    {
//        if (200 == n)
//            printf("OK\n");
//        else if (202 == n)
//            printf("Accepted\n");
//        else if (400 == n)
//            printf("Bad Request\n");
//        else if (403 == n)
//            printf("Forbidden\n");
//        else if (404 == n)
//            printf("Not Found\n");
//        else if (500 == n)
//            printf("Internal Server Error\n");
//        else if (502 == n)
//            printf("Bad Gateway\n");
//
//
//    }
//    return 0;
//}
//int firstBadVersion(int n) {
//
//    int left = 1;
//    int right = n;
//    int mid = 0;
//    int bad = 0;
//    while (left <= right)
//    {
//        mid = (right - left) / 2 + left;
//        if (isBadVersion(mid))
//        {
//            bad = mid;
//            right = mid - 1;
//        }
//        else
//            left = mid + 1;
//    }
//    return bad;
//}
//int arrangeCoins(int n) {
//
//    long long sum = 0;
//    int i = 1;
//    while (sum <= n)
//    {
//        sum += i;
//        i++;
//    }
//    return i - 2;
//}
//int arrangeCoins(int n) {
//    int i = 1;
//    int left = 1;
//    int right = n;
//    int ans = 0;
//    long long sum = 0;
//    while (left <= right)
//    {
//        i = (right - left) / 2 + left;
//        sum = (i + 1) * i / 2;
//        if (sum>n)
//            right = i - 1;
//        else
//        {
//            ans = i;
//            left = i + 1;
//        }
//    }
//    return ans;
//}
//int main()
//{
//    printf("%d",arrangeCoins(5));
//    return 0;
//}
//int findKthPositive(int* arr, int arrSize, int k) {
//    int  i = 0;
//    int j = 1;
//    int count = 0;
//    int key = 0;
//    while (count != k)
//    {
//        if (i < arrSize)
//        {
//            if (j != arr[i])
//            {
//                key = j;
//                count++;
//            }
//            else
//                i++;
//        }
//        else
//        {
//            arr[arrSize - 1] += 1;
//            key = arr[arrSize - 1];
//            count++;
//        }
//        j++;
//    }
//    return key;
//}