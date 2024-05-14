#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
 
int main()
{
	//输出1-100之间的奇数
	int num = 1;
	while (num <= 100)
	{
		//判断是否是奇数
		if (num % 2 == 1)
			printf("%d ", num);
		
		num++;
	}
	
	return 0;
}
//法2
//int i = 0;
//while (i <= 100)
//{
//		printf("%d ", i);
//		i += 2;
//}
