#include <iostream>

#define MOD 9901

using namespace std;

int num[100001][3];

int main(void) {
    int n;
    cin >> n;
    
    num[1][0] = 1;
    num[1][1] = 1;
    num[1][2] = 1;
    
    for (int i = 2; i <= n; i++) {
        num[i][0] = (num[i - 1][1] + num[i - 1][2]) % MOD;
        num[i][1] = (num[i - 1][0] + num[i - 1][2]) % MOD;
        num[i][2] = (num[i - 1][0] + num[i - 1][1] + num[i - 1][2]) % MOD;
    }
    
    int result = (num[n][0] + num[n][1] + num[n][2]) % MOD;
    cout << result << '\n';
    
    return 0;
}