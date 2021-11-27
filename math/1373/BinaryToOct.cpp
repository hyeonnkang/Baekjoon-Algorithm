#include <iostream>
#include <string>
using namespace std;

int main(){
    string b;
    cin >> b;

    while((b.size()-1) % 3 != 0){
        b = "0" + b;
    }

    string result = "";
    for(int i = 0; i < b.size(); i += 3){
        int x = 0;
        int y = 1;
        for(int j= i; j < i+3; j++){
            x += (b[j]-'0') * y;
            y *= 2;
        }
        result += to_string(x);
    }

    for(int i = 0; i < result.size(); i++){
        cout << result[i];
    }
    cout << endl;
}