#include <iostream>
#include <vector>

#define SIZE 100
#define DIV 1000000000

long long dp[SIZE + 1][10] = { 0 };

using namespace std;

int main() {
	int N;
	cin >> N;

	// 길이가 1 이면서 각각 i로 끝나는 갯수는 1
	for (int i = 1; i <= 9; i++) {
		dp[1][i] = 1;
	}

	for (int i = 2; i <= N; i++) {
		for (int j = 0; j <= 9; j++) {
			// j가 0일 경우 뒤 숫자는 무조건 1, j가 9일 경우 뒤 숫자는 무조건 8
			if (j == 0) {
				dp[i][j] = (dp[i - 1][j + 1]) % DIV;
			}
			else if (j == 9) {
				dp[i][j] = (dp[i - 1][j - 1]) % DIV;
			}
			else {	// j가 0이나 9가 아닐 경우 나머지
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % DIV;
			}
		}
	}
	
	// 정답 출력
	long long result = 0;
	for (int i = 0; i <= 9; i++) {
		result += dp[N][i];
		result %= DIV;
	}
	cout << result << endl;


	return 0;
}