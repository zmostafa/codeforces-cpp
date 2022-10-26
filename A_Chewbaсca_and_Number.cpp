#include <bits/stdc++.h>
#include <ios>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    unsigned long long num;
    unsigned long long result = 0;
    cin >> num;

    auto str = to_string(num);
    for(int i=0; i<str.size(); ++i){
        // cout << "Number : " << (str[i] - '0') << endl;
        if((9 - (str[i] - '0') < (str[i] - '0')) ){
            if(i == 0 && (9 - (str[i] - '0')) == 0){
                 result = result * 10 + (str[i] - '0');
            }
            else{
                result = result * 10 + (9 - (str[i] - '0'));
                // cout << "when true : " << result << endl;
            }
        }else{
            result = result * 10 + (str[i] - '0');
            // cout << "Not true : " << result << endl;
        }
    }

    if(result < num){
        cout << result << endl;
    }else{
        cout << num << endl;
    }

    return 0;
}