#define _CRT_SECURE_NO_WARNINGS
//在有序数组中寻找特定值
# include <stdio.h>

int main()
{
	////定义一个有序数组
	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//int k = 0;
	//int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//方法1，遍历数组元素依次查找
	/*for (i = 0; i < sz; i++)
	{
		if (arr[i] == k)
		{
			printf("找到了，该值下标为：%d\n", i);
			break;
		}
	}
	if (i == sz)
		printf("没找到");*/


	//方法2，二分法，折半查找，要求：有序数组
	//定义一个有序数组
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 0;

	int sz = sizeof(arr) / sizeof(arr[0]);

	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
			right = mid - 1;
		else if (arr[mid] < k)
			left = mid + 1;
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("找不到\n");
	return 0;
}