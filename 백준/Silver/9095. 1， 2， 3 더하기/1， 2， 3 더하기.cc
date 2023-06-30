#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int T;
    cin >> T;
    
    while (T--) {
        int n;
        cin >> n;
        
        vector<int> num(n + 1);
        num[1] = 1;
        num[2] = 2;
        num[3] = 4;
        
        for (int i = 4; i <= n; i++) {
            num[i] = num[i - 1] + num[i - 2] + num[i - 3];
        }
        
        cout << num[n] << '\n';
    }
    return 0;
}