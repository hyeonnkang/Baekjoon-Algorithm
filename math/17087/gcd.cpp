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
    int N, S;
    cin >> N >> S;

    int* sister = new int[N];
    for(int i = 0; i < N; i++){
        cin >> sister[i];
    }

    int k = 0;
    for(int i = 0; i < N; i++){
        if(k != 0){
            int x = S - sister[i];
            k = gcd(k, (x < 0) ? -x : x);
        }else{
            int x = S - sister[i];
            k = (x < 0) ? -x : x;
        }
    }

    cout << k << endl;
}