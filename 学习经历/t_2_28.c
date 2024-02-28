#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	//逻辑取反运算符
	/*int flag = 0;
	if (!flag)
	{
		printf("do something\n");
	}*/

	//与运算符

	//闰年的判断，规则：能被4整除且不能被100整除；能被400整除
	int year = 0;
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		printf("是闰年\n");
	else
		printf("不是闰年\n");


	return 0;
}