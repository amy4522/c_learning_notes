#define _CRT_SECURE_NO_WARNINGS
//关机程序
//1.程序运行，1分钟之内电脑关机
//2.如果输入：我是猪，取消关机
# include <stdio.h>
# include <windows.h>
# include <string.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑将在1分钟内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", &input);
	
	//判断两个字符串相等，strcmp
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again; //也可以用循环 + break的方法替代goto语句
	}

	return 0;
}