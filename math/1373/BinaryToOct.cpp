#include <iostream>
#include <string>
using namespace std;

int main() {
    string binary;
    cin >> binary;
    
    int len = binary.length();

    // 8진수로 바꾸기 쉽게 입력한 2진수의 길이를 3의 배수로 맞춘다.
    switch (len % 3) {
    case 0: break;
    case 1: 
        binary = "00" + binary;
        break;
    case 2:
        binary = "0" + binary;
        break;
    }
    len = binary.length();

    // 2진수의 세자리 수를 8진수 1자리수로 변환
    string oct = "";
    for (int i = 0; i < len; i += 3) {
        int x = 0;
        int d = 1;
        for (int j = i+2; j >= i; j--) {
            x += (binary[j] - '0') * d;
            d *= 2;
        }
        oct += to_string(x);
    }

    cout << oct << endl;
    
}