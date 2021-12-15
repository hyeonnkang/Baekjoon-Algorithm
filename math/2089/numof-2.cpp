#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;

	if (N == 0) {
		cout << 0 << endl;
		return 0;
	}

	string result = "";
	while (N != 0) {
		if (N % (-2) == 0) {
			result += "0";
			N /= (-2);
		}
		else {
			result += "1";
			N = (N - 1) / (-2);
		}
	}

	reverse(result.begin(), result.end());

	cout << result << endl;
}