#include <iostream>
#include <string>
using namespace std;

#define LOWER 0
#define UPPER 1
#define NUM   2
#define SPACE 3

const int len = 4;		// chk 배열의 사이즈
int chk[len] = { 0 };

int main() {
	string s;
	while (getline(cin, s)) {
		for (int i = 0; i < s.size(); i++) {
			if ((int)s[i] >= 97 && (int)s[i] <= 122) {	// 소문자일 경우
				chk[LOWER]++;
			}
			else if ((int)s[i] >= 65 && (int)s[i] <= 90) {	// 대문자일 경우
				chk[UPPER]++;
			}
			else if ((int)s[i] >= 48 && (int)s[i] <= 57) {	// 숫자일 경우
				chk[NUM]++;
			}
			else {	// 공백일 경우
				chk[SPACE]++;
			}
		}

		// 정답 출력
		for (int i = 0; i < len; i++) {
			cout << chk[i] << " ";
			chk[i] = 0;			// 출력 후 다시 리셋
		}cout << endl;
	}
}