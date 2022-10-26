#include <bits/stdc++.h>
#include <ios>
#include <string>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    int result = 0;
    cin >> n;
    while(n-- > 0){
        // cout << "Test Case: " << n << endl;
        string op;
        // getline(cin,op);
        cin >> op;
        // cout << "Operation: " << op << endl;
        if(op == "++X" || op == "X++"){
            ++result;
        }else if(op == "--X" || op == "X--"){
            --result;
        }
    }

    cout << result << endl;
    return 0;
}