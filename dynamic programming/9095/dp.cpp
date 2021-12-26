#include <iostream>
#include <vector>

using namespace std;

int main() {

	int test;
	cin >> test;
	while (test > 0) {
		int n;
		cin >> n;

		// n을 1, 2, 3의 합으로 나타내는 방법의 수를 저장하는 배열
		vector<int> box;
		box.push_back(1);
		box.push_back(2);
		box.push_back(4);

		// n-1 항과 n-2 항, n-3항의 합을 이용해 n 항의 값 구하기
		for (int i = 3; i < n; i++) {
			box.push_back((box[i - 1] + box[i - 2] + box[i - 3]) % 10007);
		}

		// 결과 출력
		cout << box[n - 1] << endl;
		test--;
	}

	return 0;
}