#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//��ά�����ѧϰ
int main()
{
	//int data[3][5] = {1,2,3,4,5,2,3,4,5,6,3,4,5,6,7};//��һ���Ƕ����У��ڶ�������
	//int arry[3][5] = {1,2};//����ȫ��ʼ��

	//printf("%d\n", data[2][4]);

	//��ά�������������

	//int arr[3][5] = {1,2,3,4,5,2,3,4,5,6,3,4,5,6,7};
	//int i = 0;//��

	//����
	//for (i = 0; i < 3; i = i + 1)
	//{
	//	int j = 0;//��
	//	for (j = 0; j < 5; j = j + 1)
	//	{
	//		scanf("  %d", &arr[i][j]);
	//	}
	//
	//}

	//���
	//for (i = 0; i < 3; i = i + 1)
	//{
	//	int j = 0;//��
	//	for (j = 0; j < 5; j = j + 1)
	//	{
	//		printf("  %d", arr[i][j]);
	//	}
	//	printf("\n");
	//}

	//��ά���ݵĴ洢
	
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