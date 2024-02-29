#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//switch语句学习


int main()
{
	/*int num = 0;
	scanf("%d", &num);
	switch (num % 3)
	{
	case 0:
		printf("余数为0\n");
		break;
	case 1:
		printf("余数为1\n");
		break;
	case 2:
		printf("余数为2\n");
		break;
	}*/

	/*int day = 0;
	scanf("%d", &day);
	switch(day)
	{
	case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期七\n");
		break;
	default:
		printf("输入错误\n");
		break;
	}*/

	//while循环
	//打印1—10
	/*int i = 1;
	while (i <= 10)
	{
		printf(" %d", i);
		i = i + 1;
	}*/

	//输入一个正的整数，逆序打印这个整数的每一位

	/*int n = 0;
	scanf("%d", &n);
	while (n)
	{
		printf(" %d", n % 10);
		n = n / 10;
	}*/

	//for循环
	/*int n = 0;
	for (n = 1; n <= 10; n = n + 1)
	{
		printf(" %d", n);
	}*/

	//计算1-100之间3的倍数的数字之和
	int i = 0;
	int sum = 0;
	for (i = 3; i <= 100; i = i + 3)
	{
		sum = sum + i;
	}
	printf("%d\n", sum);
	return 0;
}