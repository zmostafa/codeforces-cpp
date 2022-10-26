#include <bits/stdc++.h>
#include <bitset>
#include <iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int numOfproblems = 0;
    int agreedSolutions = 0;
    cin >> numOfproblems;
    while(numOfproblems-- > 0){
        int Petya = 0, Vasya = 0, Tonya = 0;
        bitset<3> votes;
        cin >> Petya >> Vasya >> Tonya;
        votes[0] = Petya;
        votes[1] = Vasya;
        votes[2] = Tonya;
        
        if(votes.count() >= 2){
            ++agreedSolutions;
        }
        
    }
    cout << agreedSolutions << endl;
    return 0;
}