#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    
    vector<long long> num(n + 1);
    
    num[1] = 1;
    num[2] = 1;
    
    for (int i = 3; i <= n; i++) {
        num[i] = num[i - 1] + num[i - 2]; 
    }
    
    cout << num[n] << '\n';
    
    return 0;
}