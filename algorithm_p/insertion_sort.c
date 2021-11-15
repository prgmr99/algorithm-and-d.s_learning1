#include <stdio.h>

int main(void)
{
	int i, j, temp;
	int array[10] = { 1,10,5,8,7,6,4,3,2,9 };
	for (i = 0; i < 9; i++) // 뒤의 것부터 삽입하는 거니까 총 9번 반복하는 것. 만약 첫 번째 값이 10이라면 저절로 맨 뒤로 갈 것이다.
	{
		j = i;
		while (array[j] > array[j + 1]) {
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
			j--;   // ex) i=1일 때, array[1]와 array[2]비교 후 j--하여 array[0]와 array[1]을 다시 비교.
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
	return 0;
}
