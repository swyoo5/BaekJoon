#include <iostream>

using namespace std;

int main(void) {
    int input_chess[6];
    int chess[6] = {1, 1, 2, 2, 2, 8};
    
    for (int i = 0; i < 6; i++) {
        cin >> input_chess[i];
        cout << chess[i] - input_chess[i] << " ";
    }
    cout << "\n";
    return 0;
}