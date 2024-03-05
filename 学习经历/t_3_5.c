#include<stdio.h>

//找出100-200之间的素数，打印在屏幕上
int main()
{
	int i = 0;
	int count = 0;//统计个数
	//产生100-200的数字
	for (i = 100; i <= 200; i++)
	{
		//判断i是否是素数
		//如果是素数就打印，不是素数就跳过
		//拿2-i-1之间的数字挨个试除i，如果其中有一个数字整除了i，i不是素数
		//如果所有数字都不能被整除i，i为素数
		int j = 0;
		int flag = 1;//假设i是素数
		for (j = 2; j < i-1; j = j + 1)
		{
			if (i % j == 0)
			{
				flag = 0;//证明不是素数
				break;
			}
				

		}
		if (flag == 1)//证明是素数
		{
			printf(" %d", i);
			count = count + 1;
		}
			

	}
	printf("\ncount= %d\n", count);

    
	
	return 0;
}