#include <bits/stdc++.h>
#include <ios>
#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int testCases;
    cin >> testCases;
    while(testCases--){
        int n;
        int count = 0;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0 ; i < n; ++i){
            cin >> a[i];
        }
        for(int i = 0 ; i < n ; i++){
            cin >> b[i];
            if(b[i] != a[i] && 1 - a[i] == b[i]){
                ++count;
            }
        }

        cout << count << endl;
    }

}