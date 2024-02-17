#include<stdio.h>

//字符串大小的操作
//sizeof命令的使用
//各个字符类型的大小

//%d表示打印的是整数，打印的是有符号的整数
//%u表示打印的是无符号整数




int main()
{
	int a = 10;
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	printf("%zd\n", sizeof(char));
	printf("%zd\n", sizeof(short));
	printf("%zd\n", sizeof(long));
	printf("%zd\n", sizeof(long long));
	printf("%zd\n", sizeof(float));
	printf("%zd\n", sizeof(double));
	printf("%zd\n", sizeof(long double));
	return 0;
}