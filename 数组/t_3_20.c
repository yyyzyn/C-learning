#include<stdio.h>


int main()
{

	//数组练习
//多个字符从两端移动，向中间汇聚

	//char arr1[] = "welcome to njupt!!!";
	//char arr2[] = "###################";

	//int left = 0;
	//int right = strlen(arr1) - 1;

	//while(left<=right)
	//{ 
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	printf("%s\n", arr2);
	//	Sleep(2000);//单位是毫秒
	//	left++;
	//	right++;
	//}

	//数组练习2
	//二分查找法

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 5;//要找的数字是7
	int siz = sizeof(arr) / sizeof(arr[0]) - 1;
	int flag = 0;
	int left = 0;
	int right = siz - 1;


	while (left <= right)
	{
		int middle = (left + right) / 2;

		if (arr[middle] > key)
		{
			right = middle - 1;
		}

		else if (arr[middle] < key)
		{
			left = middle + 1;
		}

		else
		{
			flag = 1;
			break;
		}

		if (flag == 1)
			printf("找到了，下标是%d\n", middle);
		else
			printf("找不到\n");

		return 0;
	}

}