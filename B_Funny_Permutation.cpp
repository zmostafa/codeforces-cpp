#include <algorithm>
#include <bits/stdc++.h>
#include <ios>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int testCases;
    cin >> testCases;
    while(testCases--){
        int n;
        cin >> n;

        if(n == 3){
            cout << "-1" << endl;
            //break;
        }
        else if(n == 2){
            cout << "2 1" << endl;
            //break;
        }
        else {
            vector<int> arr(n);
            for(int i = 0; i < n; i++)
                arr[i] = i + 1;
            reverse(arr.begin(), arr.end());
            for(int i = 0 ; i < n / 2; ++i){
                cout << arr[i] << " ";
            }
            for(int i = n - 1; i >= n / 2; i--){
                cout << arr[i] << " ";
            }

            cout << endl;
        }
    }
    return 0;
}