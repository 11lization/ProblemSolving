#include <iostream>
using namespace std;

int bro[100000];

int gcd(int a, int b){
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int broNum, broLo, subin;
    int d;

    cin >> broNum >> subin;

    for(int i = 0; i < broNum; i++){
        cin >> broLo;
        bro[i] = broLo > subin ? broLo - subin : subin - broLo;
    }

    d = bro[0];
    for(int i = 1; i < broNum; i++){
        d = gcd(d, bro[i]);
    }

    cout << d;

    return 0;
}