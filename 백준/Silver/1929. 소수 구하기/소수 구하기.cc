#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    int a, b;
    cin >> a >> b;
    
    if (a == 1) a++;
    for (int i = a; i <= b; i++) {
        if (i == 2 || i == 3) {
            cout << i << '\n';
            continue;
        }
        
        bool is_prime = true;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }
        
        if (is_prime) {
            cout << i << '\n';
        }
    }
    return 0;
}