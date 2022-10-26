#include <bits/stdc++.h>

using namespace std;

int main(){

    int testCases;
    cin >> testCases;

    while(testCases--){
        int size;
        cin >> size;
        set<int> unique;
        for(int i=0; i<size; ++i){
            int num;
            cin >> num;
            unique.insert(num);
        }
        cout << unique.size() << endl;
    }
    return 0;
}