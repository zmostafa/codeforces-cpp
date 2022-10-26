#include <bits/stdc++.h>
#include <ios>
#include <iostream>
#include <ostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int testCases;
    cin >> testCases;
    map<string,int> accounts;
    for(int i = 0 ; i < testCases ; ++ i){
        string account;
        cin >> account;
        
        if(accounts[account] == 0){
            cout << "OK" << endl;
            ++accounts[account];
        }else{
            cout << account << accounts[account] << endl; 
            accounts[account] += 1;
        }
    }
    return 0;
}