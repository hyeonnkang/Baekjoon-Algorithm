#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	string s;
	cin >> s;
	 
	stack<char> oper;		// 연산자를 넣을 스택
	 
	for (int i = 0; i < s.size(); i++) {
		if (int(s[i]) >= 65 && int(s[i]) <= 90) {	// 피연산자라면
			cout << s[i];
		}
		else {		// 연산자라면
			if (oper.empty()) oper.push(s[i]); // 스택이 비어있으면 추가
			else if (s[i] == ')') {
				// (가 나올때까지 출력
				while (oper.top() != '(') {
					cout << oper.top();
					oper.pop();
				}
				oper.pop();		// ( pop
			}
			else {
				// 현재 s[i]보다 낮은 연산자가 나올때까지 pop하고 s[i] push
				if (s[i] == '(') oper.push(s[i]);
				else if (s[i] == '*' || s[i] == '/') {
					while (oper.top() != '+' && oper.top() != '-') {
						if (oper.top() == '(') {
							break;
						}
						cout << oper.top();
						oper.pop();
						if (oper.empty()) break;
					}
					oper.push(s[i]);
				}
				else {
					while (!oper.empty()) {
						if (oper.top() == '(') {
							break;
						}
						cout << oper.top();
						oper.pop();
					}
					oper.push(s[i]);
				}
			}
		}
	}

	while (!oper.empty()) {
		cout << oper.top();
		oper.pop();
	}
}