#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//游戏函数
void game()
{
	//生成随机数
	int r = rand()%100+1;
	//猜数字
	int guess = 0;
	int count = 5;
	while (count)
	{
		printf("\n你还有%d次机会\n", count);
		printf("请输入要猜的数字：>");
		scanf("%d", &guess);
		if (guess < r)
		{
			printf("猜小了\n");
		}
		else if (guess > r)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
		count = count - 1;
	}
	if (count == 0)
	{
		printf("游戏失败\n");
	}
}



//菜单函数
void menu()
{
	printf("***********************\n");
	printf("***     1. play     ***\n");
	printf("***     0. exit     ***\n");
	printf("***********************\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);//输入1和0
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;

		}
	} while (input);
	return 0;
}