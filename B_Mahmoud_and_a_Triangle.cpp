#include <algorithm>
#include <bits/stdc++.h>
#include <ios>
#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int num;
    cin >> num;
    vector<int> segments(num);
    for(int i=0; i<num; ++i){
        cin >> segments[i];
    }

    sort(segments.begin(), segments.end());
    bool flag = false;
    if(num < 3){
        cout << "NO" << endl;
    }else{
        for(int i=0 ;i<num - 2; ++i){
            if(segments[i] + segments[i+1] > segments[i+2]){
                flag = true;
                break;
            }
        }
    }
    if(flag){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}