#include <bits/stdc++.h>
#include <ios>
#include <iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin.tie(0);

    int testCases;
    cin >> testCases;
    while(testCases--){
        int a, b, c;
        cin >> a >> b >> c;
        if((a + b == c) || (a + c == b) || (b + c == a)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}