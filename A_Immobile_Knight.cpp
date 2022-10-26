#include <bits/stdc++.h>

using namespace std;

int main(){


    int testCases = 0 ;
    std::cin >> testCases;
    while(testCases--){
        int n , m;

        std::cin >> n >> m;
        if(n == 1 || m == 1){
            std::cout << n << " " << m << endl;
        }else if(n == 8 && m == 8){
            std::cout << n - 1 << " " << m - 6 << endl;
        }else{
            for(int i = 0 ; i < n ; ++i){
                for (int j = 0 ; j < m ; ++j){
                    if(j + 2 > m && i + 2 > n){
                        cout << i << " " << j << endl;
                        // break;
                    }
                }
            }
        }
    }
    return 0;
}