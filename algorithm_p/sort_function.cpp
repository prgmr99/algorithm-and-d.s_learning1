#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*int main(void)
{
	int arr[10] = { 4,3,6,5,1,2,8,9,10,7 };
	sort(arr, arr + 10);
	for (int i = 0; i < 10; i++)
		cout << arr[i] << ' ';
	return 0;
}*/

// sort�Լ��� �⺻������ �������� ����.
// �迭�� ������ �ּҿ� ������ �ּ�+1�� ���ָ� �ȴ�.

/*bool compare(int a, int b) {
	return a < b;
}

int main(void)
{
	int arr[10] = { 9,3,5,4,1,10,8,6,7,2 };
	sort(arr, arr + 10, compare);
	for (int i = 0; i < 10; i++)
		cout << arr[i] << ' ';

	return 0;
}*/

/*class Student
{
public:
	string name;
	int score;
	Student(string name, int score)
	{
		this->name = name;
		this->score = score;
	}

	bool operator <(Student& student)
	{
		return this->score < student.score;
	}
};

bool compare(int a, int b)
{
	return a > b;
}

int main(void)
{
	Student students[] = {
		Student("������",90),
		Student("������1", 90),
		Student("������2", 90),
		Student("������3", 90),
		Student("������4", 90)
	};
	sort(students, students + 5);
	for (int i = 0; i < 5; i++)
	{
		cout << students[i].name << ' ';
	}
	return 0;
}*/

/*int main(void)
{
	vector<pair<int, string>>v;
	v.push_back(pair<int, string>(90, "������"));
	v.push_back(pair<int, string>(92, "������2"));
	v.push_back(pair<int, string>(93, "������3"));
	v.push_back(pair<int, string>(91, "������4"));
	v.push_back(pair<int, string>(94, "������1"));

	sort(v.begin(), v.end());
	for (int i = 0; i < v.size; i++)
		cout << v[i].second << ' ';

	return 0;
}*/

// ���� �迭�� Ŭ������ �̿��ߴ� ����� ��ü�� ��.
// �ҽ��ڵ��� ���̸� ª�� ���ִ� ���=���ڵ�.


bool compare(pair<string, pair<int, int>>a, pair<string, pair<int, int>>b)
{
	if (a.second.first == b.second.first) {
		return a.second.second > b.second.second;
	}
	else {
		return a.second.first > b.second.first;
	}
}

int main(void)
{
	vector<pair<string, pair<int, int>>>v;
	v.push_back(pair<string, pair<int, int>>("������", make_pair(90, 19931222)));
	v.push_back(pair<string, pair<int, int>>("������1", make_pair(92, 19961221)));
	v.push_back(pair<string, pair<int, int>>("������2", make_pair(93, 19921223)));
	v.push_back(pair<string, pair<int, int>>("������3", make_pair(96, 19941212)));
	v.push_back(pair<string, pair<int, int>>("������4", make_pair(93, 19951012)));
	
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < v.size; i++)
		cout << v[i].first << ' ';
	return 0;
}