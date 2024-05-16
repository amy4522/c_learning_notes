#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <stdlib.h>

int main()
{
	char arr1[] = "Do you love me???";
	char arr2[] = "#################";

	int left = 0;
	int right = strlen(arr1) - 1; //int right = sizeof(arr1) / sizeof(arr[0]) - 2;因为字符串后面还有一个默认的\0，所以要 - 2.

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		
		printf("%s\n", arr2);
		Sleep(1000);
		//清空屏幕
		system("cls"); //system库函数，能够执行系统命令
		left++;
		right--;
	}
	printf("%s\n", arr2);

	return 0;
}