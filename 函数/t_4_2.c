#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"add.h"

//�������ļ�����

void test()
{
	static int i = 0;//������´����������̣�ʹ��֮ǰ������ֵ��������������û�иı�
	i++;
	printf(" %d\n", i);
}


extern int g_val;//�����ⲿ����
extern int Add(int x, int y);//�����ⲿ��������

int main()
{
	//int a = 0;
	//int b = 0;
	//scanf("%d  %d",&a,&b);
	//int ret = Add(a, b);
	//printf(" %d\n",ret);
	int i = 0;
	for (i = 0; i < 5; i++)//ѭ��5��
	{
		test();
	}
	printf("%d\n",g_val);
	printf("%d\n", Add(10, 30));
	return 0;
}