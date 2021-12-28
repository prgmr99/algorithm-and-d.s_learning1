#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int number = 7;
int checked[7];
vector<int> a[8]; // 1부터 7까지 인덱스를 차지하기 위한 것. 큰 의미는 없다.

void bfs(int start) {
	queue<int> q;
	q.push(start);
	checked[start] = true;
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		printf("%d ", x);
		for (int i = 0; i < a[x].size(); i++) {
			int y = a[x][i];
			if (!checked[y]) {
				q.push(y);
				checked[y] = true;
			}
		}
	}
}

int main(void) {
	a[1].push_back(2);
	a[2].push_back(1);

	a[1].push_back(3);
	a[3].push_back(1);

	a[2].push_back(3);
	a[3].push_back(2);

	a[2].push_back(4);
	a[4].push_back(2);

	a[2].push_back(5);
	a[5].push_back(2);

	a[4].push_back(5);
	a[5].push_back(4);

	a[3].push_back(7);
	a[7].push_back(3);

	a[3].push_back(3);
	a[6].push_back(6);
	
	a[6].push_back(7);
	a[7].push_back(6);

	bfs(1);

	return 0;
}