#include <iostream>

using namespace std;

int num[201][201];

int main(void) {
    int n, k;
    cin >> n >> k;
    
    for (int i = 0; i <= k; i++) {
        num[1][i] = i;
    }
    
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            num[i][j] = (num[i - 1][j] + num[i][j - 1]) % 1000000000;
        }
    }
    
    cout << num[n][k] << '\n';
    return 0;
}