#include <iostream>
#include <algorithm>

using namespace std;

int cost[1001][3];
int accumulate[1001][3];

int main(void) {
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> cost[i][j];
        }
    }
    
    for (int i = 1; i <= n; i++) {
        accumulate[i][0] = min(accumulate[i - 1][1], accumulate[i - 1][2]) + cost[i][0];
        accumulate[i][1] = min(accumulate[i - 1][0], accumulate[i - 1][2]) + cost[i][1];
        accumulate[i][2] = min(accumulate[i - 1][0], accumulate[i - 1][1]) + cost[i][2];
    }
    
    cout << min({accumulate[n][0], accumulate[n][1], accumulate[n][2]}) << '\n';
    return 0;
}