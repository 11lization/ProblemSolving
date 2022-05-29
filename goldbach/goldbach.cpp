#include <iostream>
#define MAX 1000000
using namespace std;

bool check[1000001];

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    check[1] = true;
    for(int i = 2; i * i <= MAX; i++){
        for(int j = i * i; j <= MAX; j += i){
            check[j] = true;
        }
    }

    while(cin >> n){
        
        if(n == 0)
            return 0;

        bool exist = false;

        for(int i = 1; i < n; i += 2){
            if(!check[i] && !check[n-i]){
                exist = true;
                cout << n << " = " << i << " + " << n - i << "\n";
                break;
            } 
        }

        if(!exist)
            cout << "Goldbach's conjecture is wrong.\n";
    }

    return 0;
}