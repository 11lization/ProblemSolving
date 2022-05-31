#include <iostream>
using namespace std;

int arr[100];

int gcd(int n1, int n2){
    if(n2 == 0)
        return n1;
    else
        return gcd(n2, n1 % n2);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int testNum;

    cin >> testNum;

    while(testNum--){
        int caseNum;
        long sum = 0;
        cin >> caseNum;

        for(int i = 0; i < caseNum; i++)
            cin >> arr[i];

        for(int i = 0; i < caseNum; i++){
            for(int j = i + 1; j < caseNum; j++){
                sum += gcd(arr[i], arr[j]);
            }
        }

        cout << sum << "\n";
    }

    return 0;
}