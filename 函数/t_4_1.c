#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//函数声明
//函数名是什么，参数类型是什么，返回类型是什么
int leap_year(int y);//函数的定义
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}

int main()
{
	int year = 0;
	scanf("%d", &year);
	int r = leap_year(year);//函数的调用
	if (r == 1)
		printf("闰年\n");
	else
		printf("非闰年\n");
	return 0;
}


int leap_year(int y)//函数的定义
{
	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
		return 1;
	else
		return 0;
}