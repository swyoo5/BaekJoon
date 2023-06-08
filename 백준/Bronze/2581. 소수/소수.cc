#include <iostream>

using namespace std;

int main(void) {
    int n1, n2, sum_prime = 0, index = 0, first_prime;
    
    cin >> n1 >> n2;
    for (int i = n1; i <= n2; i++) {
        int factor_count = 0;
        
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                factor_count++;
            }
        }
        
        if (factor_count == 2) {
            if (index == 0) {
                first_prime = i;
                index++;
            }
            sum_prime += i;
        }
    }
    
    if (index == 0) {
        cout << "-1" << endl;
    } else {
        cout << sum_prime << "\n" << first_prime << endl;
    }
    return 0;
}