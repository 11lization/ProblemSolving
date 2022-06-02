#include <iostream>
#define MAX 1000000
using namespace std;

bool check[1000001];

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt;
    int caseNum, n;

    check[1] = true;
    for(int i = 2; i * i <= MAX; i++){
        for(int j = i * i; j <= MAX; j += i){
            check[j] = true;
        }
    }

    cin >> caseNum;

    while(caseNum--){
        
        cin >> n;
        cnt = 0;
        
        if(n == 0)
            return 0;

        // i += 2로 할 경우 4 = 2 + 2를 처리할 수 없다.
        for(int i = 1; i <= n/2; i += 1){
            if(!check[i] && !check[n-i]){
                cnt++;
            } 
        }

        cout << cnt << '\n';
    }

    return 0;
}