#include<stdio.h>

//�ַ�����С�Ĳ���
//sizeof�����ʹ��
//�����ַ����͵Ĵ�С

//%d��ʾ��ӡ������������ӡ�����з��ŵ�����
//%u��ʾ��ӡ�����޷�������




int main()
{
	int a = 10;
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	printf("%zd\n", sizeof(char));
	printf("%zd\n", sizeof(short));
	printf("%zd\n", sizeof(long));
	printf("%zd\n", sizeof(long long));
	printf("%zd\n", sizeof(float));
	printf("%zd\n", sizeof(double));
	printf("%zd\n", sizeof(long double));
	return 0;
}