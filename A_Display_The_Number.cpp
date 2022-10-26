#include <bits/stdc++.h>
#include <ios>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int numTests;
    cin >> numTests;

    while(numTests--){
        int nSevenSegments;
        cin >> nSevenSegments;
        
        if(nSevenSegments % 2 == 1){
            cout << 7;
            nSevenSegments -= 3;
        }
        while(nSevenSegments > 0){
            cout << 1;
            nSevenSegments -= 2;
        }
        cout << endl;
    }
    return 0;
}