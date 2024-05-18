#define _CRT_SECURE_NO_WARNINGS
//定义函数，交换两个整型变量的值
# include <stdio.h>

void Swap(int* px, int* py)
{
	int z = 0;
	z = *px;
	*px = *py;
	*py = z;
}
//在实参传递给形参的时候，形参是实参的一份临时拷贝。
//对形参的修改不会影响实参。
//如果想要修改实参的值，那么需要传递地址，形参设置为指针变量。
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("交换前：a = %d, b = %d\n", a, b);

	Swap(&a, &b);
	
	printf("交换后：a = %d, b = %d\n", a, b);

	return 0;
}