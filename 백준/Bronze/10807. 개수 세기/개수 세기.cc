#include <iostream>

using namespace std;

int main(void) {
    int N, v, result = 0;
    int num[N];
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }
    
    cin >> v;
    
    for (int i = 0; i < N; i++) {
        if (v == num[i]) {
            result++;
        }
    }
    cout << result << endl;
    return 0;
}