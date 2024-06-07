#define _CRT_SECURE_NO_WARNINGS
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，问：20元可以喝多少瓶汽水？
#include <stdio.h>

int main()
{
	int money = 0;
	scanf("%d", &money);
	//int total = money;
	//int empty = money;

	////置换
	//while (empty >= 2)
	//{
	//	total += empty / 2;
	//	empty = empty / 2 + empty % 2;
	//}
	//printf("%d\n", total);

	//总结规律
	if (money > 0)
		printf("%d\n", 2 * money - 1);
	else
		printf("&d\n", 0);
	return 0;
}