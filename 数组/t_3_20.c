#include<stdio.h>


int main()
{

	//������ϰ
//����ַ��������ƶ������м���

	//char arr1[] = "welcome to njupt!!!";
	//char arr2[] = "###################";

	//int left = 0;
	//int right = strlen(arr1) - 1;

	//while(left<=right)
	//{ 
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	printf("%s\n", arr2);
	//	Sleep(2000);//��λ�Ǻ���
	//	left++;
	//	right++;
	//}

	//������ϰ2
	//���ֲ��ҷ�

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 5;//Ҫ�ҵ�������7
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
			printf("�ҵ��ˣ��±���%d\n", middle);
		else
			printf("�Ҳ���\n");

		return 0;
	}

}