#include <algorithm>
#include <bits/stdc++.h>
#include <limits>

using namespace std;

int main(){

    int socksPairs;
    cin >> socksPairs; 
    int socksCount = numeric_limits<int>::min();
    set<int> st;
    for(int i = 0 ; i < 2 * socksPairs; ++i){
        int sock;
        cin >> sock;
        if(st.find(sock) == st.end()){
            st.insert(sock);
            socksCount = max(socksCount, static_cast<int>(st.size()));
        }else{
            st.erase(sock);
        }
    }

    cout << socksCount << endl;
    return 0;
}