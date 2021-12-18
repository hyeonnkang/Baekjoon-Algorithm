#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int A, B;
	cin >> A >> B;

	int m;	// A 진법의 자리수의 개수
	cin >> m;

	vector<int> num;
	for (int i = 0; i < m; i++) {
		int x;
		cin >> x;
		num.push_back(x);
	}

	// 진법 A의 수를 10진수로 변환해서 변수 decimal로 저장
	int decimal = 0;
	int a = 1;
	for (int i = m - 1; i >= 0; i--) {
		decimal += num[i] * a;
		a *= A;
	}

	// decimal 의 숫자를 B 진법으로 변환
	vector<int> result;
	while (decimal != 0) {
		result.push_back(decimal % B);
		decimal /= B;
	}
	for (int i = result.size()-1; i >= 0; i--) {
		cout << result[i] << " ";
	}cout << endl;
}