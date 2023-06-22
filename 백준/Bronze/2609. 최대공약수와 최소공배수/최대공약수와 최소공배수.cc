#include <iostream>

using namespace std;

int main(void) {
    int n1, n2;
    cin >> n1 >> n2;
    
    int temp_n1 = n1, temp_n2 = n2;
    
    while (temp_n2 != 0) {
        int temp = temp_n1 % temp_n2;
        temp_n1 = temp_n2;
        temp_n2 = temp;
    }
    
    int gcd = temp_n1;
    int lcm = n1 * n2 / gcd;
    
    cout << gcd << '\n' << lcm << '\n';
    return 0;
}