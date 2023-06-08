#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int N, K, count = 1;
    
    cin >> N >> K;
    
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            if (K == count) {
                cout << i << endl;
                return 0;
            }
            count++;
        }
    }    
    cout << '0' << endl;
    return 0;
}