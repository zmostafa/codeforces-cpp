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
    
    const vector<string> result {"", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    
    int yakko, wakko;
    cin >> yakko >> wakko;

    // int dot = 6 - max(yakko, wakko) + 1;
    // if(dot == 0.0){
    //     cout << "0/1" << endl;
    // }else if(dot == 1.0){
    //     cout << "1/1" << endl;
    // }else{
    //     int num = 0, dom = 0;
    //     if(6 % dot == 0){
    //         num = 1;
    //         dom = 6 / dot;
    //         cout << num << "/" << dom << endl;
    //     }else{
    //         cout << dot << "/" << "6" << endl;
    //     }
    // }
    cout << result[max(wakko,yakko)] << endl;

    return 0;
}