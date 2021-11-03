#include <iostream>
#include <string>
using namespace std;

int main() {
	string A, B, C, D;
	cin >> A >> B >> C >> D;

	string fir = A + B;
	string sec = C + D;

	int sum = 0;
	int carry = 0;
	string result = "";

	int f = fir.size();
	int g = sec.size();

	int n = f <= g ? f : g;
	for (int i = 1; i <= n; i++) {
		sum = (fir[fir.size() - i] - '0') + (sec[sec.size() - i] - '0');
		sum += carry;
		if (sum > 10) {
			carry = 1;
			sum -= 10;
		}
		else carry = 0;
		result += char(sum + int('0'));
	}
	if (f != g) {
		if (f > g) {
			for (int i = n + 1; i <= f; i++) {
				result += fir[f - i];
			}
		}
		else {
			for (int i = n + 1; i <= g; i++) {
				result += sec[g - i];
			}
		}
	}

	for (int i = result.size() - 1; i >= 0; i--) {
		cout << result[i];
	}
}