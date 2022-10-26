#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
    long long num;
    cin >> num;
    auto numStr = to_string(num);
    int count = 0;
    for(auto& ch : numStr){
        if(ch == '4' || ch == '7'){
            ++count;
        }
    }

    auto countStr = to_string(count);
    // cout << "Count Str : " << countStr << endl; 
    for(auto& ch : countStr){
        if(ch != '4' && ch != '7'){
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}