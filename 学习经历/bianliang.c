#include<stdio.h>

int global=2023;

int main()
{
    int local=2018;
    printf("%d\n",local);
    printf("%d\n",global);
    return 0;
}