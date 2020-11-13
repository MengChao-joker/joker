#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void BulSort(int arr[],int len) //冒泡排序函数
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tem = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tem;
//			}
//		}
//}
//}
void BubbleSort(int arr[], int len)
{
	int i = 0;
	int j = 0;
	int n = 0;//同时找最大值的最小需要两个下标遍历
	int flag = 0;
	int pos = 0;//用来记录最后一次交换的位置
	int k = len - 1;
	for (i = 0; i < len - 1; i++)//确定排序趟数
	{
		pos = 0;
		flag = 0;
		//正向寻找最大值
		for (j = n; j < k; j++)//确定比较次数
		{
			if (arr[j]>arr[j + 1])
			{
				//交换
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 1;//加入标记
				pos = j;//交换元素，记录最后一次交换的位置
			}
		}
		if (flag == 0)//如果没有交换过元素，则已经有序,直接结束
		{
			return;
		}
		k = pos;//下一次比较到记录位置即可
		//反向寻找最小值
		for (j = k; j > n; j--)
		{
			int tmp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = tmp;
			flag = 1;
		}
		n++;
		if (flag == 0)//如果没有交换过元素，则已经有序,直接结束
		{
			return;
		}
	}
}
void ShowArr(int arr[],int len)//打印函数
{
	for( int i = 0; i < len; i++)
	{
		printf("%d " , arr[i]);
	
	}
	printf("\n");

}
int main()
{
	int arr[] = { 1, 56, 3, 23, 14, 41 };
	int len = sizeof(arr) / sizeof (arr[0]);
	ShowArr(arr, len);
	BubbleSort(arr, len);
	ShowArr(arr, len);
	return 0;




}