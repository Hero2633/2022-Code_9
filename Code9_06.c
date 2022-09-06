#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<float.h>
#include<math.h>
//int main()
//{
//	double sum = 0.0;
//	int flag = 1;
//	int i = 1;
//	double val = 3.1415;
//	while (fabs(sum - val) > 0.000001)
//	{
//		sum += flag * 4.0 / (2.0 * i - 1);
//		flag *= -1;
//		i++;
//	}
//	printf("%d %.20lf\n",i-1,sum);
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//class Person
//{
//public:
//	int a;
//	Person(int b)
//	{
//		a = b;
//		cout << "有参构造函数" << endl;
//	}
//	Person(  Person& p)
//	{
//		a = p.a;
//		cout << "拷贝构造函数" << endl;
//	}
//	~Person()
//	{
//		cout << "析构函数" << endl;
//	}
//};
//int main()
//{
//	//Person(4);
//	Person p1 = Person(2);
//	//Person p1(2);
//	//p1 = Person(7);
//	//cout << p1.a;
//	return 0;
//}
//bool isPerfectSquare(int num) {
//    int L = 1;
//    int R = num;
//    long long mid = (R - L) / 2 + L;
//    while (L <= R)
//    {
//        mid = (R - L) / 2 + L;
//        if (mid * mid == (num))
//            return true;
//        else if (mid * mid < (num))
//            L = mid + 1;
//        else
//            R = mid - 1;
//    }
//    return false;
//}
//int main()
//{
//    isPerfectSquare(5);
//    return 0;
//}
//int  cmp(const void* p1, const void* p2)
//{
//    return*(int*)p1 - *(int*)p2;
//}
//int SearBin(int* nums, int left, int right, int begin, int end)
//{
//    int mid = 0;
//    while (left <= right)
//    {
//        mid = (left + right) / 2;
//        if (nums[mid] >= begin && nums[mid] <= end)
//            return mid;
//        else if (nums[mid] > end)
//            right = mid - 1;
//        else if (nums[mid] < begin)
//            left = mid + 1;
//
//    }
//    return -1;
//}
//int findTheDistanceValue(int* arr1, int arr1Size, int* arr2, int arr2Size, int d) {
//    qsort(arr2, arr2Size, 4, cmp);
//    int key1 = 0;
//    //int key2=0;
//    int count = 0;
//    int i = 0;
//    while (i < arr1Size)
//    {
//        key1 = SearBin(arr2, 0, arr2Size - 1, arr1[i] - d, arr1[i] + d);
//        if (key1 == -1)
//            count++;
//        i++;
//    }
//    return count;
//}
int main()
{
	printf("%p\n",&"abcde");
	return 0;
}