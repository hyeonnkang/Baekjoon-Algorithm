#include <iostream>
#include <cmath>
using namespace std;

// 초기값: 0 / 소수: 1 / 합성수: -1
int prime[1000001] = { 0, 0, 1, 0};

// num 이 소수이면 true return
bool is_prime(int num) {
	bool result = prime[num] == 1 ? true : false;
	return result;
}

int main() {

	// 소수인지 아닌지 2부터 1000000 까지 저장하기
	for(int i = 3; i <= 1000000; i++){
		for(int j = 2; j <= sqrt(i); j++){
			if (i % j == 0) {	// 소수가 아닐 경우
				prime[i] = -1;
				break;
			}else continue;
		}

		if (prime[i] == 0) prime[i] = 1;	// 소수일 경우
	}

	cin.tie(NULL); 
	ios_base::sync_with_stdio(0);

	// 사용자로부터 숫자 입력받기
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
			if (is_prime(a) && is_prime(b)) {
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