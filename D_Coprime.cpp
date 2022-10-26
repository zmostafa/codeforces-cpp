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
        vector<int> arr(size);
        for(int i = 0; i < size; ++i)
            cin >> arr[i];
        int j = size - 1;
        int i = size - 1;
        if(arr[j] == 1){
            cout << j + j + 2 << endl;
        }else{
            bool flag = false;
            while(i--){
                cout << arr[i] << " " << arr[j] << " " << i << " " << j << endl;
                if(__gcd(arr[i], arr[j]) == 1){
                    // cout << arr[i] + arr[j] << endl;
                    flag = true;
                    break;
                }
                // else{
                //     if(arr[i] >= arr[j]){
                //         ++i;
                //     }
                //     else if(arr[i] < arr[j]){
                //         --j;
                //     }
                // }
            }
            flag ? cout << i + j + 2 << endl: cout << "-1" << endl;
        }
    }
    return 0;
}