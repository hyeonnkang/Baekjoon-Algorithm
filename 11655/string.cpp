#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	getline(cin, s);

	for (int i = 0; i < s.size(); i++) {
		// 공백과 숫자는 변경하지 않는다.
		if (s[i] == ' ' || (s[i]-'0' >= 0 && s[i]-'0' <= 9)) continue;
		else {
			// 대문자일 경우
			if (int(s[i]) <= 90) {
				int x = s[i] + 13;
				if (x > 90) x = x - 26;
				s[i] = char(x);
			}
			// 소문자일 경우
			else {
				int x = s[i] + 13;
				if (x > 122) x = x - 26;
				s[i] = char(x);
			}
		}
	}

	cout << s;
}