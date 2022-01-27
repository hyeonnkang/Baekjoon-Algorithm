#include <iostream>
#include <vector>
// #include <vector>

using namespace std;

vector<int> dp(1001, 1);    // 길이 값을 저장할 배열
vector<int> arr;        // 해당 수열의 숫자를 저장하는 배열

int main() {
    int N;  // 수열의 크기
    cin >> N;
    int* A = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        // vector<int> tmp;    // 인덱스 i에 해당하는 dp의 값
        // 계단의 길이가 가장 긴 값 찾기
        
        for (int j = 0; j < i; j++) {
            if (A[i] > A[j]) {
                dp[i] = max(dp[j] + 1, dp[i]);
            }
        }
    }
    // 최대 길이 출력
    int result = 0;
    for (int i = 0; i < N; i++) {
        result = max(result, dp[i]);
    }
    cout << result << endl;

    // 해당 최대 길이를 가지는 숫자들의 순서 출력
    for (int i = N-1; i >= 0; i--) {
        if (dp[i] == result) {
            arr.push_back(A[i]);
            result--;
        }
    }
    int size = arr.size();
    for (int i = 0; i < size; i++) {
        cout << arr.back() << " ";
        arr.pop_back();
    }


}