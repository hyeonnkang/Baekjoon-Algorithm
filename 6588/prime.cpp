#include <iostream>
#include <cmath>
using namespace std;

// 초기값: 0 / 소수: 1 / 합성수: -1
int prime[1000001] = { 0 };

// num 이 소수이면 true return
bool is_prime(int num) {
	bool result = true;
	for (int i = 3; i <= sqrt(num); i++) {
		if (num % i == 0) {
			result = false;
			break;
		}
	}
	if (result) prime[num] = 1;
	else prime[num] = -1;

	return result;
}

int main() {

	int n;
	while (true) {
		cin >> n;

		if (n == 0) break;	// 0이 입력되면 프로그램 종료

		bool is_gold = false;

		// a <= b 인 홀수인 소수 a, b를 찾는다.
		int a, b;
		a = 3;
		b = n - a;
		while (a <= b) {

			// a와 b가 모두 소수일 경우 반복문 탈출
			bool a_prime, b_prime;
			
			if (prime[a] == 0) a_prime = is_prime(a);
			else a_prime = (bool)prime[a];

			if (prime[b] == 0) b_prime = is_prime(b);
			else b_prime = (bool)prime[b];

			if (a_prime && b_prime) {
				is_gold = true;
				break;
			}
			else {
				a += 2;
				b = n - a;
				continue;
			}

		}

		if (is_gold) printf("%d = %d + %d\n", n, a, b);
		else printf("Goldbach's conjecture is wrong.\n");
	}
	

	return 0;
}