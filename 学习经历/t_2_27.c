#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//int num = 0;
	//scanf("%d", &num);
	//if (num == 0)//����
	//	printf("�����������0\n");
	//else if (num > 0)//�����ifǶ����else������棬�γ�Ƕ�׽ṹ
	//	printf("���������������\n");
	//else
	//	printf("����������Ǹ���\n");

	//����һ���������ж�������������ż��������������������������

	//int num = 0;
	//scanf("%d", &num);
	//if (num > 0)
	//{
	//	//�ж�����ż��
	//	if (num % 2 == 0)
	//	{
	//		printf("����ż��\n");
	//	}
	//	else
	//	{
	//		printf("��������\n");
	//	}
	//}

	//else
	//{
	//	printf("���Ƿ�����\n");
	//}

	//����������
	/*int a = 0;
	int b = 0;
	scanf("%d", &a);
	b = a > 5 ? 3 : -3;
	printf("%d\n",b);*/

	//�����������ֵ
	int a = 0;
	int b = 0;
	scanf("%d" "%d", &a ,&b);
	int m = a > b ? a : b;
	printf("%d\n", m);

	return 0;
}