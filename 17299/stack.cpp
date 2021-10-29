#include <iostream>
#include <stack>
using namespace std;

int arr[1000001] = { 0 };

int main() {
	int N;		// 수열의 크기
	cin >> N;

	int* A = new int[N];		// 수열

	int x;
	for (int i = 0; i < N; i++) {	// 수열 초기화
		cin >> x;
		A[i] = x;
		arr[A[i]]++;
	}

	int* B = new int[N];		// 몇번 나왔는지 나타내는 카운트 수열
	for (int i = 0; i < N; i++) {
		B[i] = arr[A[i]];
	}

	stack<int> tmp;
	int* result = new int[N];	// 오큰수 저장할 배열
	for (int i = N - 1; i >= 0; i--) {
		if (tmp.empty()) {	// 스택이 비어있는 경우
			tmp.push(i);
			result[i] = -1;
		}
		else {				// 스택이 비어있지 않은 경우
			while (B[tmp.top()] <= B[i]) {
				tmp.pop();
				if (tmp.empty()) break;
			}

			if (tmp.empty()) {
				result[i] = -1;
				tmp.push(i);
			}
			else {
				result[i] = A[tmp.top()];
				tmp.push(i);
			}
		}
	}

	for (int i = 0; i < N; i++) {		// 오큰수 모두 출력
		cout << result[i] << " ";
	}

	return 0;
}