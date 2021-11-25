#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int N;
	cin >> N;

	stack<double> box;

	string s;
	cin >> s;

	int* arr = new int[N];		// 자연수 배열
	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		arr[i] = tmp;
	}

	for (int i = 0; i < s.size(); i++) {
		// 문자가 연산자라면
		if (s[i] == '*' || s[i] == '+' || s[i] == '-' || s[i] == '/') {
			double b = box.top();
			box.pop();
			double a = box.top();
			box.pop();
			
			double result = 0;
			switch (s[i]) {
			case '+':
				result = a + b;
				break;
			case '-':
				result = a - b;
				break;
			case '*':
				result = a * b;
				break;
			case '/':
				result = a / b;
				break;
			}
			box.push(result);
		}
		else {		// 문자가 피연산자라면
			double x = double(arr[s[i]-'A']);
			box.push(x);
		}
	}
	std::cout << fixed;
	std::cout.precision(2);
	std::cout << box.top() << endl;
}