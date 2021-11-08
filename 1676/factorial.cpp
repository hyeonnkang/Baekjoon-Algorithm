#include <iostream>
#include <string>
using namespace std;

int main() {

	int N;
	cin >> N;


	int count_zero = 0;

	for (int i = 0; i <= N; i++) {
		int tmp = i;
		while (true) {	// i가 5로 나누어떨어지지 않을때까지 반복
			if (tmp % 5 == 0 && tmp != 0) {
				count_zero++;
				tmp /= 5;
			}
			else break;
		}
	}

	cout << count_zero << endl;

	return 0;
}