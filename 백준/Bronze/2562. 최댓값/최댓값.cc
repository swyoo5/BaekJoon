#include <iostream>

using namespace std;

int main(void) {
    int num[10], index = 0, max = 0;
    
    for (int i = 0; i < 9; i++) {
        cin >> num[i];
        if (max < num[i]) {
            max = num[i];
            index = i;
        }
    }
    cout << num[index] << "\n" << index + 1 << endl;
    return 0;
}