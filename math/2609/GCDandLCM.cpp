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
	int a, b;
	cin >> a >> b;

	cout << gcd(a, b) << endl;
	cout << lcm(a, b) << endl;

	return 0;
}