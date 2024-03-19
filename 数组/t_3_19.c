#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//二维数组的学习
int main()
{
	//int data[3][5] = {1,2,3,4,5,2,3,4,5,6,3,4,5,6,7};//第一个是定义行，第二个是列
	//int arry[3][5] = {1,2};//不完全初始化

	//printf("%d\n", data[2][4]);

	//二维数组的输入和输出

	//int arr[3][5] = {1,2,3,4,5,2,3,4,5,6,3,4,5,6,7};
	//int i = 0;//行

	//输入
	//for (i = 0; i < 3; i = i + 1)
	//{
	//	int j = 0;//列
	//	for (j = 0; j < 5; j = j + 1)
	//	{
	//		scanf("  %d", &arr[i][j]);
	//	}
	//
	//}

	//输出
	//for (i = 0; i < 3; i = i + 1)
	//{
	//	int j = 0;//列
	//	for (j = 0; j < 5; j = j + 1)
	//	{
	//		printf("  %d", arr[i][j]);
	//	}
	//	printf("\n");
	//}

	//二维数据的存储
	
	int data[3][5];
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 5; j = j + 1)
		{
			printf("&arr[%d][%d]=%p\n", i, j, &data[i][j]);
		}
	}

	return 0;
}