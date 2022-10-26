#include <bits/stdc++.h>
#include <complex>
#include <ios>
#include <iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int eggNumber;
    cin >> eggNumber;
    vector<pair<int,int>> prices(eggNumber);
    for(int i=0; i<eggNumber; ++i){
        cin >> prices[i].first >> prices[i].second;
    }

    long long a =0 , g = 0, x, y;
    string str;
    for(int i=0; i<eggNumber; ++i){
        x = abs((a + prices[i].first) - g);
        y = abs((g + prices[i].second) - a);

        if(x <= y){
            str += "A";
            a += prices[i].first;
        }else{
            str += "G";
            g += prices[i].second;
        }
    }

    if(abs(a - g) <= 500){
        cout << str << endl;
    }else{
        cout << "-1" << endl;
    }

    return 0;
}