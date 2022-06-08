#include <iostream>
using namespace std;

long long dp[100001][4];

long long plus123(int n, int i){
    
    if(n <= 0)
        return 0;
    
    if(dp[n][i])
        return dp[n][i];
    else if(i == 1){
        dp[n][i] = plus123(n - 1, 2) + plus123(n - 1, 3);
        dp[n][i] %= 1000000009;
    }
    else if(i == 2){
        dp[n][i] = plus123(n - 2, 1) + plus123(n - 2, 3);
        dp[n][i] %= 1000000009;
    }
    else if(i == 3){
        dp[n][i] = plus123(n - 3, 1) + plus123(n - 3, 2);
        dp[n][i] %= 1000000009;
    }

    return dp[n][i];
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int caseNum, i;

    dp[1][1] = 1;
    dp[2][2] = 1;
    dp[3][1] = 1;
    dp[3][2] = 1;
    dp[3][3] = 1;

    cin >> caseNum;

    while(caseNum--){
        cin >> i;

        cout << (plus123(i, 1) + plus123(i, 2) + plus123(i, 3)) % 1000000009 << "\n";
    }

    return 0;
}
