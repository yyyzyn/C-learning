#include<stdio.h>
#include <stdlib.h>
#include<time.h>

//���������Ӧ��
//rand������α���������һ�������ӡ��Ļ�׼ֵ�����������ɵ��������
//srand�������������á����ӡ��Ļ�׼ֵ��



int main()
{
	srand((unsigned int)time(NULL));
	printf("%d\n", rand()%100);//������Χ0��99
	printf("%d\n", rand()%100+1);//������Χ1��100
	printf("%d\n", 100+rand()%(200-100+1));//������Χ100-200
	printf("%d\n", rand());
	printf("%d\n", rand());
	return 0;
}