#define _CRT_SECURE_NO_WARNINGS
//С���ֻ��4������������������ҵ���������
#include <stdio.h>

int main()
{
    //����һ������洢���������
    int arr[4] = { 0 };
    int i = 0;
    while (i < 4)
    {
        scanf("%d", &arr[i]);
        i++;
    }

    //����
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

    //���
    printf("%d", max);

    return 0;
 }


////��2����ʹ������洢��ֱ�ӱȽ�
//#include <stdio.h>
//
//int main()
//{
//    //ֱ�ӱȽ�
//    int i = 1;
//    int n = 0;
//    int max = 0;
//
//    //�����һ�����������
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
//    //���
//    printf("%d", max);
//
//    return 0;
//}