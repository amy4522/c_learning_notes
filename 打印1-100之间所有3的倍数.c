#define _CRT_SECURE_NO_WARNINGS
//打印1-100之间所有3的倍数
# include <stdio.h>

int main()
{
	int i = 0;
	/*for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("%d ", i);
	}*/
	//方法2
	for (i = 3; i <= 100; i += 3)
		printf("%d ", i);
	return 0;
}