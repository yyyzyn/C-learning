#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//����ĳ�ʼ�������鴴���Լ����������
	//int arr[5] = {1,2,3,4,5};
	//char ch[5];
	//double data[8];

	//printf("%d\n", arr[3]);//4
	//printf("%d\n", arr[1]);//2

	//����Ĵ�ӡ
	/*int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	for (i = 0; i < 10; i = i + 1)
	{
		printf("  %d", arr[i]);
	}*/

	//���������ʹ�ӡ
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

	//sizeof����ʹ��
	//int arr[10] = { 0 };
	//printf("%zd\n", sizeof(arr));//40  ������ܴ�С
	//printf("%zd\n", sizeof(arr[0]));//4  ����һ��Ԫ�صĴ�С
	//printf("%zd\n", sizeof(arr) / sizeof(arr[0]));//10  ����ĸ���

	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int i = 0;
	for (i = 0; i < 10; i = i + 1)
	{
		//&-ȡ��ַ������
		//%p-ר��������ӡ��ַ
		printf("&arr[%d]=%p\n", i, &arr[i]);
	}

	return 0;
}