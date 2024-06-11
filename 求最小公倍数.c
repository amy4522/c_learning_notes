#define _CRT_SECURE_NO_WARNINGS
//正整数A和正整数B 的最小公倍数是指 能被A和B整除的最小的正整数值，设计一个算法，求输入A和B的最小公倍数。

//数据范围：1 <= a,b <= 100000
#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);

    //计算最小公倍数,从二者的较大值出发，逐次相加，如果能够同时整除a和b，即得最小公倍数
   /* int m = (a > b ? a : b);
    while (1)
    {
        if (m % a == 0 && m % b == 0)
        {
            break;
        }
        m++;
    }*/

    //方法2，计算最小公倍数
    int i = 1;
    while (i * a % b)
    {
        i++;
    }
    printf("%d\n", i * a);
    return 0;
}
