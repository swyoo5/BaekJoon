#include <iostream>

using namespace std;

int main(void) {
    int N;
    
    cin >> N;
    
    for (int i = 2; i <= N; i++) {
        while (N % i == 0) {
            cout << i << "\n";
            N /= i;
        }
    }
    return 0;
}