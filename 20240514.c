#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//����һ��ѧ���ṹ��
struct Stu
{
	//��Ա
	char name[20];
	int age;
	char sex[10];
	char tele[12];
};
void print(struct Stu* ps)
{
	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
	//- >
	//�ṹ��ָ�����->��Ա��
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
};
int main()
{
	struct Stu s = { "����", 20, "��", "13326554335" };
	//���ʽṹ�����
	// 1.�ṹ�����.��Ա��
	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
	//2.���庯�������ýṹ��ָ�����
	print(&s);
	return 0;
}