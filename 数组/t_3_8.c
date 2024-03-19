#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//数组的初始化，数组创建以及数组的索引
	//int arr[5] = {1,2,3,4,5};
	//char ch[5];
	//double data[8];

	//printf("%d\n", arr[3]);//4
	//printf("%d\n", arr[1]);//2

	//数组的打印
	/*int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	for (i = 0; i < 10; i = i + 1)
	{
		printf("  %d", arr[i]);
	}*/

	//数组的输入和打印
	/*int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	for (i = 0; i < 10; i = i + 1)
	{
		scanf(" %d\n", &arr[i]);
	}

	for (i = 0; i < 10; i = i + 1)
	{
		printf("  %d", arr[i]);
	}*/

	//sizeof函数使用
	//int arr[10] = { 0 };
	//printf("%zd\n", sizeof(arr));//40  数组的总大小
	//printf("%zd\n", sizeof(arr[0]));//4  数组一个元素的大小
	//printf("%zd\n", sizeof(arr) / sizeof(arr[0]));//10  数组的个数

	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int i = 0;
	for (i = 0; i < 10; i = i + 1)
	{
		//&-取地址操作符
		//%p-专门用来打印地址
		printf("&arr[%d]=%p\n", i, &arr[i]);
	}

	return 0;
}