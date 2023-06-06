#include <iostream>

using namespace std;

int main(void) {
    int index, row, col, max;
    index = row = col = max = 0;
    
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            int number;
            cin >> number;
            if (max < number) {
                max = number;
                row = i;
                col = j;
            }
        }
    }
    cout << max << endl;
    cout << row + 1 << " " << col + 1;
    return 0;
}