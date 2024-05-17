#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char ch = 'w';
	char* pc = &ch;
	//char* p定义了一个指向char类型指针p（我们使用*符号把p声明为指针)
	// 并初始化p使其指向char类型的变量ch，这里&ch中的&是取地址操作符
	// 当&作用于一个对象上时，它返回了该对象的地址。

	*pc = 'q';
	//*操作符为解引用操作符，它返回指针p所指的对象（左值）。
	
	printf("%c\n", ch);


	//指针变量的大小取决于地址的大小
	//32位平台下地址是32个bit位（即4个字节）
	//64位平台下地址是64个bit位（即8个字节）
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(double*));
	return 0;
}