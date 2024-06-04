#define _CRT_SECURE_NO_WARNINGS
//不允许创建临时变量，求字符串的长度
//模拟实现strlen

# include <stdio.h>

//int my_strlen(char* str)
//{
//	int count = 0;//用来计数的临时变量
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//指针-指针
//int my_strlen(char* str)
//{
//	int count = 0;//用来计数的临时变量
//	int* start = str;
// 
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return str - start;
//}

//递归求解
//my_strlen("abc")
//1 + my_strlen("bc")
//1 + 1 + my_strlen("c")
//1 + 1 + 1 +my_strlen("")
//1 + 1 + 1 + 0

int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}

int main()
{
	char arr[] = "abc";//[a b c \0]
	int len = my_strlen(arr);//传入的是数组首元素的地址
	
	printf("%d\n", len);
	return 0;
}