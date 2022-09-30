#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<string.h>
#include<assert.h>
//const char* my_strstr(const char* dest, const char* sour)
//{
//	int begin1 = 0;
//	int begin2 = 0;
//	int i = 0;
//	int j = 0;
//	int len1 = strlen(dest);
//	int len2 = strlen(sour);
//	while (begin1 < len1)
//	{
//		i = begin1;
//		j = begin2;
//		while ((i < len1 && j < len2) &&dest[i] == sour[j])
//		{
//			i++;
//			j++;
//		}
//		if (j >=len2)
//			return dest + i - j;
//		begin1++;
//	}
//	return NULL;
//}
#include<stdlib.h>
//void NEXT(const char* p, int* next)
//{
//	next[0] = -1;
//	next[1] = 0;
//	int k = 0;
//	int i = 1;
//	int len = strlen(p);
//	for (i = 1; i < len; )
//	{
//		if (k == -1 || p[k] == p[i])
//		{
//			next[i + 1] = k + 1;
//			i++;
//			k++;
//		}
//		else
//		{
//			k = next[k];
//		}
//	}
//}
//int KMP(const char* dest, const char* sour)
//{
//	assert(dest&&sour);
//	int len1 = strlen(dest);
//	int len2 = strlen(sour);
//	int* next = (int*)malloc(len2*sizeof(int));
//	NEXT(sour,next);
//	int i = 0;
//	int j = 0;
//	while (i < len1)
//	{
//		while (j==-1||((i < len1 && j < len2) && dest[i] == sour[j]))
//		{
//			i++;
//			j++;
//		}
//		if (j >= len2)
//			return i - j;
//		j = next[j];
//	}
//	return -1;
//}
//int main()
//{
//
//	char* dest = "gggggggggggggggggggggggggggggggggggggggggggggggggggggggggggkh";
//	char* sour = "ggggggkh";
//	//const char* ret = my_strstr(dest,sour);
//	int a = KMP(dest,sour);
//	if(-1!=a)
//	printf(dest+a);
//	return 0;
//
//}
//int countDigitOne(int n) {
//    int i = 1;
//    int count = 0;
//    int tmp = 0;
//    for (i = 1; i <= n; i++)
//    {
//        tmp = i;
//        while (tmp)
//        {
//            if (tmp % 10 == 1)
//                count += 1;
//            tmp /= 10;
//        }
//    }
//    return count;
//}
//int main()
//{
//    int ret = 0;
//    ret = countDigitOne(8888888);
//    printf("%d\n",ret);
//    return 0;
//}
//char* longestCommonPrefix(char** strs, int strsSize) {
//    int r = 0;
//    int c = 0;
//    int len = 200;
//    for (int j = 0; j < strsSize; j++)
//    {
//        int l = strlen(strs[j]);
//        if (len > l)
//            len = l;
//    }
//    while (c < len)
//    {
//        for (r = 0; r < strsSize - 1; r++)
//        {
//            if (strs[r][c] != strs[r + 1][c])
//            {
//                goto eg;
//            }
//        }
//        c++;
//    }
//eg:
//    if (c)
//    {
//        int i = 0;
//        char* tmp = (char*)malloc(c + 1);
//        for (i = 0; i < c; i++)
//            tmp[i] = strs[0][i];
//        tmp[i] = '\0';
//        return tmp;
//    }
//    static char s[1] = "";
//    return s;
//}
//int main()
//{
//    char* s1 = "flower";
//    char* s2 = "flow";
//    char* s3 = "flight";
//    char* tmp[] = {s1,s2,s3};
//    longestCommonPrefix(tmp,3);
//    return 0;
//}
//void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
//    int R[matrixSize];
//    int C[*matrixColSize];
//    memset(R, 0, sizeof(R));
//    memset(C, 0, sizeof(C));
//    for (int r = 0; r < matrixSize; r++)
//    {
//        for (int c = 0; c < *matrixColSize; c++)
//        {
//            if (!matrix[r][c])
//                R[r] = C[c] = -1;
//        }
//    }
//    for (int r = 0; r < matrixSize; r++)
//    {
//        for (int c = 0; c < *matrixColSize; c++)
//        {
//            if (R[r] || C[c])
//                matrix[r][c] = 0;
//        }
//    }
//}
//void rotate(int** matrix, int matrixSize, int* matrixColSize) {
//    int* tmp[matrixSize];
//    for (int i = 0; i < matrixSize; i++)
//    {
//        tmp[i] = (int*)malloc(sizeof(int) * (*matrixColSize));
//    }
//    for (int r = 0; r < matrixSize; r++)
//    {
//        for (int c = 0; c < *matrixColSize; c++)
//        {
//            tmp[c][*matrixColSize - r - 1] = matrix[r][c];
//        }
//    }
//    for (int r = 0; r < matrixSize; r++)
//    {
//        for (int c = 0; c < *matrixColSize; c++)
//        {
//            matrix[r][c] = tmp[r][c];
//        }
//    }
//    for (int i = 0; i < matrixSize; i++)
//    {
//        free(tmp[i]);
//    }
//}