#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int n, m;
//    int arr1[101], arr2[101];
//    int i = 0, j = 0, k = 0;
//    scanf("%d %d", &n, &m);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    if (n > m)
//        k = n - m;
//    else
//    {
//        while (n <= m)
//            m = m - n;
//        k = n - m;
//    }
//    for (j = k; j < n; j++, i++)
//        arr2[j] = arr1[i];
//    for (j = 0; j < k; j++, i++)
//        arr2[j] = arr1[i];
//    for (j = 0; j < n - 1; j++)
//        printf("%d ", arr2[j]);
//    printf("%d\n", arr2[n - 1]);
//    return 0;
//}

#include<stdio.h>
int main()
{
	int n, m;
	int i=0, j=0,k=0;
	int arr1[100] = { 0 };
	int arr2[100] = { 0 };	
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr1[i]);
	if (n > m)
		k = n - m;
	else
	{
		while (n <= m)
			m = m - n;
		k = n - m;
	}
	for (j = k; j < n; j++, i++)
		arr2[j] = arr1[i];
	for (j = 0; j < k; j++,i++)
		arr2[j] = arr1[i];
	for (j = 0; j < n - 1; j++)
		printf("%d ", arr2[j]);
	printf("%d\n", arr2[n - 1]);
	return 0;
}
//#include<stdio.h>
//int main()
//{
//	int x;
//	scanf("%d", &x);
//	int arr[1000];
//	int i;
//	for (i = 0; i < x; i++)
//		arr[i] = i + 1;
//	int end = 0;
//	int reend = x;
//	while (reend > 1)
//	{
//		for (i = 0; i < x; i++)
//		{
//			if (arr[i] == 0)
//			{
//				continue;
//			}
//			end++;
//			if (end == 3)
//			{
//				arr[i] = 0;
//				end = 0;
//				reend--;
//			}
//		}
//	}
//	for (i = 0; i < x; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d\n", i + 1);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i, j, k;
//	int arr[100] = { 0 };
//	int  a, b;
//	scanf("%d%d", &a ,& b);
//	for (i = 0; i < a; i++)
//		scanf("%d", &arr[i]);
//	for (i = 0; i < b; i++)
//	{
//		for (j = 0; j < a - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				k = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = k;
//			}
//		}
//	}
//	for (i = 0; i < a - 1; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("%d", arr[a - 1]);
//	return 0;
//}
//#include<stdio.h>
//main()
//{
//	int a[10], b[11], n, c, i, j, k, s = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	scanf("%d", &c);
//	if (n == 0)
//	{
//		printf("%d ", c);
//	}
//	else
//	{
//		if (c < a[0])
//		{
//			for (i = 1; i < n + 1; i++)
//			{
//				b[i] = a[s];
//				s++;
//			}
//			b[0] = c;
//			for (i = 0; i < n + 1; i++)
//			{
//				printf("%d ", b[i]);
//			}
//		}
//		else if (c > a[n - 1])
//		{
//			for (i = 0; i < n; i++)
//			{
//				b[i] = a[s];
//				s++;
//			}
//			b[n] = c;
//			for (i = 0; i < n + 1; i++)
//			{
//				printf("%d ", b[i]);
//			}
//		}
//		else
//		{
//			for (i = 0; i < n; i++)
//			{
//				if (c > a[i] && c < a[i + 1])
//				{
//					k = i;
//					break;
//				}
//			}
//			for (i = 0; i < k + 1; i++)
//			{
//				b[i] = a[s];
//				s++;
//			}
//			b[k + 1] = c;
//			s = k + 1;
//			for (j = k + 2; j < n + 1; j++)
//			{
//				b[j] = a[s];
//				s++;
//			}
//			for (i = 0; i < n + 1; i++)
//			{
//				printf("%d ", b[i]);
//			}
//		}
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int n,m;
//	int i, j;
//	int arr[100] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &m);
//	for (j = 0; j < n-1 ; j++)
//	{
//		if (m > arr[j] && m < arr[j + 1])
//		{
//			int temp = 0;
//			temp = arr[j + 1];
//			arr[j + 1] = m;
//			m = temp;
//		}
//	}
//	for (i = 0; i <= n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//#include <stdio.h>  
//int main()
//{
//    int m;
//    while (scanf("%d", &m) != EOF)
//    {
//        int a[20], i;
//        for (i = 0; i < m; i++)
//            scanf("%d", &a[i]);
//        int n;
//        scanf("%d", &n);
//        int b[20];
//        for (i = 0; i < n; i++)
//            scanf("%d", &b[i]);
//        int j;
//        int c[20], k;
//        k = 0;
//        for (i = 0; i < m; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                if (a[i] == b[j])
//                    break;
//            }
//            if (j >= n)
//            {
//                c[k] = a[i];
//                k++;
//            }
//        }
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < m; j++)
//            {
//                if (b[i] == a[j])
//                    break;
//            }
//            if (j >= m)
//            {
//                c[k] = b[i];
//                k++;
//            }
//        }
//        printf("%d", c[0]);
//        for (i = 1; i < k; i++)
//        {
//            for (j = 0; j < i; j++)
//            {
//                if (c[i] == c[j])
//                    break;
//            }
//            if (j >= i)
//                printf(" %d", c[i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a;
//	int arr1[20] = { 0 };
//	int arr2[20] = { 0 };
//	int arr3[20] = { 0 };
//	
//	while (scanf("%d", &a)!=EOF)
//	{
//		for (int i = 0; i < a; i++)
//			scanf("%d", &arr1[i]);
//		int b;
//		scanf("%d", &b);
//		for (int j = 0; j < b; j++)
//			scanf("%d", &arr2[j]);
//		int k = 0;
//		for (int i = 0; i < a; i++)
//		{
//			int j = 0;
//			for (j = 0; j < b; j++)
//			{
//				if (arr1[i] == arr2[j])
//					break;
//			}
//			if (j >= a)
//			{
//				arr3[k] = arr1[i];
//				k++;
//			}
//		}
//		for (int i = 0; i < b; i++)
//		{
//			int j = 0;
//			for (j = 0; j < a; j++)
//			{
//				if (arr2[i] == arr1[j])
//				{
//					arr3[k] = arr2[i];
//					k++;
//				}
//			}
//			printf("%d", arr3[0]);
//			for (int i = 1; i < k; i++)
//			{
//				for (int j = 0; j < i; j++)
//				{
//					if (arr3[i] == arr3[j])
//						break;
//				}
//				if (j >= i)
//					printf(" %d", arr3[i]);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int input = 0;
//	int arr[100] = { 0 };
//	scanf("%d", &input);
//	for(int  j =input-1;j>=0;j--)
//	{
//		scanf("%d", &arr[j]);
//	}
//	printf("%d", arr[0]);
//	for (int i = 1; i < input; i++)
//		printf(" %d", arr[i]);
//	return 0;
//}