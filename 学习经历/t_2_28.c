#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	//�߼�ȡ�������
	/*int flag = 0;
	if (!flag)
	{
		printf("do something\n");
	}*/

	//�������

	//������жϣ������ܱ�4�����Ҳ��ܱ�100�������ܱ�400����
	int year = 0;
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		printf("������\n");
	else
		printf("��������\n");


	return 0;
}