#include <iostream>
#include <string>
#include <stack>
using namespace std;

string str;
stack<char> word;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int caseNum;

    cin >> caseNum;
    cin.ignore();

    while(caseNum--){
        getline(cin, str);
        for(int i = 0; i < str.length(); i++){
            if(str[i] != ' '){
                word.push(str[i]);
            }
            if(str[i] == ' ' || i == str.length() - 1){
                while(!word.empty()){
                    cout << word.top();
                    word.pop();
                }
                cout << ' ';
            }
        }
        cout << "\n";
    }

}