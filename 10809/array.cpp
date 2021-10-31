#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;

	int chk[26];
	for (int i = 0; i < 26; i++) {
		chk[i] = -1;
	}

	for (int i = 0; i < s.size(); i++) {
		if (chk[s[i] - 97] == -1) {
			chk[s[i] - 97] = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		cout << chk[i] << " ";
	}
}