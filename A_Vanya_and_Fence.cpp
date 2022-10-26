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

    int fenceHeight, friends;
    cin >> friends >> fenceHeight;
    vector<int> friendsHeights(friends);
    int roadWidth = 0;
    for(int i = 0 ; i < friends; ++i)
    {
        cin >> friendsHeights[i];
        if(friendsHeights[i] <= fenceHeight){
            roadWidth += 1;
        }else if(friendsHeights[i] > fenceHeight){
            roadWidth += 2;
        }
    }

    cout << roadWidth << endl;

    return 0;
}