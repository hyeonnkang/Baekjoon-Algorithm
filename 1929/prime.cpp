#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int M, N;
	cin >> M >> N;

	int size = M - N + 1;

	for (int i = M; i <= N; i++) {
		bool c = true;		// true 이면 소수, false 이면 합성수
		if (i == 1) continue;	// 1 은 합성수
		else {
			for (int j = 2; j <= (int)sqrt(i); j++) {
				if (i % j == 0) {
					c = false;
					break;
				}
			}
			if (c) printf("%d\n", i);
		}
	}


	return 0;
}