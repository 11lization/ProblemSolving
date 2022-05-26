#include <iostream>
using namespace std;

int gcd(int n1, int n2){
    if(n2 == 0)
        return n1;
    else
        return gcd(n2, n1 % n2);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n1, n2;
    
    cin >> n1 >> n2;
    
    int g = gcd(n1, n2);
    cout << g << "\n" << n1 * n2 / g;
}