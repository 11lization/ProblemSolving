#include <iostream>
using namespace std;

bool check[1001];
int arr[100];

int main(){
    int caseNum;
    int cnt = 0;
    
    cin >> caseNum;

    for(int i = 0; i < caseNum; i++)
        cin >> arr[i];
    
    check[1] = true;
    for(int i = 2; i * i <= 1000; i++){
        for(int j = i * i; j <= 1000; j += i){
            check[j] = true;
        }
    }
    
    for(int i = 0; i < caseNum; i++){
        if(!check[arr[i]])
            cnt++;
    }
    
    cout << cnt;
}