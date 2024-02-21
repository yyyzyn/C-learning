#include<stdio.h>

//算术操作符的学习

int main()
{
	/*乘法操作符的使用*/
	/*int num = 5;
	printf("%d\n", num * num);*/

	/*加法操作符的学习*/
	/*int x = 3 + 5;
	int y = x - 2;
	printf("%d\n", x);
	printf("%d\n", y);*/

	/*除号的使用*/

	// / 除号的两端都是整数的时候，计算的是整数除法，结果是整除之后的商~
	//%f 是专门用来打印浮点数的 - float,小数点后默认是打印6位
	//%lf 打印double类型的浮点数的


	//float x = 6.0/ 4;
	//printf("%f\n", x);
	//printf("%d\n", 6 / 3);
	//printf("%d\n", 6 / 4);

	/*求模运算*/
	//该运算符只能用于整数，不能用于浮点数，结果正负号由第一个运算数正负号决定
	/*printf("%d\n", 11 % -5);
	printf("%d\n", -11 % -5);
	printf("%d\n", -11 % 5);*/

	//printf限定宽度
	printf("%d\n", 123);
	printf("%5d\n", 123);
	return 0;
}