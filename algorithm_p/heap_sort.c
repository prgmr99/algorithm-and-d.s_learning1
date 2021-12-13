#include <stdio.h>

int number = 9;
int heap[9] = { 7,6,5,8,3,5,9,1,6 };

int main(void)
{
	// 힙 구성(트리 구조를 최대 힙 구조로 변환)
	for (int i = 1; i < number; i++) {
		int c = i;
		do {
			int root = (c - 1) / 2; // 이진트리 특성을 이용한 문장 -> 자식이 2명 이하이니까 /2를 활용했다.
			if (heap[root] < heap[c]) {
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			c = root;
		} while (c != 0);  // 인덱스 0까지 가기 위함이다. 즉, 최상위 부모의 노드까지 접근하기 위해서 필요한 문장.
	}

	// 크기를 줄여가며 반복적으로 힙을 구성
	// 힙 구조로 변경하고 값을 교환하고 다시 힙 구조로 변경하고 값을 교환하는 방식
	for (int i = number - 1; i >= 0; i--) {
		int temp = heap[0];
		heap[0] = heap[i];
		heap[i] = temp;
		int root = 0;
		int c = 1;
		do {
			c = 2 * root + 1;
			if (c < i - 1 && heap[c] < heap[c + 1]) {
				c++;
			}
			if (c < i && heap[root] < heap[c]) {
				temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			root = c;
		} while (c < i);
	}

	// 결과 출력
	for (int i = 0; i < number; i++)
		printf("%d ", heap[i]);

	return 0;
}