#include <iostream>
#include <cmath>
using namespace std;

bool prime[1000001] = { false, false, true, };

bool isprime(int n) {	// n 이 소수이면 true 반환 
	if (n == 1 || n % 2 == 0) return false;

	bool result = true;
	for (int i = 3; i <= sqrt(n); i += 2) {
		if (n % i == 0) {
			result = false;
			break;
		}
	}
	return result;
}

int main() {
	int T;
	cin >> T;

	for (int i = 3; i < 1000001; i += 2) {
		prime[i] = isprime(i);
	}

	for (int test = 0; test < T; test++) {
		int N;
		cin >> N;

		if (N == 4) {
			cout << 1 << endl;
			continue;
		}

		int a = 3;
		int b = N - a;
		int cnt = 0;		// 골드바흐 파티션의 개수
		while (a <= b) {
			if (prime[a] && prime[b]) {	
				cnt++;
			}
			a += 2;
			b = N - a;
		}
		cout << cnt << endl;
	}
}