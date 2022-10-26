#include <bits/stdc++.h>
#include <ios>
#include <iostream>
#include <unordered_map>

using namespace std;
/*
aj−ai=j−i,
aj−j=ai−i
*/
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int testCases; 
    cin >> testCases;
    while(testCases--){
        int size;
        cin >> size;
        long long pairs = 0;
        unordered_map<int, int> st;
        for(int i = 0; i < size ; ++i){
            int x;
            cin >> x;
            // cout << x << endl;
            x -= i;
            // cout << x << endl;
            pairs += st[x];
            ++st[x];
        }
        cout << pairs << endl;
    }

    return 0;
}