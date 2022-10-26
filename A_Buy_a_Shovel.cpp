#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
#include <ios>
#include <iostream>
#include <iterator>
#include <ostream>
#include <shared_mutex>
#include <utility>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int price, burles;
    cin >> price >> burles;

    for(int i = 1; i <= 10; ++i){
        if((i * price) % 10 == 0 || (i * price) % 10 == burles){
            cout << i << endl;
            break;
        }
    }

    return 0;
}