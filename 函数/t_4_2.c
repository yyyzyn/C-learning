#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"add.h"

//函数多文件操作

void test()
{
	static int i = 0;//打断重新创建变量过程，使用之前创建的值，变量的作用域没有改变
	i++;
	printf(" %d\n", i);
}


extern int g_val;//声明外部变量
extern int Add(int x, int y);//声明外部函数变量

int main()
{
	//int a = 0;
	//int b = 0;
	//scanf("%d  %d",&a,&b);
	//int ret = Add(a, b);
	//printf(" %d\n",ret);
	int i = 0;
	for (i = 0; i < 5; i++)//循环5次
	{
		test();
	}
	printf("%d\n",g_val);
	printf("%d\n", Add(10, 30));
	return 0;
}