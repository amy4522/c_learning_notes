#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <stdlib.h>

int main()
{
	char arr1[] = "Do you love me???";
	char arr2[] = "#################";

	int left = 0;
	int right = strlen(arr1) - 1; //int right = sizeof(arr1) / sizeof(arr[0]) - 2;��Ϊ�ַ������滹��һ��Ĭ�ϵ�\0������Ҫ - 2.

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		
		printf("%s\n", arr2);
		Sleep(1000);
		//�����Ļ
		system("cls"); //system�⺯�����ܹ�ִ��ϵͳ����
		left++;
		right--;
	}
	printf("%s\n", arr2);

	return 0;
}