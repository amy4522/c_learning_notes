#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//定义一个学生结构体
struct Stu
{
	//成员
	char name[20];
	int age;
	char sex[10];
	char tele[12];
};
void print(struct Stu* ps)
{
	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
	//- >
	//结构体指针变量->成员名
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
};
int main()
{
	struct Stu s = { "张三", 20, "男", "13326554335" };
	//访问结构体对象：
	// 1.结构体对象.成员名
	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
	//2.定义函数，运用结构体指针变量
	print(&s);
	return 0;
}
