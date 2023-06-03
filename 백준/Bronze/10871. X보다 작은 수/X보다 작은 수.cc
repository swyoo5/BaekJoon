#include <iostream>

using namespace std;

int main(void) {
    int N, X;
    int num[N];
    
    cin >> N >> X;
    
    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }
    
    for (int i = 0; i < N; i++) {
        if (X > num[i]) {
            cout << num[i] << ' ';
        }
    }
    cout << endl;
    return 0;
}