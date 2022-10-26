#include <bits/stdc++.h>
#include <ios>
#include <ostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int testCases;
    cin >> testCases;
    while(testCases--){
        int noOfdigits;
        cin >> noOfdigits;
        vector<int> digits(noOfdigits);
        for(int i = 0; i < noOfdigits; ++i)
            cin >> digits[i];
        int usedDigits = 10 - noOfdigits;
        if(usedDigits == 2){
            cout << "6" << endl;
        }else{
            int pairs = usedDigits * (usedDigits - 1)/ 2;
            cout << pairs * 6 << endl;
        }
    }
    return 0;
}