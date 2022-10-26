#include <algorithm>
#include <bits/stdc++.h>
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

    int colNums;
    cin >> colNums;
    vector<int> colCubes(colNums);
    for(int i = 0 ; i < colNums; ++i){
        cin >> colCubes[i];
    }

    sort(colCubes.begin(), colCubes.end());

    for(auto& col : colCubes)
        cout << col << " ";

    cout << endl;

    return 0;
}