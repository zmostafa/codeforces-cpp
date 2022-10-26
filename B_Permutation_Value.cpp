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
        int num;
        cin >> num;
        vector<int> permuatation;
        for(int i = 1; i <= num; ++i)
            permuatation.push_back(i);
        // swap(permuatation[0], permuatation[3]);
        reverse(permuatation.begin() + 1, permuatation.end());
        for(auto& n : permuatation)
            cout << n << " ";
        cout << endl;
    }
    return 0;
}