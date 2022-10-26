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

    int num_stones;
    cin >> num_stones;
    string stones;
    cin >> stones;
    int count = 0;
    for(int i = 0 ; i < num_stones - 1; ++i){
        if(stones[i] == stones[i + 1]){
            ++count;
        }
    }

    cout << count << endl;

    return 0;
}