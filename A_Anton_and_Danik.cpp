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

    int noOfGames ;
    cin >> noOfGames;
    string results;
    cin >> results;
    int k_a = 0 , k_d = 0;
    for(auto& ch : results){
        if(ch == 'A')
            ++k_a;
        else
         ++k_d;
    }

    if(k_a > k_d){
        cout << "Anton" << endl;
    }else if(k_d > k_a){
        cout << "Danik" << endl;
    }else{
        cout << "Friendship" << endl;
    }

    return 0;
}