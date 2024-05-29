#define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>

//DigitSum(1234)
//DigitSum(123) + 4
//DigitSum(12) + 3 + 4
//DigitSum(1) + 2 + 3 + 4

int DigitSum(unsigned int n)
{
	if (n > 9)
		return DigitSum(n / 10) + n % 10;
	else
		return n;
}

int main()
{
	unsigned int n = 0;
	scanf("%u", &n);
	int sum = DigitSum(n);
	printf("%d\n", sum);
	return 0;
}