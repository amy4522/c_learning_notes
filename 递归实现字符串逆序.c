#define _CRT_SECURE_NO_WARNINGS
//递归实现字符串逆序,不允许使用库函数求字符串长度
// 字符串内容发生了变化，不是逆序打印

# include<stdio.h>

//void reverse(char arr[])
//{
//	//非递归
//	/*int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//		left++;
//		right--;
//	}*/
//}

//求字符串长度
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

//递归实现,指定了形式参数是一个指针的情况
//void reverse(char* str)
//{
//	char tmp = *str;//1
//	int len = my_strlen(str);
//	*str = *(str + len - 1);//2
//	*(str + len - 1) = '\0';//3
//	if(my_strlen(str + 1) >= 2)
//		reverse(str + 1);//4
//	*(str + len - 1) = tmp;//5
//}

//递归实现，可以自己定义形式参数的情况
//void reverse(char arr[], int left, int right)
//{
//	char tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp;
//	if (left < right)
//		reverse(arr, left + 1, right - 1);
//}//出现了一个bug，偶数个字符cd交换了2次

//修改版
void reverse(char arr[], int left, int right)
{
	if (left < right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		reverse(arr, left + 1, right - 1);
	}
}

int main()
{
	char arr[] = "abcdefg";//[a b c d e f g \0]
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int right = sz - 2;
	int left = 0;
	int right = my_strlen(arr) - 1;
	reverse(arr, left, right);

	printf("%s\n", arr);

	return 0;
}
