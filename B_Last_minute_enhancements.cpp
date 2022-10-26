#include <algorithm>
#include <bits/stdc++.h>
#include <ios>
#include <iostream>
#include <iterator>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int testCases;
    cin >> testCases;
    while(testCases--){
        int size;
        cin >> size;
        set<int> notes;
        for(int i=0; i<size; ++i){
            int num;
            cin >> num;
            if(notes.count(num)){
                ++num;
            }
            notes.insert(num);
        }

        cout << notes.size() << endl;
    }

    return 0;
}