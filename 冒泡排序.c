#define _CRT_SECURE_NO_WARNINGS
//冒泡排序算法

# include <stdio.h>

//数组传参，形参可以写成：1.数组2.指针
bubble_sort(int arr[], int sz)
{
	//趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])//升序
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//0 1 2 3 4 5 6 7 8 9
	//计算数组的长度
	int sz = sizeof(arr) / sizeof(arr[0]);

	//利用冒泡排序算法，使数组的排序变为升序
	bubble_sort(arr, sz);
	//注意：数组传参时传入的是首元素的地址，
	// 所以数组长度无法在函数内部计算，需要外部传入。
	// 
	//输出
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}