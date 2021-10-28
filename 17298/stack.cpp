#include <iostream>
#include <stack>
using namespace std;

int main() {
	int N;		// 수열의 크기
	cin >> N;

	int* arr = new int[N];		// 수열

	int x;
	for (int i = 0; i < N; i++) {	// 수열 초기화
		cin >> x;
		arr[i] = x;
	}

	stack<int> tmp;
	int* result = new int[N];	// 오큰수 저장할 배열
	for (int i = N - 1; i >= 0; i--) {
		if (tmp.empty()) {	// 스택이 비어있는 경우
			tmp.push(arr[i]);
			result[i] = -1;
		}
		else {				// 스택이 비어있지 않은 경우
			while (tmp.top() <= arr[i]) {
				tmp.pop();
				if (tmp.empty()) break;
			}

			if (tmp.empty()) {
				result[i] = -1;
				tmp.push(arr[i]);
			}
			else {
				result[i] = tmp.top();
				tmp.push(arr[i]);
			}
		}
	}

	for (int i = 0; i < N; i++) {		// 오큰수 모두 출력
		cout << result[i] << " ";
	}

	return 0;
}