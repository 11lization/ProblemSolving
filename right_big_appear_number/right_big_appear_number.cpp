#include <iostream>
#include <stack>
using namespace std;

    int app[1000000];

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int arrLen;
    cin >> arrLen;

    int* arr = new int[arrLen];
    int* res = new int[arrLen];
    stack<int> st;

    for(int i = 0; i < arrLen; i++){
        cin >> arr[i];
        app[arr[i]]++;
    }

    for(int i = 0; i < arrLen; i++){
        if(st.empty())
            st.push(i);
        else{
            while(!st.empty() && app[arr[st.top()]] < app[arr[i]]){
                res[st.top()] = arr[i];
                st.pop();
            }
            st.push(i);
        }
    }

    while(!st.empty()){
        res[st.top()] = -1;
        st.pop();
    }

    for(int i = 0; i < arrLen; i++){
        cout << res[i] << " ";
    }

    free(arr);
    free(res);
    return 0;

}