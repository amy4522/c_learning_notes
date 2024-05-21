#define _CRT_SECURE_NO_WARNINGS
//一只青蛙一次可以跳1级台阶，也可以一次跳2级台阶。如果青蛙要跳上n级台阶，共几种跳法？
//n = 1, ret = 1
//n = 2, ret = 2
//n = 3, ret = 1 + 2 = 3
//n = 4, ret = 3 + 2 = 5
//n = 5, ret = 5 + 3 = 8
//…
//青蛙先跳1级，还剩n - 1级台阶，青蛙先跳2级，还剩n - 2级台阶。
# include <stdio.h>

int Frog_jump(int n)//计算青蛙跳台阶的跳法
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else
		return Frog_jump(n - 1) + Frog_jump(n - 2);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Frog_jump(n);
	printf("%d\n", ret);
	return 0;
}