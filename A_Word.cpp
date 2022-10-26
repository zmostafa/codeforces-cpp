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

    string word;
    cin >> word;
    int upper = 0, lower = 0;
    for(auto& ch : word){
        isupper(ch) ? ++upper : ++lower;
    }
    if(upper > lower){
        std::transform(word.begin(),word.end(),word.begin(),[](char ch){
            return toupper(ch);
        });
    }else{
        std::transform(word.begin(),word.end(),word.begin(),[](char ch){
            return tolower(ch);
        });
    }

    cout << word << endl;

    return 0;
}