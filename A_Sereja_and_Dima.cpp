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

    int numbers;
    cin >> numbers;
    vector<int> values(numbers);
    for(int i = 0 ; i < numbers; ++i)
        cin >> values[i];
    
    int s_points = 0;
    int d_points = 0;

    int left = 0, right = numbers - 1;
    bool s_turn = true, d_turn = false;
    while(left <= right){
        if(values[left] > values[right]){
            if(s_turn){
                s_points += values[left];
                s_turn = false;
                d_turn = true;
            }else if(d_turn){
                d_points += values[left];
                s_turn = true;
                d_turn = false;
            }
            ++left;
        }else{
            if(s_turn){
                s_points += values[right];
                s_turn = false;
                d_turn = true;
            }else if(d_turn){
                d_points += values[right];
                s_turn = true;
                d_turn = false;
            }
            --right;
        }
    }

    cout << s_points << " " << d_points << endl;

    return 0;
}