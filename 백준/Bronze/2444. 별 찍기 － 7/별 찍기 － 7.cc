#include <iostream>

using namespace std;

int main(void) {
    int N;
    int i, j;
    
    cin >> N;
    
    for (i = 0; i < N; i++) {
        for (j = 0; j < N - 1 - i; j++) {
            cout << " ";
        }
        for (j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    
    for (i = N - 2; i >= 0; i--) {
        for (j = 1; j <= N - 1 - i; j++) {
            cout << " ";
        }
        for (j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}