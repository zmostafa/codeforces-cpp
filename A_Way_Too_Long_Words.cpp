#include <bits/stdc++.h>
#include <ios>
#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n =0;
    cin >> n;
    while(n-- > 0){
        string str;
        cin >> str;
        if(str.length() > 10){
            string s;
            s += str[0];
            s += to_string(str.length() - 2);
            s += str[str.length() - 1];
            cout << s << endl;
        }else {
            cout << str << endl;
        }
    }

    return 0;
}