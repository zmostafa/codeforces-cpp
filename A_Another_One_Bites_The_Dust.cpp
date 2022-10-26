#include <bits/stdc++.h>

using namespace std;

int main(){

    unsigned long long a, b, c;
    cin >> a >> b >> c;

    cout <<  2 * c + min(a, b) + min(max(a, b),min(a, b) + 1) << endl;
    return 0;
}