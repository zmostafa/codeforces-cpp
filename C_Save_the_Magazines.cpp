#include <bits/stdc++.h>
#include <ios>
#include <ostream>
#include <regex>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int testCases;
    cin >> testCases;
    while(testCases--){
        int size;
        cin >> size;
        string lids;
        cin >> lids;
        int countLids = 0;
        // for(int i = 0 ; i < size; ++i){
        //     if(lids[i] == '1'){
        //         // ++countLids;
        //     }
        // }
        // vector<pair<int,int>> magazine(size);
        // for(int i = 0; i < size; ++i)
        // {
        //     int num;
        //     cin >> num;
        //     magazine.push_back({num,i});
        // }

        // sort(magazine.begin(),magazine.end(),[](const pair<int,int>& a, const pair<int,int>& b){
        //     return a.first > b.first;
        // });

        // int maxMagazine = 0;
        // for(int i = 0, j = 0; j++ <= countLids && i < size; ++i){
        //     // cout << magazine[i].first << " " << magazine[i].second << endl;
        //     // cout << lids[magazine[i].second] << " " << lids[magazine[i].second + 1] << endl;
        //     if(lids[magazine[i].second] == '1' || (magazine[i].second + 1  < size && lids[magazine[i].second + 1] == '1')){
        //         maxMagazine += magazine[i].first;
        //         lids[magazine[i].second + 1] = '0';
        //         lids[magazine[i].second] = '1';
        //     }else{
        //         // cout << "did not count " << endl;
        //     }
        // }
        // cout << maxMagazine << endl;
        vector<int> magazine(size);
        for(int i = 0 ; i < size; ++i){
            cin >> magazine[i];
        }
        int answer = 0;
        int i = 0 ;
        while(i < size){
            int minimum = magazine[i];
            int sum = magazine[i];
            int j = i + 1;
            while(j < size && lids[j] == '1'){
                minimum = min(minimum, magazine[j]);
                sum += magazine[j];
                ++j;
            }
            answer += sum - minimum;
            i = j;
        }
        cout << answer << endl;
        
    }
    return 0;
}