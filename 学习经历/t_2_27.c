#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//int num = 0;
	//scanf("%d", &num);
	//if (num == 0)//输入
	//	printf("输入的数字是0\n");
	//else if (num > 0)//这里的if嵌套在else语句里面，形成嵌套结构
	//	printf("输入的数字是正数\n");
	//else
	//	printf("输入的数字是负数\n");

	//输入一个整数，判断其是奇数还是偶数；如果不是整数就输出非整数

	//int num = 0;
	//scanf("%d", &num);
	//if (num > 0)
	//{
	//	//判断奇数偶数
	//	if (num % 2 == 0)
	//	{
	//		printf("这是偶数\n");
	//	}
	//	else
	//	{
	//		printf("这是奇数\n");
	//	}
	//}

	//else
	//{
	//	printf("这是非整数\n");
	//}

	//条件操作符
	/*int a = 0;
	int b = 0;
	scanf("%d", &a);
	b = a > 5 ? 3 : -3;
	printf("%d\n",b);*/

	//找两个数最大值
	int a = 0;
	int b = 0;
	scanf("%d" "%d", &a ,&b);
	int m = a > b ? a : b;
	printf("%d\n", m);

	return 0;
}