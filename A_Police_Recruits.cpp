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

    int events;
    cin >> events;

    int crimes = 0;
    int officers = 0;
    for(int i = 0; i < events; ++i){
        int tmp;
        cin >> tmp;
        if(tmp < 0 && officers == 0){
            ++crimes;
        }else if(tmp < 0 && officers > 0){
            --officers;
        }else if(tmp > 0){
            officers += tmp;
        }
    }

    cout << crimes << endl;

    return 0;
}