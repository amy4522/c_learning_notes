#define _CRT_SECURE_NO_WARNINGS
//����������ʱ���������ַ����ĳ���
//ģ��ʵ��strlen

# include <stdio.h>

//int my_strlen(char* str)
//{
//	int count = 0;//������������ʱ����
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//ָ��-ָ��
//int my_strlen(char* str)
//{
//	int count = 0;//������������ʱ����
//	int* start = str;
// 
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return str - start;
//}

//�ݹ����
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
	int len = my_strlen(arr);//�������������Ԫ�صĵ�ַ
	
	printf("%d\n", len);
	return 0;
}