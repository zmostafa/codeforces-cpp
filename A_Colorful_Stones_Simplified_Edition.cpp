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

    string stones, instructions;
    cin >> stones;
    cin >> instructions;
    int position = 0;
    for(int i = 0 ; i < instructions.size(); ++i){
        if(instructions[i] == stones[position]){
            ++position;
        }
    }

    cout << position + 1 << endl;

    return 0;
}