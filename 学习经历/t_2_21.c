#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//�����ʽ���޶����
//scanf����ʹ��
int main()
{
	//printf("%d\n",123);
	//printf("%5d\n", 123);//�Ҷ���
	//printf("%5d\n", 1234567);//�Ҷ���
	//printf("%-5dhehe\n", 123);//�����

	int score = 0;
	printf("������ɼ���");
	scanf("%d\n",&score);//scanf_sֻ��VS���У�����ֲ��̫��
	printf("�ɼ��ǣ�%d\n",score);
	return 0;
}