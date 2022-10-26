#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){

    int testCases;
    cin >> testCases;

    while(testCases--){
        int size;
        cin >> size;
        bool flag = false;
        vector<int> dArr(size);
        for(int i = 0 ; i < size; ++i)
            cin >> dArr[i];
        vector<int> aArr(size);
        aArr[0] = dArr[0];
        for(int i = 1 ; i < size; ++i){
            if(dArr[i] > 0 && aArr[i-1] - dArr[i] >= 0){
                // cout << -1 << endl;
                flag = true;
                break;
            }else{
                aArr[i] = aArr[i-1] + dArr[i];
            }
        }
        
        if(flag){
            cout << -1 ;
        }else{
            for(auto& n : aArr){
                cout << n << " ";
            }
        }
        cout << endl;
    }

    return 0;
}