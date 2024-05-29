#define _CRT_SECURE_NO_WARNINGS
//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��

# include<stdio.h>

//k = 0, n^k = 1
//k > 0, Pow(n, k) - > n * Pow(n, k - 1)
//k < 0, 1.0 / Pow(n, -k)
double Pow(int n, int k)
{
	if (k > 0)
		return n * Pow(n, k - 1);
	else if (k == 0)
		return 1;
	else
		return 1.0 / Pow(n, -k);
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret = Pow(n, k);

	printf("%lf\n", ret);
	return 0;
}