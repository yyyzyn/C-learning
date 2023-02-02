#include<stdio.h>

//struct 结构体名
//{
// 结构体成员列表
// 姓名
// 年龄
// 成绩
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
	//创建结构体变量
	struct student  stu;
	//stu.name = "张三";
	strcpy(stu.name, "张三");
	stu.age = 18;
	stu.score = 100;
	//stu.add = "南京南邮";
	strcpy(stu.add, "南京南邮");

	printf("姓名: %s\n", stu.name);
	printf("年龄: %d\n", stu.age);
	printf("成绩: %d\n", stu.score);
	printf("地址: %s\n", stu.add);

	return 0;

	//第二种定义方式
	//struct student stu = {"张三",18,100,"南京南邮"}；

}
