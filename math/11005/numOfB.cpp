#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int N, B;
	cin >> N >> B;

	string result = "";
	while (N != 0) {
		if (N % B < 10)
			result += to_string(N % B);
		else {
			result += char(N % B + 55);
		}
		N /= B;
	}
	reverse(result.begin(), result.end());
	cout << result << endl;
}