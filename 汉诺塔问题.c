#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

void print(char x, char y)
{
	printf("%c -> %c\n", x, y);
}

void move(int n, char start, char temp, char end)
{
	if (n == 1)
		print(start, end);
	else
	{
		move(n - 1, start, end, temp);
		print(start, end);
		move(n - 1, temp, start, end);
	}
}

int main()
{
	move(3, 'A', 'B', 'C');
	return 0;
}