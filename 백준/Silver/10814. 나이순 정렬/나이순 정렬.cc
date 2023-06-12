#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool com(pair<int, string> p1, pair<int, string> p2);

int main(void) {
    int N;
    vector<pair<int, string>> v;
    
    cin >> N;
    for (int i = 0; i < N; i++) {
        int age;
        string name;
        
        cin >> age >> name;
        v.push_back(make_pair(age, name));
    }
    
    stable_sort(v.begin(), v.end(), com);
    for (int i = 0; i < N; i++) {
        cout << v[i].first << " " << v[i].second << "\n"; 
    }
    return 0;
}

bool com(pair<int, string> p1, pair<int, string> p2) {
    if (p1.first != p2.first) {
        return p1.first < p2.first;
    } 
    return false;
}