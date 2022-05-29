#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    int n;
    int cnt = 0;

    cin >> n;

    for(int i = 5; n / i != 0; i *= 5){
        cnt += n / i;
    }

    cout << cnt;
}