#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//��������
//��������ʲô������������ʲô������������ʲô
int leap_year(int y);//�����Ķ���
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}

int main()
{
	int year = 0;
	scanf("%d", &year);
	int r = leap_year(year);//�����ĵ���
	if (r == 1)
		printf("����\n");
	else
		printf("������\n");
	return 0;
}


int leap_year(int y)//�����Ķ���
{
	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
		return 1;
	else
		return 0;
}