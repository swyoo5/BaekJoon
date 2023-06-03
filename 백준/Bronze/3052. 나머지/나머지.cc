#include <iostream>

using namespace std;

int main(void) {
    int num, remainder[42] = {0}, result = 0;
    
    for (int i = 0; i < 10; i++) {
        cin >> num;
        remainder[num % 42] = 1;
    }
    
    for (int i = 0; i < 42; i++) {
        if (remainder[i] == 1) {
            result++;
        }
    }
    cout << result << endl;
    return 0;
}