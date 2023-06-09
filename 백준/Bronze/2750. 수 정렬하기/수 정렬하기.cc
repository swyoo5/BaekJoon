#include <iostream>

using namespace std;

int main(void) {
    int N;
    int num[1000];
    
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }
    
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (num[i] > num[j]) {
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    
    for (int i = 0; i < N; i++) {
        cout << num[i] << "\n";
    }
    return 0;
}