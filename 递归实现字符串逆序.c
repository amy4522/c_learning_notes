#define _CRT_SECURE_NO_WARNINGS
//�ݹ�ʵ���ַ�������,������ʹ�ÿ⺯�����ַ�������
// �ַ������ݷ����˱仯�����������ӡ

# include<stdio.h>

//void reverse(char arr[])
//{
//	//�ǵݹ�
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

//���ַ�������
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

//�ݹ�ʵ��,ָ������ʽ������һ��ָ������
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

//�ݹ�ʵ�֣������Լ�������ʽ���������
void reverse(char arr[], int left, int right)
{
	char tmp = arr[left];
	arr[left] = arr[right];
	arr[right] = tmp;
	if (left < right)
		reverse(arr, left + 1, right - 1);
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