#include <stdio.h>

int main(void) {
	int temp;
	int count[5];
	int arr[30] = {
		1,3,2,4,4,3,2,5,1,2,4,1,2,2,3,1,1,1,1,2,3,1,1,2,1,
		1,3,3,2,4
	};
	for (int i = 0; i < 5; i++) {
		count[i] = 0;
	}
	for (int i = 0; i < 30; i++) {
		count[arr[i] - 1]++;
	}
	for (int i = 0; i < 5; i++) {
		if (count[i] != 0) {
			for (int j = 0; j < count[i]; j++)
				printf("%d", i + 1);
		}
	}
	return 0;
}