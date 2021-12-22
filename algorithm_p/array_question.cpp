#include <iostream>
#include <algorithm>
using namespace std;

string a[20000];
int num;

bool compare(string a, string b) {
	if (a.length() < b.length()) {		// ���̰� ª�� ���� �켱
		return 1;
	}
	else if (a.length() > b.length()) {
		return 0;
	}
	else {		// ���̰� ���� ���
		return a < b;  // string�� ���, �� �����ڸ� ����ϸ� �ڵ����� ���� ������ ó���Ѵ�.
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