#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool com(pair<int, int> p1, pair<int, int> p2);

int main(void) {
    int n, x, y;
    vector<pair<int, int>> v;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        v.push_back(make_pair(x,y));
    }
    
    sort(v.begin(), v.end(), com);
    for (int i = 0; i < n; i++) {
        cout << v[i].first << " " << v[i].second << "\n";
    }
    
    return 0;
}

bool com(pair<int, int> p1, pair<int, int> p2) {
    if (p1.first == p2.first) {
        return p1.second < p2.second;
    } else {
        return p1.first < p2.first;
    }
}