#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char ch = 'w';
	char* pc = &ch;
	//char* p������һ��ָ��char����ָ��p������ʹ��*���Ű�p����Ϊָ��)
	// ����ʼ��pʹ��ָ��char���͵ı���ch������&ch�е�&��ȡ��ַ������
	// ��&������һ��������ʱ���������˸ö���ĵ�ַ��

	*pc = 'q';
	//*������Ϊ�����ò�������������ָ��p��ָ�Ķ�����ֵ����
	
	printf("%c\n", ch);


	//ָ������Ĵ�Сȡ���ڵ�ַ�Ĵ�С
	//32λƽ̨�µ�ַ��32��bitλ����4���ֽڣ�
	//64λƽ̨�µ�ַ��64��bitλ����8���ֽڣ�
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(double*));
	return 0;
}