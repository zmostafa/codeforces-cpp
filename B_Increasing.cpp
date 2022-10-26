#include <bits/stdc++.h>
#include <ios>
#include <ostream>

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
        vector<long long> arr(size);
        
        for(int i = 0 ; i < size; ++i){
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        bool flag = true;
        for(int i = 1 ; i < size; ++i){
            if(arr[i] <= arr[i - 1]){
                flag = false;
                break;
            }
        }
        flag ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}