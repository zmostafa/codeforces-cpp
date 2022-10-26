#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
#include <ios>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string str1, str2;
    cin >> str1 >> str2;

    for_each(str1.begin(), str1.end(), [](char & ch){
        ch = ::tolower(ch);
    });

    for_each(str2.begin(), str2.end(), [](char & ch){
        ch = tolower(ch);
    });

    if(str1 == str2){
        cout << 0 << endl;
    }else if(str1 < str2){
        cout << -1 << endl;
    }else{
        cout << 1 << endl;
    }

    return 0;
}