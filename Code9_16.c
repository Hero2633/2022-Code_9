#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<stddef.h>
//struct a
//{
//	char a;
//	double b;
//	float c;
//	char d;
//	int e;
//};
//int main()
//{
//	printf("%d\n", offsetof(struct a, a));
//	printf("%d\n", offsetof(struct a, b));
//	printf("%d\n", offsetof(struct a, c));
//	printf("%d\n", offsetof(struct a, d));
//	printf("%d\n",offsetof(struct a,e));
//	printf("%d\n",sizeof(struct a));
//	return 0;
//}
//int duplicate(int* numbers, int numbersLen) {
//    // write code here
//    int i = 0;
//    int* nums = (int*)calloc(numbersLen, sizeof(int));
//    while (i < numbersLen)
//    {
//        if (nums[numbers[i]])
//        {
//            free(nums);
//            return numbers[i];
//        }
//        else
//        {
//            nums[numbers[i]]++;
//        }
//        i++;
//    }
//    free(nums);
//    return -1;
//}
//void swap(int* a, int* b)
//{
//    int tmp = *a;
//    *a = *b;
//    *b = tmp;
//}
//int duplicate(int* numbers, int numbersLen) {
//    // write code here
//    int i = 0;
//    while (i < numbersLen)
//    {
//        if (numbers[i] != i)//位置不合法
//        {
//            //进一步判断应该在的位置存在的元素是否与numsbers[i]相等
//            if (numbers[i] != numbers[numbers[i]])//不相等
//                swap(numbers + i, numbers + numbers[i]);
//            else//相等
//                return numbers[i];
//
//        }
//        else
//            i++;
//    }
//    return -1;
//}
//#include <stdio.h>
//void Swap(int* a, int* b)
//{
//    int tmp = *a;
//    *a = *b;
//    *b = tmp;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int len = n;
//    int arr[100];
//    while (n--)
//        scanf("%d", arr + n);
//    int i = 0;
//    while (i < len)
//    {
//        if (arr[i] - 1 == i || arr[i] == -1)
//            i++;
//        else
//        {
//            if (arr[arr[i] - 1] == arr[i])
//                arr[i] = -1;
//            else
//                Swap(arr + i, arr + arr[i] - 1);
//        }
//
//    }
//    for (int i = 0; i < len; i++)
//        if (arr[i] != -1)
//            printf("%d ", arr[i]);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        for (int i = 1; i <= n; i++)
//        {
//            for (int k = 1; k <= 2 * n - 2 * i; k++)
//                printf(" ");
//            for (int j = 1; j <= i; j++)
//                printf("* ");
//            putchar('\n');
//        }
//    }
//    return 0;
//}