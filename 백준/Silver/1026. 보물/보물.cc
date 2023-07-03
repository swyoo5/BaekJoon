#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    
    int *a = new int[n];
    int *b = new int[n];
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    sort(a, a + n, greater<>());
    sort(b, b + n);
    
    int result = 0;
    for (int i = 0; i < n; i++) {
        result += a[i] * b[i];
    }
    cout << result << '\n';
    return 0;
}