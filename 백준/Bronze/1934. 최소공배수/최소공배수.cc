#include <iostream>

using namespace std;

int main(void) {
    int T;
    cin >> T;
    
    while (T--) {
        int a, b;
        cin >> a >> b;
        
        int temp_a = a, temp_b = b;
        
        if (a < b) {
            int temp = a;
            a = b;
            b = temp;
        }
        
        while (temp_b != 0) {
            int temp = temp_a % temp_b;
            temp_a = temp_b;
            temp_b = temp;
        }
        
        int gcd = temp_a;
        int lcm = a * b / gcd;
        
        cout << lcm << '\n';
    }
    return 0;
}