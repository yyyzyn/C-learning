#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//do while语句学习
//1-10打印


int main()
{
	/*int i = 1;
	do
	{
		printf("  %d", i);
		i = i + 1;
	} while (i <= 10);*/

	/*int n = 0;*/
	/*scanf("%d", &n);
	int cnt = 0;
	do
	{
		cnt++;
		n = n / 10;
	} while (n);
	printf("%d", cnt);*/

	//contine是用于跳过本次循环的continue后边代码，直接去判断部分，进行下一次判断

	//int i = 1;
	//while (i <= 10)
	//{
	//	if (i == 5)
	//		break;//当i=5时，就执行break，循环即终止
	//	printf(" %d", i);
	//	i = i + 1;
	//}

	int i = 1;
	for (i = 1; i <= 10; i = i + 1)
	{
		/*if (i == 5)
			break;*/
		if (i == 5)//这种写法不会造成死循环，会跳过5
			continue;
		printf(" %d", i);
	}

	//do while语句中的break和continue作用和while循环几乎一模一样

	/*int i = 1;
	do
	{
		if (i == 5)
			break;
		printf(" %d", i);
		i = i + 1;
	} while (i <= 10);*/

	/*int i = 1;
	do
	{
		if (i == 5)
			continue;
		printf(" %d", i);
		i = i + 1;
	} while (i <= 10);*/


	return 0;
}