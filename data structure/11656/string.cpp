#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;

	// s의 모든 접미사들을 저장할 string들의 배열
	string* arr = new string[s.size()];

	for (int i = 0; i < s.size(); i++) {
		arr[i] = "";
		for (int j = i; j < s.size(); j++) {
			arr[i] += s[j];
		}
	}

	// 접미사 배열 arr을 sort
	for (int i = 0; i < s.size(); i++) {
		for (int j = 0; j < s.size() - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				string tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	// 접미사 배열 출력
	for (int i = 0; i < s.size(); i++) {
		cout << arr[i] << endl;
	}

	return 0;
}