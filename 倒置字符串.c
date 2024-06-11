//倒置字符串，将一句话的单词进行倒置，标点不倒置
//例如：i like beijing.倒置为beijing. like i
#include <stdio.h>
#include<assert.h>
#include<string.h>

void reverse(char* left, char* right)
{
    assert(left);
    assert(right);//确保left,right不为空

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
    //输入
    char arr[100] = { 0 };
    gets(arr);

    //逆置
    int len = strlen(arr);
    //逆序整个字符串
    reverse(arr, arr + len - 1);
    //逆序每个单词
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

    //输出
    printf("%s\n", arr);
    return 0;
}