#include <bits/stdc++.h>
#include <bitset>
#include <iostream>

using namespace std;

int main(){
    constexpr int maxPersons = 100;
    int persons;
    cin >> persons;
    bitset<maxPersons> answers;
    for(int i=0; i< persons; ++i){
        int answer;
        cin >> answer;
        answers[i] = answer;
    }

    if(answers.count() >= 1){
        cout << "HARD" << endl;
    }else{
        cout << "EASY" << endl;
    }

    return 0;
}