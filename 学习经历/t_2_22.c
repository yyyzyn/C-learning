#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//分支与循环语句

int main()
{
	//int num = 0;
	//scanf("%d", &num);
	//if (num % 2 == 1)
	//	printf("%d是奇数\n", num);

	//int num = 0;
	//scanf("%d", &num);
	//if (num % 2 == 1)
	//	printf("%d是奇数\n", num);
	//else
	//	printf("%d是偶数\n", num);

	int age = 0;
	scanf("%d", &age);
	if (age >= 18)
		printf("成年\n");
	else
		printf("未成年\n");

	return 0;
}