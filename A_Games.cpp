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

    int teams;
    cin >> teams;
    vector<vector<int>> uniforms(teams,vector<int>(2,0));
    // cout << "inout started" << endl;
    for(int i = 0 ; i < teams; ++i){
        int h, a;
        cin >> h >> a;
        uniforms[i] = {h,a};
    }
    // cout << "input is done " << endl;
    int count = 0;
    for(auto& uniform : uniforms){
        for(int i = 0 ; i < teams; ++i){
            if((uniform[0] == uniforms[i][0] && uniform[1] == uniforms[i][1])){
                // cout << i << " " << uniform[0] << " " << uniform[1] << " " << uniforms[i][0] << " " << uniforms[i][1] << endl;
                continue;
            }else{
                if(uniform[0] == uniforms[i][1]){
                    ++count;
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}