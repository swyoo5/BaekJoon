#include <iostream>

using namespace std;

int main(void) {
    int input;
    cin >> input;
    
    if (input % 10 != 0) {
        cout << -1 << '\n';
        return 0;
    }
    
    int microwave[3] = {300, 60, 10};
    int result[3] = {0, 0, 0};
    for (int i = 0; i < 3; i++) {
        while (input >= microwave[i]) {
            input -= microwave[i];
            result[i]++;
        }
    }
    
    for (int i : result) {
        cout << i << ' ';
    }
    return 0;
}