#include<stdio.h>

struct student
{
	char name[21];
	int age;
	char sex;
	int score[3];
	char add[51];

};

int main()
{
	struct student stu[3] =
	{
		{"����",22,"M",88,99,100,"����֧��"},
		{"����",23,"F",98,99,95,"����֧��"},
		{"����",20,"M",88,89,90,"����֧��"},
	};

	printf("����: %s\n", stu[0].name);
	printf("����: %d\n", stu[0].age);
	printf("�Ա�: %s\n", stu[0].sex='M'?"��":"Ů");
	printf("�ɼ�1: %d\n", stu[0].score[0]);
	printf("�ɼ�2: %d\n", stu[0].score[1]);
	printf("�ɼ�3: %d\n", stu[0].score[2]);
	printf("��ַ: %s\n", stu[0].add);



	return 0;
}