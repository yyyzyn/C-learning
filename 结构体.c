#include<stdio.h>

//struct �ṹ����
//{
// �ṹ���Ա�б�
// ����
// ����
// �ɼ�
//}

struct student
{
	char name[20];
	int age;
	int score;
	char add[51];

};


int main()
{
	//�����ṹ�����
	struct student  stu;
	//stu.name = "����";
	strcpy(stu.name, "����");
	stu.age = 18;
	stu.score = 100;
	//stu.add = "�Ͼ�����";
	strcpy(stu.add, "�Ͼ�����");

	printf("����: %s\n", stu.name);
	printf("����: %d\n", stu.age);
	printf("�ɼ�: %d\n", stu.score);
	printf("��ַ: %s\n", stu.add);

	return 0;

	//�ڶ��ֶ��巽ʽ
	//struct student stu = {"����",18,100,"�Ͼ�����"}��

}
