#include<stdio.h>
#include <stdlib.h>
#include<time.h>

//随机函数的应用
//rand函数是伪随机数，对一个“种子”的基准值进行运算生成的随机数。
//srand函数是用来设置“种子”的基准值。



int main()
{
	srand((unsigned int)time(NULL));
	printf("%d\n", rand()%100);//余数范围0—99
	printf("%d\n", rand()%100+1);//余数范围1—100
	printf("%d\n", 100+rand()%(200-100+1));//余数范围100-200
	printf("%d\n", rand());
	printf("%d\n", rand());
	return 0;
}