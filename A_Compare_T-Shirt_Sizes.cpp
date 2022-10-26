#include <bits/stdc++.h>
#include <ios>
#include <limits>
#include <unordered_map>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin.tie(0);

    int testCases;
    cin >> testCases;
    unordered_map<char, int> mp {{'M', 0}, {'S', -1}, {'L', 1}};
    while (testCases--) {
        string a, b;
        cin >> a >> b;
        if(a == b){
            cout << "=" << endl;
        }else{
            int first = 0, second = 0;
            // if(a.back() == 'S'){
            //     --first;
            // }else{
            //     ++first;
            // }
            // if(b.back() == 'S'){
            //     --second;
            // }else{
            //     ++second;
            // }
            first = mp[a.back()];
            second = mp[b.back()];

            for(int i = 0; i < a.size() - 1 ; ++i){
                first < 0 ? --first : ++first;
            }
            for(int i = 0 ; i < b.size() - 1; ++i){
                second < 0 ? --second : ++second;
            }

            if(first < second)
                cout << "<" << endl;
            else if(first > second)
                cout << ">" << endl;
            else
                cout << "=" << endl;
        }
    }

    return 0;
}