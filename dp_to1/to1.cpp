#include <cstdio>

int dp[1000000];

int to1(int n){
    if(n == 1)
        return 0;
    
    if(dp[n] == 0){
        if(n % 3 == 0)
            dp[n] = to1(n / 3) + 1;
        else if(n % 2 == 0)
            dp[n] = to1(n / 2) + 1;
        else
            dp[n] = to1(n - 1) + 1;
    }
    
    return dp[n];
}

int main(){

    dp[2] = 1;
    dp[3] = 1;

    int num;

    scanf("%d", &num);

    printf("%d", to1(num));
    
}