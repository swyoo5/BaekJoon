#include <iostream>

using namespace std;

int main(void) {
    int num, base;
    int i;
    int converted[10000000];
    
    cin >> num >> base;
    for (i = 0; num / base != 0; i++) {
        converted[i] = num % base;
        num /= base;
    }
    converted[i] = num;
    
    for (int j = i; j >= 0; j--) {
        if (converted[j] < 10) 
            cout << converted[j];
        else
            cout << (char) (converted[j] - 10 + 'A');
    }
    cout << "\n";
    return 0;
}