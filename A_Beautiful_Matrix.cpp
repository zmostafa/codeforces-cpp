#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main(){
    constexpr int matrixSize = 5;
    int x,y;
    for(int i = 0; i < matrixSize; ++i){
        for(int j=0; j < matrixSize; ++j){
            int num;
            cin >> num;
            if(num == 1){
                x = i+1;
                y = j+1;
            }
        }
    }

    cout << (abs(3 - x) + abs(3 - y));
    return 0;
}