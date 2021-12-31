#include <iostream>
#include <vector>

int P[10001];
int dp[1001];

using namespace std;

int main() {

	// 지불해야 하는 금액 N
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> P[i];
	}


	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			if (dp[i] <= 0) dp[i] = dp[i - j] + P[j];
			else dp[i] = min(dp[i], dp[i - j] + P[j]);
		}
	}

	cout << dp[N];

	return 0;
}