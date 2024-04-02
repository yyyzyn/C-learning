#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//函数的学习

//加法函数的编写
//int Add(int x,int y)//形式参数，形参
//{
//	int z = 0;
//	z = x + y;//两者相加
//	return z;
//}


//void test(int n)
//{
//	if (n <= 0)
//		return;
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d  %d", &a, &b);
//	int r = Add(a, b);//调用函数，a和b是真实传递给Add函数的参数
//	a，b是实参(实际参数)
// 	printf("%d\n", r);//输出
//
//	test(5);

//	return 0;
//}

//void set_arr(int arr[],int siz)
//
//{
//	int i = 0;
//	for (i = 0; i < siz; i = i + 1)
//	{
//		arr[i] = -1;//注意变量的选取
//	}
//}

//void print_arr(int arr2[], int siz2)
//{
//	int i = 0;
//	for (i = 0; i < siz2; i = i + 1)
//	{
//		printf(" %d", arr2[i]);
//	}
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int siz = sizeof(arr) / sizeof(arr[0]);
//	set_arr(arr,siz);//设置数组内容为-1
//	print_arr(arr, siz);//打印数组内容
//	return 0;
//}


//函数嵌套调用
//练习：计算某年某月有多少天

int leap_year(int y)
{
	if (((y%4==0)&&(y%100!=0))||(y%400==0))
		return 1;
	else
		return 0;
}


int get_days_month(int y,int m)
{
	int days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int day = days[m];
	if (leap_year(y) && m == 2)
		day +=1;

	return day;
}

int main()
{
	int year = 0;
	int month = 0;
	scanf(" %d  %d", &year, &month);
	int days = get_days_month(year, month);
	printf("%d\n",days);
	return 0;
}