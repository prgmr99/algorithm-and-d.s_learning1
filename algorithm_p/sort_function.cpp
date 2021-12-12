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

// sortÇÔ¼ö´Â ±âº»ÀûÀ¸·Î ¿À¸§Â÷¼ø Á¤·Ä.
// ¹è¿­ÀÇ ½ÃÀÛÁ¡ ÁÖ¼Ò¿Í ¸¶Áö¸· ÁÖ¼Ò+1À» ÇØÁÖ¸é µÈ´Ù.

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
		Student("¿°½ÂÁØ",90),
		Student("¿°½ÂÁØ1", 90),
		Student("¿°½ÂÁØ2", 90),
		Student("¿°½ÂÁØ3", 90),
		Student("¿°½ÂÁØ4", 90)
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
	v.push_back(pair<int, string>(90, "¿°½ÂÁØ"));
	v.push_back(pair<int, string>(92, "¿°½ÂÁØ2"));
	v.push_back(pair<int, string>(93, "¿°½ÂÁØ3"));
	v.push_back(pair<int, string>(91, "¿°½ÂÁØ4"));
	v.push_back(pair<int, string>(94, "¿°½ÂÁØ1"));

	sort(v.begin(), v.end());
	for (int i = 0; i < v.size; i++)
		cout << v[i].second << ' ';

	return 0;
}*/

// À§ÀÇ ¹è¿­°ú Å¬·¡½º¸¦ ÀÌ¿ëÇß´ø ¹æ½ÄÀ» ´ëÃ¼ÇÑ °Í.
// ¼Ò½ºÄÚµåÀÇ ±æÀÌ¸¦ Âª°Ô ÇØÁÖ´Â ±â¹ı=¼ôÄÚµù.


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
	v.push_back(pair<string, pair<int, int>>("¿°½ÂÁØ", make_pair(90, 19931222)));
	v.push_back(pair<string, pair<int, int>>("¿°½ÂÁØ1", make_pair(92, 19961221)));
	v.push_back(pair<string, pair<int, int>>("¿°½ÂÁØ2", make_pair(93, 19921223)));
	v.push_back(pair<string, pair<int, int>>("¿°½ÂÁØ3", make_pair(96, 19941212)));
	v.push_back(pair<string, pair<int, int>>("¿°½ÂÁØ4", make_pair(93, 19951012)));
	
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < v.size; i++)
		cout << v[i].first << ' ';
	return 0;
}