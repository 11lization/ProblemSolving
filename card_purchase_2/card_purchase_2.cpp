#include <iostream>
#include <algorithm>
using namespace std;

int dp[1001];
int p[1001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        dp[i] = 10000000;
    }
    
    for(int i = 1; i <= n; i++){
        cin >> p[i];
    }
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            dp[i] = min(dp[i], dp[i-j] + p[j]);
        }
    }
    
    cout << dp[n];
}