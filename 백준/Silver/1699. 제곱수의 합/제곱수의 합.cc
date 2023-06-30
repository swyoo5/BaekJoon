#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int n;
    cin >> n;
        
    vector<int> square(n + 1);
    
    for (int i = 1; i <= n; i++) {
        square[i] = i;
    }
    
    for (int i = 2; i <= n; i++) {
        for (int j = 2; j * j <= i; j++) {
            square[i] = min(square[i], square[i - j * j] + 1);
        }
    }
    
    cout << square[n] << '\n';
    return 0;
}