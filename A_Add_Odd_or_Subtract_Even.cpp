#include <bits/stdc++.h>
#include <ios>
#include <iostream>
#include <utility>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int testCases;
    cin >> testCases;
    while (testCases--) {
        int a, b;
        cin >> a >> b;
        if(a == b){
            cout << 0 << endl;
        }else{
            cout << 1 + int((a < b) ^ ((b - a) & 1)) << endl;
        }
    }
    return 0;
}