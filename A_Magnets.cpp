#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
#include <ios>
#include <iostream>
#include <ostream>
#include <shared_mutex>
#include <utility>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int magnits;
    cin >> magnits;
    int count = 0;
    string prv, curr;
    for(int i = 0 ; i < magnits; ++i){
        cin >> curr;
        if(prv.empty()){
            prv = curr;
            ++count;
        }else{
            if(curr[0] == prv[1]){
                ++count;
            }
            prv = curr;
        }
    }

    cout << count << endl;

    return 0;
}