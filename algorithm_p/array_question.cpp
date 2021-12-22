#include <iostream>
#include <algorithm>
using namespace std;

string a[20000];
int num;

bool compare(string a, string b) {
	if (a.length() < b.length()) {		// 길이가 짧은 순서 우선
		return 1;
	}
	else if (a.length() > b.length()) {
		return 0;
	}
	else {		// 길이가 같은 경우
		return a < b;  // string의 경우, 비교 연산자를 사용하면 자동으로 사전 순으로 처리한다.
	}
}

int main(void) {
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> a[i];
	}
	sort(a, a + num, compare);
	for (int i = 0; i < num; i++) {
		if (i > 0 && a[i] == a[i - 1])
			continue;
		else {
			cout << a[i] << '\n';
		}
	}
	return 0;
}