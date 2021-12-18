#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string N;
	int B;
	cin >> N >> B;

	int b = 1;
	int result = 0;
	for (int i = N.size() - 1; i >= 0; i--) {
		if (N[i] - '0' < 10) {	// N[i]가 숫자일 경우
			result += (N[i] - '0') * b;
		}
		else {					// N[i]가 문자일 경우
			result += (N[i] - 55) * b;
		}
		b *= B;
	}
	cout << result << endl;
}