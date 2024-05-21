#define _CRT_SECURE_NO_WARNINGS

//编写函数，实现一个整型有序数组的二分查找

# include <stdio.h>

int binary_search(int arr[], int k, int sz)//在这里arr[]是一个指针变量
//数组传参实际上传递的是数组首元素的地址，而不是整个数组，所以在函数内部计算数组元素的个数是不靠谱的。
{
	int left = 0;
	int right = sz - 1;
	
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;//找到了，返回下标
		}
	}
	return -1;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 17;
	int sz = sizeof(arr) / sizeof(arr[0]);

	//找到，返回下标
	//找不到，返回-1
	
	int ret = binary_search(arr, k, sz);
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
	}

	return 0;
}