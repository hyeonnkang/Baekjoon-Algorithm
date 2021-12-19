#include <iostream>

using namespace std;

int r[1000000] = { 0 };

int cal(int num) {
	r[1] = 0;	// 1은 계산안해도 바로 1
	for (int i = 2; i <= num; i++) {
		r[i] = r[i - 1] + 1;

		if (i % 2 == 0 && r[i] > r[i / 2] + 1) {
			r[i] = r[i / 2] + 1;
		}
		if (i % 3 == 0 && r[i] > r[i / 3] + 1) {
			r[i] = r[i / 3] + 1;
		}
	}
	return r[num];
}

int main() {
	long long n;
	cin >> n;

	cout << cal(n) << endl;
}