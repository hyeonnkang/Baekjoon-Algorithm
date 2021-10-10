#include <iostream>
#include <vector>
#include <string>

using namespace std;

void reverse(string s){ // s를 reverse 시켜 출력하는 함수
    for(int i = s.size()-1; i >= 0; i--){
        cout << s[i];
    }
    cout << " ";
}

int main(){
    int T;  // 테스트 케이스 수
    cin >> T;

    cin.ignore();
    for(int c = 0; c < T; c++){
        string s;
        getline(cin, s);   // 한 줄 전체를 입력받는다.

        vector<string> v;   // s의 각 단어를 넣을 배열
        int idx = 0;
        while(idx < s.size()){
            string tmp = "";
            for(; s[idx] != ' ' && s[idx] != '\0'; idx++){
                tmp += s[idx];
            }
            v.push_back(tmp);
            idx++;
        }
        
        for(int i = 0; i < v.size(); i++){
            reverse(v.at(i));
        }cout << endl;
    }

    return 0;
}