#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	int N;
	cin >> N;
	
	vector<int> dec;
	
	for(int oper = 0; oper < N; oper++){
		string s;
		cin >> s;
		
		if(s == "push_front"){
			int x;
			cin >> x;
			dec.insert(dec.begin(), x);
		}else if (s=="push_back"){
			int x;
			cin >> x;
			dec.push_back(x);
		}else if(s == "pop_front"){
			if(dec.empty()) cout << -1 << endl;
			else {
				cout << dec[0] << endl;
				dec.erase(dec.begin());
			}
		}else if(s == "pop_back"){
			if(dec.empty()) cout << -1 << endl;
			else {
				cout << dec.back() << endl;
				dec.erase(dec.end()-1);
			}
		}else if(s == "size"){
			cout << dec.size() << endl;
		}else if (s == "empty"){
			if(dec.empty()) cout << 1 << endl;
			else cout << 0 << endl;
		}else if(s == "front"){
			if(dec.empty()) cout << -1 << endl;
			else {
				cout << dec.front() << endl;
			}
		}else if(s == "back"){
			if(dec.empty()) cout << -1 << endl;
			else {
				cout << dec.back() << endl;
			}
		}
	}
}