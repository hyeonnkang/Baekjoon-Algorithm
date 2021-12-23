#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // 타일로 채우는 방법의 수를 저장할 배열 box
    vector<int> box;
    box.push_back(1);
    box.push_back(2);

    // n-1 항과 n-2 항의 합을 이용해 n 항의 값 구하기
    for (int i = 2; i < n; i++)
    {
        box.push_back((box[i - 1] + box[i - 2]) % 10007);
    }

    // 결과 출력
    cout << box[n - 1] << endl;

    return 0;
}