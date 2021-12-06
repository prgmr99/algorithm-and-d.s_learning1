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

//1,000,000개이면 n log n으로 풀어야 한다. n^2으로 풀면 양이 어머어마함.

