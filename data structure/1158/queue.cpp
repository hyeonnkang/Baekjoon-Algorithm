#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
	int N, K;
	cin >> N >> K;
	
	vector<int> arr;
	for(int i = 1; i <= N; i++){
		arr.push_back(i);
	}

	int x = -1;
	queue<int> q;
	while(q.size() < N){
		x = (x+K)%(arr.size());
		q.push(arr[x]);
		arr.erase(arr.begin()+x);
		x--;
	}
	
	cout << "<";
	for(int i= 1; i < N; i++){
		cout << q.front() << ", ";
		q.pop();
	}	
	cout << q.front() << ">\n";
}