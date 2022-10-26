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
    constexpr int size = 4;
    vector<int> calories(size);
    for(int i = 0 ; i < size; ++i)
        cin >> calories[i];
    string squares;
    cin >> squares;

    int calories_burnt = 0;
    for(auto& ch : squares){
        calories_burnt += calories[(ch - '0') - 1];
    }

    cout << calories_burnt << endl;

    return 0;
}