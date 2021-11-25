#include <iostream>
#include <string>
#include <stack>
using namespace std;

void printplus(){ cout << '+' << endl;}
void printminus() {cout << '-' << endl;}

int main(){
    int n;
    cin >> n;
    
    stack<int> s;
    s.push(1);
    string p = "+";
    int max = 1;    // 현재 스택에 들어갔던 가장 큰 수를 저장하는 변수

    bool canMake = true;

    // n개의 정수를 얻는다.
    for(int input = 0; input < n; input++){
        int k;
        cin >> k;
        if(canMake == false) continue;

        if(s.empty() && k > max){  // 스택이 비었다면
            int i = max + 1;
            for(; i <= k; i++){    // i+1~k 까지 스택에 push
                s.push(i);
                p += '+';
            }
            max = k;
            s.pop();     // 현재 top에 있는 k를 pop 한다.
            p += '-';
        }
        else if(s.top() < k && k > max){    // top에 있는 숫자가 k 보다 작다면
            int i = max + 1;
            for(; i <= k; i++){    // i+1~k 까지 스택에 push
                s.push(i);
                p += '+';
            }
            max = k;
            s.pop();     // 현재 top에 있는 k를 pop 한다.
            p += '-';
        }else if(s.top() == k){ // top이 바로 k 라면
            s.pop();
            p += '-';
        }else{
            canMake = false;
        }
    }

    if(canMake){
        for(int i = 0; i < p.size(); i++){
            cout << p[i] << "\n";
        }
    }else{
        cout << "NO" << endl;
    }
}