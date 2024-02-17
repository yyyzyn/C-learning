#include<stdio.h>

int global=2023;

//变量的定义与使用
int main()
{
    int local=2018;
    printf("%d\n",local);
    printf("%d\n",global);
    return 0;
}