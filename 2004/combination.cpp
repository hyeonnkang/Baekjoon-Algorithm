#include <iostream>
using namespace std;

// 각 idx에 해당하는 팩토리얼 연산 결과 ex) fac[10] = 10!
int fac[2000000001] = {1, 1, 0};    

void factorial(){    // 배열 fac에 팩토리얼 연산을 해서 결과를 저장
    for(int i = 2; i < 2000000001; i++){
        fac[i] = fac[i-1] * i;
    }
}

int main(){
    factorial();

    int n, m;
    cin >> n >> m;
    
    // 조합 구하기
    int c = fac[n] / (fac[m] * fac[n-m]);

    // c에 들어있는 5의 개수 카운트
    int tmp = c;
    int cnt = 0;    // c안에 들어있는 5의 개수
    while(c != 0){
        tmp /= 5;
        cnt++;
    }

    cout << cnt;

    return 0;
}