#include <iostream>
#include <stack>
using namespace std;

int sequence[100000];
char result[200000];
stack<int> number;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int caseNum;
    int stackNum = 0;
    int resSize = 0;
    // int max = 0;
    bool keepGoing;

    cin >> caseNum;
    
    for(int i = 0; i < caseNum; i++)
        cin >> sequence[i];

    // max = sequence[0];

    // ¹Ý·Ê : 8 / 4 2 5 6 8 7 3 1
    // if(caseNum > 1){
    //     for(int i = 1; i < caseNum; i++){
    //         max = (max > sequence[i]) ? max : sequence[i];
    //         if(sequence[i-1] < max && sequence[i] < max && sequence[i - 1] < sequence[i]){
    //             cout << "NO";     
    //             keepGoing = false;
    //             break;
    //         }
    //     }
    // }

    for(int i = 0; i < caseNum; i++){
        if(sequence[i] > stackNum){
            while(sequence[i] > stackNum){
                number.push(++stackNum);
                result[resSize] = '+';
                resSize++;
            }
            number.pop();
            result[resSize] = '-';
            resSize++;
        }
        else{
            keepGoing = false;
            if(!number.empty()){
                if(sequence[i] == number.top()){
                    keepGoing = true;
                }
                number.pop();
                result[resSize] = '-';
                resSize++;
            }
        }
        if(!keepGoing){
            cout << "NO";
            return 0;
        }
    }

    for(int i = 0; i < resSize; i++)
        cout << result[i] << "\n";

    return 0;
}