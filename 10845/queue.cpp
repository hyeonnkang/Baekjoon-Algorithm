#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main() {
	int N;
	cin >> N;
	
	queue<int> q;
	
	for(int oper = 0; oper < N; oper++){
		string s;
		cin >> s;
		
		if(s == "push"){
			int x;
			cin >> x;
			q.push(x);
		}else if(s=="pop"){
			if(q.empty()) cout << -1 << endl;
			else {
				cout << q.front() << endl;
				q.pop();
			}
		}else if(s == "size") cout << q.size() << endl;
		else if(s == "front") {
			if(q.empty()) cout << -1 << endl;
			else cout << q.front() << endl;
		}else if(s == "back"){
			if(q.empty()) cout << -1 << endl;
			else cout << q.back() << endl;
		}else if (s== "empty"){
			if(q.empty()) cout << 1 << endl;
			else cout << 0 << endl;
		}
	}
	
	return 0;
}