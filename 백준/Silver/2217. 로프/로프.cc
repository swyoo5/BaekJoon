#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    
    int *max_weight = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> max_weight[i];
    }
    
    sort(max_weight, max_weight + n);
    int result = 0;
    
    result = max_weight[0] * n;
    for (int i = 1; i < n; i++) {
        if (result < max_weight[i] * (n - i)) {
            result = max_weight[i] * (n - i);
        }
    }
    cout << result << '\n';
    return 0;
}