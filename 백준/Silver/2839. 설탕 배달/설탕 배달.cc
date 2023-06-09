#include <iostream>

using namespace std;

int main(void) {
    int N, possible = 0, result;
    cin >> N;
    
    for (int i = 0; i <= N / 5 + 1; i++) {
        for (int j = 0; j <= N / 3 + 1; j++) {
            if (5 * i + 3 * j == N) {
                result = i + j;
                possible = 1;
            }
        }
    }
    
    if (possible == 1) {
        cout << result << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}