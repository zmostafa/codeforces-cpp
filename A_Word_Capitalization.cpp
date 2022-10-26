#include <bits/stdc++.h>
#include <cctype>
#include <ios>
#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string str;
    cin >> str;
    str[0] = ::toupper(str[0]);
    cout << str << endl;

    return 0;
}