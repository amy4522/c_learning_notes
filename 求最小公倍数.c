#define _CRT_SECURE_NO_WARNINGS
//������A��������B ����С��������ָ �ܱ�A��B��������С��������ֵ�����һ���㷨��������A��B����С��������

//���ݷ�Χ��1 <= a,b <= 100000
#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);

    //������С������,�Ӷ��ߵĽϴ�ֵ�����������ӣ�����ܹ�ͬʱ����a��b��������С������
   /* int m = (a > b ? a : b);
    while (1)
    {
        if (m % a == 0 && m % b == 0)
        {
            break;
        }
        m++;
    }*/

    //����2��������С������
    int i = 1;
    while (i * a % b)
    {
        i++;
    }
    printf("%d\n", i * a);
    return 0;
}
