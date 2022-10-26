#include <bits/stdc++.h>

using namespace std;

int main(){

    long long num;
    int k;
    cin >> num >> k;

    for(int i=0; i< k; ++i){
        auto lastDigit = num % 10;
        num /= 10;
        if(lastDigit > 0){
            --lastDigit;
            num *= 10;
            num += lastDigit;
        }else{
            continue;
        }
    }

    cout << num << endl;
    return 0;
}