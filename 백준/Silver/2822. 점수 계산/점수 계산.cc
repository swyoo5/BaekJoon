#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(pair<int, int> a, pair<int, int> b);

int main(void) {
    vector<pair <int, int>> score_vec(8);
    int score_index[5], sum = 0;
    
    for (int i = 1; i <= 8; i++) {
        int score;
        cin >> score;
        score_vec.push_back(make_pair(score, i));
    }
    
    sort(score_vec.begin(), score_vec.end(), comp);
    
    for (int i = 0; i <= 4 ; i++) {
        sum += score_vec[i].first;
        score_index[i] = score_vec[i].second;
    }
    cout << sum << endl;
    
    sort(score_index, score_index + 5);
    
    for (int i = 0; i < 5; i++) {
        cout << score_index[i] << " ";
    }
    cout << endl;
    return 0;
}

bool comp(pair<int, int> a, pair<int, int> b) {
    return a.first > b.first;
}