#include <bits/stdc++.h>
#include <ios>
#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int testCases; 
    cin >> testCases;

    while (testCases--) {
        int passwordLength;
        cin >> passwordLength;
        vector<int> password(passwordLength);
        for(int i=0; i<passwordLength; ++i){
            cin >> password[i];
        }
        // bool processing = true;
        // while(processing){
        //     int i;
        //     for(i=0; i<password.size() - 1; ++i){
        //         if(password[i] != password[i+1]){
        //             password[i] += password[i+1];
        //             password.erase(password.begin() + i);
        //             break;
        //         }

        //     }
        //     if(i == password.size() - 1){
        //         processing = false;
        //     }
        // }

        // cout << password.size() << endl;
        sort(password.begin(),password.end());
        if(password.front() == password.back()){
            cout << passwordLength << endl;
        }else{
            cout << "1" << endl;
        }
    }
    return 0;
}