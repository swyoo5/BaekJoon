#include <iostream>

using namespace std;

int main(void) {
    int num, index = 0;
    int N[10];
    
    cin >> num;
    
    while (num != 0) {
        N[index++] = num % 10;
        num /= 10;
    }
    
    for (int i = 0; i < index - 1; i++) {
        for (int j = i + 1; j < index; j++) {
            if (N[i] < N[j]) {
                int temp = N[i];
                N[i] = N[j];
                N[j] = temp;
            }
        }
    }
    
    for (int i = 0; i < index; i++) {
        cout << N[i];
    }
    return 0;
}