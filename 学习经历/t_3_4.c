#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//do while���ѧϰ
//1-10��ӡ


int main()
{
	/*int i = 1;
	do
	{
		printf("  %d", i);
		i = i + 1;
	} while (i <= 10);*/

	/*int n = 0;*/
	/*scanf("%d", &n);
	int cnt = 0;
	do
	{
		cnt++;
		n = n / 10;
	} while (n);
	printf("%d", cnt);*/

	//contine��������������ѭ����continue��ߴ��룬ֱ��ȥ�жϲ��֣�������һ���ж�

	//int i = 1;
	//while (i <= 10)
	//{
	//	if (i == 5)
	//		break;//��i=5ʱ����ִ��break��ѭ������ֹ
	//	printf(" %d", i);
	//	i = i + 1;
	//}

	int i = 1;
	for (i = 1; i <= 10; i = i + 1)
	{
		/*if (i == 5)
			break;*/
		if (i == 5)//����д�����������ѭ����������5
			continue;
		printf(" %d", i);
	}

	//do while����е�break��continue���ú�whileѭ������һģһ��

	/*int i = 1;
	do
	{
		if (i == 5)
			break;
		printf(" %d", i);
		i = i + 1;
	} while (i <= 10);*/

	/*int i = 1;
	do
	{
		if (i == 5)
			continue;
		printf(" %d", i);
		i = i + 1;
	} while (i <= 10);*/


	return 0;
}