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
		{"张三",22,"M",88,99,100,"闽南支队"},
		{"李四",23,"F",98,99,95,"两广支队"},
		{"刘五",20,"M",88,89,90,"东北支队"},
	};

	printf("姓名: %s\n", stu[0].name);
	printf("年龄: %d\n", stu[0].age);
	printf("性别: %s\n", stu[0].sex='M'?"男":"女");
	printf("成绩1: %d\n", stu[0].score[0]);
	printf("成绩2: %d\n", stu[0].score[1]);
	printf("成绩3: %d\n", stu[0].score[2]);
	printf("地址: %s\n", stu[0].add);



	return 0;
}