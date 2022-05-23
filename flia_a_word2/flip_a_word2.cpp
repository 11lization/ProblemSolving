#include <iostream>
#include <string>
#include <stack>
using namespace std;

string str;
stack<char> word;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    bool intag = false;

    getline(cin, str);
    for(int i = 0; i < str.length(); i++){
        // if(str[i] == '<')
        //     intag = true;
        // if(str[i] == '>'){
        //     intag = false;
        //     cout << str[i];
        //     continue;
        // }
        // if(intag){
        //     cout << str[i];
        //     continue;
        // }
        // if(str[i] != ' '){
        //     word.push(str[i]);
        // }
        // if(str[i] == ' ' || str[i + 1] == '<' ||i == str.length() - 1){
        //     while(!word.empty()){
        //         cout << word.top();
        //         word.pop();
        //     }
        //     if(str[i + 1] != '<')
        //         cout << ' ';
        // }

        //if/else if를 이용하면 continue 없이 조금 더 깔끔하게 할 수 있겠지.
        if(str[i] == '<'){
            intag = true;
            cout << str[i];
        }
        else if(str[i] == '>'){
            intag = false;
            cout << str[i];
        }
        else if(intag){
            cout << str[i];
        }
        else {
            if(str[i] != ' ')
                word.push(str[i]);
            if(str[i] == ' ' || str[i + 1] == '<' ||i == str.length() - 1){
                while(!word.empty()){
                    cout << word.top();
                    word.pop();
                }
                if(str[i + 1] != '<')
                    cout << ' ';
            }
        }
    }
    
    cout << "\n";

}