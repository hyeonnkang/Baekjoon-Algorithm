#include <iostream>
using namespace std;

int count_2(long long num){ // 2의 개수 구하기
    int result = 0;

    for(long long i = 2; i <= num; i *= 2){
        result += num / i;
    }

    return result;
}

int count_5(long long num){ // 5의 개수 구하기
    int result = 0;

    for(long long i = 5; i <= num; i *= 5){
        result += num / i;
    }

    return result;
}

int main() {

    long long n, m;
    cin >> n >> m;


    int x = count_5(n);
    int y = count_5(m);
    int z = count_5(n-m);
    int cnt_5 = x - (y + z);        // nCm의 5의 개수

    x = count_2(n);
    y = count_2(m);
    z = count_2(n-m);
    int cnt_2 = x - (y + z);        // nCm의 2의 개수

    int result = cnt_5 < cnt_2 ? cnt_5 : cnt_2;
    cout << result << endl;

    return 0;
}