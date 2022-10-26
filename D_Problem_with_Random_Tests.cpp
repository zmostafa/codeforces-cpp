#include <bits/stdc++.h>
#include <bitset>
#include <ios>
#include <iostream>
#include <ostream>
#include <regex>
#include <string>
#include <vector>

using namespace std;

void subString(const string str, set<string>& subStrings){
    for(int i = 0 ; i < str.size(); ++i){
        string substr;
        for(int j = i; j < str.size(); ++j){
            substr += str[j];
            subStrings.insert(substr);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int num;
    cin >> num;
    char ch;
    string str;
    for(int i = 0 ; i < num; ++i)
    {
        cin >> ch;
        str += ch;
    }
    if(stoi(str) == 0){
        cout << 0 << endl;
        return 0;
    }
    set<string> subStrings;
    subString(str, subStrings);
    int maxNum = 0;
    for(auto& substr : subStrings){
        // cout << substr << " " << str << endl;
        int _num = stoi(str,0,2) | stoi(substr,0,2);
        // cout << _num << endl;
        maxNum = max(maxNum,_num);
    }

    auto finalString = bitset<64>(maxNum).to_string();
    finalString.erase(0,finalString.find_first_not_of('0'));
    cout << finalString << endl;
    
    return 0;
}