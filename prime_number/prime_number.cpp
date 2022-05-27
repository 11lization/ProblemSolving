#include <iostream>
using namespace std;

bool check[1000001];

int main(){
    int min, max;
    
    cin >> min >> max;

    check[1] = true;
    for(int i = 2; i * i <= max; i++){
        for(int j = i * i; j <= max; j += i){
            check[j] = true;
        }
    }
    
    for(int i = min; i <= max; i++){
        if(!check[i])
            cout << i << "\n";
    }
}