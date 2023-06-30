#include <iostream>
#include <vector>

#define MOD 1000000009
#define MAX 1000001

using namespace std;

int main(void) {
    int T;
    cin >> T;
    
    long long num[MAX] = {0, 1, 2, 4};
    
    while (T--) {
        int n;
        cin >> n;
           
        for (int i = 4; i <= n; i++) {
            num[i] = (num[i - 1] + num[i - 2] + num[i - 3]) % MOD;
        }
        
        cout << num[n] << '\n';
    }
    return 0;
}