#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void BulSort(int arr[],int len) //ð��������
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
	int n = 0;//ͬʱ�����ֵ����С��Ҫ�����±����
	int flag = 0;
	int pos = 0;//������¼���һ�ν�����λ��
	int k = len - 1;
	for (i = 0; i < len - 1; i++)//ȷ����������
	{
		pos = 0;
		flag = 0;
		//����Ѱ�����ֵ
		for (j = n; j < k; j++)//ȷ���Ƚϴ���
		{
			if (arr[j]>arr[j + 1])
			{
				//����
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 1;//������
				pos = j;//����Ԫ�أ���¼���һ�ν�����λ��
			}
		}
		if (flag == 0)//���û�н�����Ԫ�أ����Ѿ�����,ֱ�ӽ���
		{
			return;
		}
		k = pos;//��һ�αȽϵ���¼λ�ü���
		//����Ѱ����Сֵ
		for (j = k; j > n; j--)
		{
			int tmp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = tmp;
			flag = 1;
		}
		n++;
		if (flag == 0)//���û�н�����Ԫ�أ����Ѿ�����,ֱ�ӽ���
		{
			return;
		}
	}
}
void ShowArr(int arr[],int len)//��ӡ����
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