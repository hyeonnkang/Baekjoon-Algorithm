#include <iostream>
#include <string>
using namespace std;

int gcd(int x, int y) {	// 최대공약수를 반환하는 함수
	if (y == 0) return x;
	else return gcd(y, x % y);
}

int lcm(int x, int y) {	// 최소공배수를 반환하는 함수
	return (x * y) / gcd(x, y);
}

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int a, b;
		cin >> a >> b;

		cout << lcm(a, b) << endl;
	}


	return 0;
}