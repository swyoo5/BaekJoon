#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    int n, begin, end;
    vector<pair<int, int>> time;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> begin >> end;
        time.push_back(make_pair(end, begin));
    }
    
    sort(time.begin(), time.end());
    
    int start_time = time[0].first;
    int result = 1;
    
    for (int i = 1; i < n; i++) {
        if (start_time <= time[i].second) {
            result++;
            start_time = time[i].first;
        }
    }
    cout << result << '\n';
    return 0;
}