#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//switch���ѧϰ


int main()
{
	/*int num = 0;
	scanf("%d", &num);
	switch (num % 3)
	{
	case 0:
		printf("����Ϊ0\n");
		break;
	case 1:
		printf("����Ϊ1\n");
		break;
	case 2:
		printf("����Ϊ2\n");
		break;
	}*/

	/*int day = 0;
	scanf("%d", &day);
	switch(day)
	{
	case 1:
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n");
		break;
	case 7:
		printf("������\n");
		break;
	default:
		printf("�������\n");
		break;
	}*/

	//whileѭ��
	//��ӡ1��10
	/*int i = 1;
	while (i <= 10)
	{
		printf(" %d", i);
		i = i + 1;
	}*/

	//����һ�����������������ӡ���������ÿһλ

	/*int n = 0;
	scanf("%d", &n);
	while (n)
	{
		printf(" %d", n % 10);
		n = n / 10;
	}*/

	//forѭ��
	/*int n = 0;
	for (n = 1; n <= 10; n = n + 1)
	{
		printf(" %d", n);
	}*/

	//����1-100֮��3�ı���������֮��
	int i = 0;
	int sum = 0;
	for (i = 3; i <= 100; i = i + 3)
	{
		sum = sum + i;
	}
	printf("%d\n", sum);
	return 0;
}