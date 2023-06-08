#include <iostream>

using namespace std;

int main(void) {
    int N, num, prime_count = 0;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        int factor_count = 0;
        
        cin >> num;
        for (int j = 1; j <= num; j++) {
            if (num % j == 0) {
                factor_count++;
            }
        }
        
        if (factor_count == 2) {
            prime_count++;
        }
    }
    cout << prime_count << endl;
    return 0;
}