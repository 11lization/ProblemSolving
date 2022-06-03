#include <iostream>
using namespace std;

int dp[1000001];

int toOne(int n){
    
    int temp;
    
    if(n == 1)
        return 0;
    
    if(dp[n] != 0)
        return dp[n];

    //중복되는 값들은 저장하자.
    /*if(n % 6 == 0){
        dp[n] = 1 + min(min(toOne(n - 1), toOne(n / 2)), toOne(n / 3));
    }
    else if(n % 3 == 0){
        dp[n] = 1 + min(toOne(n - 1), toOne(n / 3));
    }
    else if(n % 2 == 0){
        dp[n] = 1 + min(toOne(n - 1), toOne(n / 2));
    }
    else
        dp[n] = 1 + toOne(n - 1);*/
    
    dp[n] = toOne(n - 1) + 1;
    
    if(n % 2 == 0){
        temp = toOne(n / 2) + 1;
        if(temp < dp[n])
            dp[n] = temp;
    }
    
    if(n % 3 == 0){
        temp = toOne(n / 3) + 1;
        if(temp < dp[n])
            dp[n] = temp;
    }
    
    return dp[n];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    
    dp[2] = 1;
    dp[3] = 1;
    
    cin >> N;
    
    N = toOne(N);
    
    cout << N;
}