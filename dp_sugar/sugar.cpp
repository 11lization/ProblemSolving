#include <cstdio>
#include <algorithm>
using namespace std;

int sugar[5001];

int dp(int n){
    if(sugar[n] == 0){
        if(n % 5 == 0)
            sugar[n] = n / 5;
        else if(n % 3 == 0)
            sugar[n] = dp(n - 3) + 1;
        else if(dp(n - 5) > 0 && dp(n - 3) > 0)
            sugar[n] = min(dp(n - 5), dp(n - 3)) + 1;
        else
            sugar[n] = -1;
    }

    return sugar[n];
}

int main(){    
    int test;
    
    sugar[1] = -1;
    sugar[2] = -1;
    sugar[3] = 1;
    sugar[4] = -1;
    sugar[5] = 1;

    scanf("%d", &test);
    
    printf("%d", dp(test));
}