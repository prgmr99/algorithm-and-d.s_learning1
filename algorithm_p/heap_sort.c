#include <stdio.h>

int number = 9;
int heap[9] = { 7,6,5,8,3,5,9,1,6 };

int main(void)
{
	// �� ����(Ʈ�� ������ �ִ� �� ������ ��ȯ)
	for (int i = 1; i < number; i++) {
		int c = i;
		do {
			int root = (c - 1) / 2; // ����Ʈ�� Ư���� �̿��� ���� -> �ڽ��� 2�� �����̴ϱ� /2�� Ȱ���ߴ�.
			if (heap[root] < heap[c]) {
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			c = root;
		} while (c != 0);  // �ε��� 0���� ���� �����̴�. ��, �ֻ��� �θ��� ������ �����ϱ� ���ؼ� �ʿ��� ����.
	}

	// ũ�⸦ �ٿ����� �ݺ������� ���� ����
	// �� ������ �����ϰ� ���� ��ȯ�ϰ� �ٽ� �� ������ �����ϰ� ���� ��ȯ�ϴ� ���
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

	// ��� ���
	for (int i = 0; i < number; i++)
		printf("%d ", heap[i]);

	return 0;
}