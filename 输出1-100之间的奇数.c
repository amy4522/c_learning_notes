#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
 
int main()
{
	//���1-100֮�������
	int num = 1;
	while (num <= 100)
	{
		//�ж��Ƿ�������
		if (num % 2 == 1)
			printf("%d ", num);
		
		num++;
	}
	
	return 0;
}
//��2
//int i = 0;
//while (i <= 100)
//{
//		printf("%d ", i);
//		i += 2;
//}
