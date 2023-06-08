#include <iostream>

using namespace std;

int main(void) {
    int N;
    
    cin >> N;
    for (int i = 1; i < N; i++) {
        int digit_sum = i;
        int temp_i = i;
        
        while (temp_i != 0) {
            digit_sum += temp_i % 10;
            temp_i /= 10;
        }
        
        if (digit_sum == N) {
            cout << i << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}