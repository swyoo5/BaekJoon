#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    
    int *time = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> time[i];
    }
    sort(time, time + n);
    
    int result = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            result += time[j];
        }
    }
    cout << result << '\n';
    return 0;
}