#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {

	string s;
	getline(cin, s, '\n');

	stack<char> box;	// '<'가 들어갈 스택
	stack<char> sentence;	// 문자가 들어갈 스택 

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '<') {
			box.push('<');
			cout << "<";
		}
		else if (s[i] == '>') {
			cout << ">";
			box.pop();
		}
		else if (box.empty()) {
			sentence.push(s[i]);
			if (s[i] == ' ') {
				sentence.pop();
				while (!sentence.empty()) {
					cout << sentence.top();
					sentence.pop();
				}
				cout << " ";
			}
			if(i+1 == s.size()){
				while (!sentence.empty()) {
					cout << sentence.top();
					sentence.pop();
				}
			}
			else if (s[i + 1] == '<') {
				while (!sentence.empty()) {
					cout << sentence.top();
					sentence.pop();
				}
			}
		}
		else {
			cout << s[i];
		}
	}
	while (!sentence.empty()) {
		cout << sentence.top();
		sentence.pop();
	}
	cout << endl;


	return 0;
}