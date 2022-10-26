#include <algorithm>
#include <bits/stdc++.h>
#include <ios>
#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int students,answers;
    cin >> students >> answers;
    
    int answer = 0;
    vector<string> sutdentAnswers;
    for(int i=0; i<students; ++i){
        string answerstring;
        cin >> answerstring;
        sutdentAnswers.push_back(answerstring);
    }
    // for(auto& answer : sutdentAnswers){
    //     cout << "Recorded Answer : " << answer << endl;
    // }
    vector<int> points;
    for(int i=0; i<answers;++i){
        int point;
        cin >> point;
        points.push_back(point);
    }
    // for(auto& point : points){
    //     cout << "Points : " << point << endl;
    // }

    for(int i=0; i<answers; ++i){
        unordered_map<char, int> mp;
        for(int j=0;j<students;++j){
            
            ++mp[sutdentAnswers[j][i]];
        }

        int maxPoint = 0;
        for(auto& m : mp){
            maxPoint = max(maxPoint,m.second);
        }

        answer += (maxPoint * points[i]);
    }

    cout << answer << endl;
    return 0;
}