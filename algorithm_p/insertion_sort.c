#include <stdio.h>

int main(void)
{
	int i, j, temp;
	int array[10] = { 1,10,5,8,7,6,4,3,2,9 };
	for (i = 0; i < 9; i++) // ���� �ͺ��� �����ϴ� �Ŵϱ� �� 9�� �ݺ��ϴ� ��. ���� ù ��° ���� 10�̶�� ������ �� �ڷ� �� ���̴�.
	{
		j = i;
		while (array[j] > array[j + 1]) {
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
			j--;   // ex) i=1�� ��, array[1]�� array[2]�� �� j--�Ͽ� array[0]�� array[1]�� �ٽ� ��.
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
	return 0;
}
