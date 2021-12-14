#include <iostream>
#include <string>
using namespace std;

string getBinary(int num) {
    string result = "";
    for (int i = 4; i >= 1; i /= 2) {
        if (int(num / i) != 0) {
            result += to_string(int(num / i));
            num -= i;
        }
        else result += '0';
    }
    return (result);
}

int main() {
    string oct;
    cin >> oct;

    // 8진수가 0일 경우
    if (oct == "0") {
        cout << "0" << endl;
        return 0;
    }
    else {
        string binary = "";
        for (int i = 0; i < oct.length(); i++) {
            binary += getBinary(oct[i] - '0');
        }

        // binary의 처음 1이 나오는 idx 찾기
        int idx = -1;
        for (int i = 0; i < binary.length(); i++) {
            if (binary[i] == '1') {
                idx = i;
                break;
            }
        }

        for (int i = idx; i < binary.length(); i++) {
            cout << binary[i];
        }
        cout << endl;
    }
    
}