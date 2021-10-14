#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    stack<char> left;   // 커서 왼쪽에 있는 문자열
    stack<char> right;  // 커서 오른쪽에 있는 문자열

    string s;   // 문자열
    cin >> s;

    for(int i = 0; s[i] != '\0'; i++){
        left.push(s[i]);
    }

    int M;  // 명령어 개수
    cin >> M;

    for(int oper = 0; oper < M; oper++){
        char t;
        cin >> t;

        char input;
        switch(t){
            case 'L' : // 커서 왼쪽으로 이동
                if(!left.empty()){
                    right.push(left.top());
                    left.pop();
                }
                break;
            case 'D':  // 커서 오른쪽으로 이동
                if(!right.empty()){
                    left.push(right.top());
                    right.pop();
                }
                break;
            case 'B' :  // 커서 왼쪽에 있는 문자 삭제
                if(!left.empty()){
                    left.pop();
                }
                break;
            case 'P' :  //  커서 왼쪽에 문자 입력
                cin >> input;
                left.push(input);
                break;
        }
    }

    // 현재 문자열 출력
    stack<char> tmp;
    for(; !left.empty();){
        tmp.push(left.top());
        left.pop();
    }

    for(;!tmp.empty(); ){
        cout << tmp.top();
        tmp.pop();
    }

    for(;!right.empty();){
        cout << right.top();
        right.pop();
    }
    cout << endl;
}