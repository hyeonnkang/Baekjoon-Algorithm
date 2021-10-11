#include <iostream> 
#include <string>
#include <vector>

using namespace std;

int main(){
    int T;
    cin >> T;

    for(int test = 0; test < T; test++){
        string s;
        cin >> s;

        bool isVps = true;

        vector<char> v;     // '('을 담을 스택 배열

        // 문자가 (이면 스택에 담고 )이면 pop 한다.
        for(int i = 0; s[i] != '\0'; i++){
            if(s[i]=='(') v.push_back('(');
            else if(s[i]==')') {
                if(v.empty()) isVps = false;
                else v.pop_back();
            }
        }

        if(v.empty() && isVps) cout << "YES" << endl;
        else          cout << "NO" << endl;
    }

}