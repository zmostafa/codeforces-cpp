#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
#include <ios>
#include <iostream>
#include <iterator>
#include <ostream>
#include <shared_mutex>
#include <utility>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int> alphabet(26);

    string exhibit;
    cin >> exhibit;

    int rotations = 0;
    char next = 'a';
    // distance between points x and y on the circle of length l (26 in our case) is min(|x - y|, l - |x - y|)
    for(auto& ch : exhibit){
        // cout << ch << " " << ch - 'a' + 1<< endl;
        // cout << abs((ch - 'a') - (next - 'a')) << " " << (26 - abs((ch - 'a') - (next - 'a'))) << endl;
        rotations += min(abs((next - 'a') - (ch - 'a')), (26 - abs((next - 'a') - (ch - 'a'))));
        next = ch;
    }

    cout << rotations << endl;

    return 0;
}