//�����ַ�������һ�仰�ĵ��ʽ��е��ã���㲻����
//���磺i like beijing.����Ϊbeijing. like i
#include <stdio.h>
#include<assert.h>
#include<string.h>

void reverse(char* left, char* right)
{
    assert(left);
    assert(right);//ȷ��left,right��Ϊ��

    while (left < right)
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;

        left++;
        right--;
    }
}

int main()
{
    //����
    char arr[100] = { 0 };
    gets(arr);

    //����
    int len = strlen(arr);
    //���������ַ���
    reverse(arr, arr + len - 1);
    //����ÿ������
    char* start = arr;

    while (*start)
    {
        char* end = start;
        while (*end != ' ' && *end != '\0')
        {
            end++;
        }
        reverse(start, end - 1);
        if (*end != '\0')
            end++;
        start = end;
    }

    //���
    printf("%s\n", arr);
    return 0;
}