#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int* num = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> num[i];
	}

	int p_count = 0;		// 소수의 개수
	for (int i = 0; i < N; i++) {
		bool c = true;		// true 이면 소수, false 이면 합성수
		if (num[i] == 1) continue;
		else {
			for (int j = 2; j < num[i]; j++) {
				if (num[i] % j == 0) {
					c = false;
					break;
				}
			}
			if (c) p_count++;
		}
	}

	cout << p_count << endl;

	return 0;
}