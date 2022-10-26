#include <bits/stdc++.h>
#include <cctype>
#include <ios>
#include <iostream>
#include <stack>
#include <unordered_map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int rooms;
    cin >> rooms;
    char key; 
    int count = 0;
    unordered_map<char, int> frq;
    // cout << house << endl;
    for(int i=0; i < 2*rooms - 2; ++i){
        cin >> key;
        if(islower(key)){
            ++frq[key];
        }else{
            if(frq[tolower(key)] > 0){
                frq[tolower(key)]--;
            }else{
                ++count;
            }
        }
    }
    
    cout << count << endl;
    return 0;
}