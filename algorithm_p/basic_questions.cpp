#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//bj2750
//bubble sort
/*int main(void)
{
	int num = 0;
	int temp, i, j;
	scanf("%d", &num);
	int* arr = (int*)malloc(sizeof(int) * num);
	for (i = 0; i < num; i++)
		scanf("%d", &arr[i]);

	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num - i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (i = 0; i < num; i++)
		printf("%d\n", arr[i]);
	return 0;
}*/

//selection sort
/*int main(void)
{
	int i, j, temp, index, min;
	int size;
	scanf("%d", &size);
	int* arr = (int*)malloc(sizeof(int) * size);
	for (i = 0; i < size; i++)
		scanf("%d", &arr[i]);

	for (i = 0; i < size; i++)
	{
		min = 9999;
		for (j = i; j < size; j++)
		{
			if (arr[j] < min)
			{
				min = arr[j];
				index = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}

	for (i = 0; i < size; i++)
		printf("%d\n", arr[i]);

	return 0;
}*/

//bj2752
/*int main(void)
{
	int arr[3];
	int i, j, temp;
	for (i = 0; i < 3; i++)
		scanf("%d", &arr[i]);

	for (i = 0; i < 2; i++)
	{
		j = i;
		while (arr[j] > arr[j + 1])
		{
			temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
			j--;
		}
	}

	for (i = 0; i < 3; i++)
		printf("%d ", arr[i]);
	return 0;
}*/

/*int array[3];

int main(void)
{
	int i, j, min, index, temp;
	for (i = 0; i < 3; i++)
		scanf("%d", &array[i]);

	for (i = 0; i < 3; i++)
	{
		min = 1000001;
		for (j = i; j < 3; j++)
		{
			if (array[j] < min)
			{
				min = array[j];
				index = j;
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}

	for (i = 0; i < 3; i++)
		printf("%d ", array[i]);

	return 0;
}*/

//1,000,000���̸� n log n���� Ǯ��� �Ѵ�. n^2���� Ǯ�� ���� ��Ӿ��.

//bj2751

void quickSort(int* data, int start, int end)
{
	if (start >= end)
		return;

	int key = start;
	int i = start + 1;
	int j = end;
	int temp;

	while (i <= j)
	{
		while (data[i] <= data[key])
			i++;
		while (data[j] >= data[key] && j > start)
			j--;
		if (i > j)
		{
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else
		{
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}
	}
	quickSort(data, start, j - 1);
	quickSort(data, j + 1, end);
}

int main(void)
{
	int size;
	scanf("%d", &size);
	int* arr = (int*)malloc(sizeof(int) * size);
	for (int i = 0; i < size; i++)
		scanf("%d", &arr[i]);

	quickSort(arr, 0, size - 1);

	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);

	return 0;
}