#include <iostream>
#include <string>
using namespace std;

int main() {
	string A, B, C, D;
	cin >> A >> B >> C >> D;

	string fir = A + B;
	string sec = C + D;

	long long x = stoll(fir);
	long long y = stoll(sec);

	cout << x + y << endl;
	return 0;
}