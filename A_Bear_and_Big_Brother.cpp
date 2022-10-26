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

    int limakWeight, bobWeight;
    cin >> limakWeight >> bobWeight;
    int years = 0;
    while(limakWeight <= bobWeight){
        ++years;
        limakWeight *= 3;
        bobWeight *= 2;
    }

    cout << years << endl;

    return 0;
}