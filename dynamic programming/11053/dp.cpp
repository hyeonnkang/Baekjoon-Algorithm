#include <iostream>
#include <vector>

using namespace std;

vector<int> dp(1001, 1);

int main(){
    int N;  // 수열의 크기
    cin >> N;
    int* A = new int[N];
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < i; j++){
            if(A[i] > A[j])
                dp[i] = max(dp[j]+1, dp[i]);
        }   
    }
    int result = 0;
    for(int i = 0; i < N; i++){
        result = max(result, dp[i]);
    }

    cout << result << endl;
}