#include <iostream>

using namespace std;

int main(void) {
    long long n;
    cin >> n;
    
    long long sum = 0;
    int result = 0;
    for (long long i = 1; ; i++) {
        sum = sum + i;
        result++;
        if (sum > n) {
            result--;
            cout << result << '\n';
            return 0;
        }
    }
}