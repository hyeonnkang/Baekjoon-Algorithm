#include <iostream>
#define SIZE 90

long long dp[SIZE + 1][2] = { 0 };

using namespace std;

int main() {
	int N;
	cin >> N;

	dp[0][0] = 0;
	dp[0][1] = 0;
	dp[1][0] = 0;
	dp[1][1] = 1;
	dp[2][0] = 1;
	dp[2][1] = 0;

	for (int i = 3; i <= N; i++) {
		dp[i][0] = dp[i - 1][0] + dp[i - 1][1];
		dp[i][1] = dp[i - 1][0];
	}

	// N자리 이친수의 개수 출력
	long long result = dp[N][0] + dp[N][1];
	cout << result << endl;

	return 0;
}