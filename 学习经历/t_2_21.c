#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//输出格式和限定宽度
//scanf函数使用
int main()
{
	//printf("%d\n",123);
	//printf("%5d\n", 123);//右对齐
	//printf("%5d\n", 1234567);//右对齐
	//printf("%-5dhehe\n", 123);//左对齐

	int score = 0;
	printf("请输入成绩：");
	scanf("%d\n",&score);//scanf_s只有VS才有，可移植性太差
	printf("成绩是：%d\n",score);
	return 0;
}