#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {

    stack<char> box;    // "(" 이 들어갈 스택

    string s;
    cin >> s;

    int p = 0;  // 이전의 문자가 ( 이면 1 아니면 0
    int result = 0; // 총 잘려진 막대의 개수
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            p = 1;
            box.push(s[i]);
        }
        else {
            box.pop();
            if (p == 1) { // 레이저를 쏘는 경우
                result += box.size();
            }
            else {  // 막대가 끝나는 경우
                result += 1;
            }

            p = 0;
        }
    }

    cout << result << endl;
}