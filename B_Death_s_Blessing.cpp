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

    int testCases;
    cin >> testCases;
    while(testCases--){
        int numMonsters;
        cin >> numMonsters;
        vector<long long> h(numMonsters);
        vector<long long> time(numMonsters);
        for(int i = 0; i < numMonsters; ++i){
            cin >> h[i];
        }
        for (int i = 0; i < numMonsters; ++i) {
            cin >> time[i];
        }

        // if(numMonsters < 3){
        //     long long timeTokill = h[0];
        //     timeTokill += h[1] + time[0];
        //     cout << timeTokill << endl;
        //     // break;
        // }

        vector<pair<long,long>> pairs;
        for(int i = 0 ; i < numMonsters; ++i){
            pairs.push_back({h[i],time[i]});
        }
        sort(pairs.begin(),pairs.end(),[](const pair<long, long>& a, const pair<long,long>& b){
            return a.second < b.second;
        });

        long long  timeTokill = pairs[0].first;
        for(int i = 1; i < numMonsters; ++i){
            timeTokill += pairs[i].first + pairs[i -1].second;
        }

        cout << timeTokill << endl;
        
    }
    return 0;
}