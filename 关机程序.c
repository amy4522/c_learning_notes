#define _CRT_SECURE_NO_WARNINGS
//�ػ�����
//1.�������У�1����֮�ڵ��Թػ�
//2.������룺������ȡ���ػ�
# include <stdio.h>
# include <windows.h>
# include <string.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ��Խ���1�����ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s", &input);
	
	//�ж������ַ�����ȣ�strcmp
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again; //Ҳ������ѭ�� + break�ķ������goto���
	}

	return 0;
}