#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> stack;

    for(int oper = 0; oper < N; oper++){
        string s;
        cin >> s;

        if(s == "push"){
            int k;
            cin >> k;
            stack.push_back(k);
        }else if(s=="pop"){
            if(stack.empty()){
                cout << -1 << endl;
            }else{
                int tmp = stack.at(stack.size()-1);    

                stack.erase(stack.end()-1);

                cout << tmp << endl;
            }
        }else if(s == "size"){
            cout << stack.size() << endl;
        }else if(s == "empty"){
            cout << stack.empty() << endl;
        }else if(s=="top"){
            if(stack.empty()) cout << -1 << endl;
            else cout << stack.at(stack.size()-1) << endl;
        }
    }
}