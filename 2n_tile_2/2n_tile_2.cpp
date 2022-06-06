#include <iostream>
using namespace std;

int dp[1001];

int tile(int n){
    if(n == 1)
        return 1;
    
    if(n == 2)
        return 3;

    if(dp[n] != 0)
        return dp[n];

    dp[n] = tile(n - 1) + 2 * tile(n - 2);
    dp[n] %= 10007;

    return dp[n];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    cin >> n;

    cout << tile(n);
}

