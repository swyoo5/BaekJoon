#include <iostream>

using namespace std;

int main(void) {
    int a, b;
    cin >> a >> b;
    
    int result = 1;
    while (b != a) {
        if (b % 2 == 0) {
            b /= 2;
            result++;
        } else if (b % 10 == 1) {
            b = (b - 1) / 10;
            result++;
        } else {
            cout << -1 << '\n';
            return 0;
        }
        
        if (b < a) {
            cout << -1 << '\n';
            return 0;
        }
    }
    cout << result << '\n';
    return 0;
}