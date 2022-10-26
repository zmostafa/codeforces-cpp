#include <algorithm>
#include <bits/stdc++.h>
#include <ios>
#include <ostream>
#include <shared_mutex>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int testCases;
    cin >> testCases;
    while(testCases--){
        // cout << testCases << " test case " << endl;
        int size, rocks;
        cin >> size >> rocks;
        vector<pair<int,int>> coord(rocks);
        set<int> xS, yS;
        for(int i = 0 ; i < rocks; ++i){
            int x, y;
            cin >> x >> y;
            // cout << x << " " << y << endl;
            coord[i] = {x - 1,y - 1};
            xS.insert(x - 1);
            yS.insert(y - 1);
        }
        auto flag = false;
        for(int i = 0 ; i < rocks; ++i){
            // cout << coord[i].first << " " << coord[i].second << endl;
            // cout << coord[i].first - 1 << " " << coord[i].first + 1 << endl;
            // // cout << coord[i].second - 1 << " " << coord[i].second + 1 << endl;
            if((coord[i].first - 1 >= 0 && xS.find(coord[i].first - 1) == xS.end()) || ((coord[i].first + 1 < size) && xS.find(coord[i].first + 1) == xS.end())){
                flag = true;
                break;
            }else if(((coord[i].second - 1 >= 0) && yS.find(coord[i].second - 1) == yS.end()) || ((coord[i].second + 1 < size) && yS.find(coord[i].second + 1) == yS.end())){
                flag = true;
                break;
            }
        }
        flag ? cout << "YES" << endl : cout << "NO" << endl;
        
    }
    return 0;
}