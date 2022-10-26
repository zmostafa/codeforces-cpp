#include <bits/stdc++.h>
#include <ios>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    // vector<int> lettersFreq(26,0);
    vector<queue<int>> lettersFreq(26);
    int letters, kRemoved;
    string str;
    cin >> letters >> kRemoved;
    cin >> str;
    // cccaabababaccbc
    for(int i=0; i < str.size(); ++i){
        // ++lettersFreq[str[i] - 'a'];
        lettersFreq[str[i] - 'a'].push(i);
    }
    // for(int i=0; i < str.size(); ++i){
    //     cout << lettersFreq[str[i] - 'a'] << endl;
    // }
    for(int i=0; i<lettersFreq.size(); ++i){
        //if(lettersFreq[str[i] - 'a'] > 0){
            while(lettersFreq[i].size() > 0 && kRemoved > 0){
                // str[str.find(i+'a')] = '$';
                str[lettersFreq[i].front()] = '$';
                --kRemoved;
                // --lettersFreq[i];
                lettersFreq[i].pop();
            }
        //}
    }

    string result;
    for(int i=0; i<str.size(); ++i){
        if(str[i] != '$'){
            result += str[i];
        }
    }

    cout << result << endl;
    return 0;
}