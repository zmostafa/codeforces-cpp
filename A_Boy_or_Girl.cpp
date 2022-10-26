#include <algorithm>
#include <bits/stdc++.h>
#include <ios>
#include <iostream>
#include <ostream>
#include <shared_mutex>
#include <utility>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string username;
    cin >> username;
    set<char> st;
    for(auto& ch : username)
        st.insert(ch);
    st.size() % 2 == 0 ? cout << "CHAT WITH HER!" << endl : cout << "IGNORE HIM!" << endl;
    return 0;
}