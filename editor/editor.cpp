#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

char editor[600000];

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int commandNum;
    stack<char> lstack, rstack;

    cin >> editor;
    cin >> commandNum;

    // strlen�� ��� ����ϹǷ� �ð��� ���� �ɸ���.
    // for(int i = 0; i < strlen(editor); i++)
    //     lstack.push(editor[i]);

    int n = strlen(editor);
    for(int i = 0; i < n; i++)
        lstack.push(editor[i]);

    while(commandNum--){
        char command;
        cin >> command;
        switch(command){
            case 'L':
                if(!lstack.empty()){
                    rstack.push(lstack.top());
                    lstack.pop();
                }
                break;
            case 'D':
                if(!rstack.empty()){
                    lstack.push(rstack.top());
                    rstack.pop();
                }
                break;
            case 'B':
                if(!lstack.empty())
                    lstack.pop();
                break;
            case 'P':
                char c;
                cin >> c;
                lstack.push(c);
                break;
        }
    }

    while(!lstack.empty()){
        rstack.push(lstack.top());
        lstack.pop();
    }

    while(!rstack.empty()){
        cout << rstack.top();
        rstack.pop();
    }

    return 0;
}