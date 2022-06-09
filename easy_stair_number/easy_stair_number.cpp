#include <iostream>
using namespace std;

long long dp[101][10];

long long stair(int len, int i){

    if(len == 0 || (len == 1 && i == 0))
        return 0;

    if(len == 1)
        return 1;
    
    if(dp[len][i])
        return dp[len][i];
    
    if(i == 0){
        dp[len][i] = stair(len - 1, i + 1);
        dp[len][i] %= 1000000000;
    }
    else if(i == 9){
        dp[len][i] = stair(len - 1, i - 1);
        dp[len][i] %= 1000000000;
    }
    else{
        dp[len][i] = stair(len - 1, i - 1) + stair(len - 1, i + 1);
        dp[len][i] %= 1000000000;
    }

    return dp[len][i];
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int len;
    long long str = 0;

    cin >> len;
    
    for(int i = 0; i < 10; i++){
        str += stair(len, i);
        str %= 1000000000;
    }

    cout << str;

    return 0;
}
