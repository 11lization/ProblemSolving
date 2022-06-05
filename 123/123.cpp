#include <iostream>
using namespace std;

int dp[11];

int plus123(int n){

    if(n == 0 || n == 1 || n == 2)
        return n;

    if(n == 3)
        return 4;

    if(dp[n] != 0)
        return dp[n];

    dp[n] = plus123(n - 1) + plus123(n - 2) + plus123(n - 3);

    return dp[n];
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, i;

    cin >> n;

    while(n--){
        cin >> i;

        cout << plus123(i) << "\n";
    }

    return 0;
}