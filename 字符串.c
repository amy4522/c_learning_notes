#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//������룬��ӡ�����ʲô��Ϊʲô����ͻ��'\0'����Ҫ�ԣ�
int main()
{
	char arr1[] = "bit";
	char arr2[] = { 'b', 'i', 't' };
	char arr3[] = { 'b', 'i', 't', '\0' };
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	//ת���ַ�
	printf("%d\n", strlen("abcdef"));
	printf("%d\n", strlen("c:\test\628\test.c"));
	return 0;
}