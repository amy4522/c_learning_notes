#define _CRT_SECURE_NO_WARNINGS
//小乐乐获得4个最大数，请帮他编程找到最大的数。
#include <stdio.h>

int main()
{
    //定义一个数组存储输入的整数
    int arr[4] = { 0 };
    int i = 0;
    while (i < 4)
    {
        scanf("%d", &arr[i]);
        i++;
    }

    //排序
    int max = arr[0];
    i = 1;
    while (i < 4)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        i++;
    }

    //输出
    printf("%d", max);

    return 0;
 }


////法2：不使用数组存储，直接比较
//#include <stdio.h>
//
//int main()
//{
//    //直接比较
//    int i = 1;
//    int n = 0;
//    int max = 0;
//
//    //假设第一个数是最大数
//    scanf("%d", &max);
//    while (i < 4)
//    {
//        scanf("%d", &n);
//        if (n > max)
//            max = n;
//        i++;
//    }
//
//
//    //输出
//    printf("%d", max);
//
//    return 0;
//}