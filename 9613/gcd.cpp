#include <iostream>
using namespace std;

int gcd(int a, int b){  // gcd(a, b)를 반환
    int tmp, n;

    if(a < b){
        tmp = a;
        a = b;
        b = tmp;
    }

    while(b != 0){
        n = a % b;
        a = b;
        b = n;
    }

    return a;
}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){ // test 케이스 수만큼 반복
        int n;
        cin >> n;

        int* num = new int[n];
        for(int j = 0; j < n; j++){
            cin >> num[j];
        }

        // 가능한 모든 쌍의 gcd의 합 구하기
        long long int sum = 0;
        for(int j = 0; j < n; j++){
            for(int k = j+1; k < n; k++){
                sum += gcd(num[j], num[k]);
            }
        }

        cout << sum << endl;
    }
}