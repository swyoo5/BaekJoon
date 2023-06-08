#include <iostream>

using namespace std;

int main(void) {
    int side[3], max = 0, sum = 0;
    
    cin >> side[0] >> side[1] >> side[2];
    for (int i = 0; i < 3; i++) {
        sum += side[i];
        if (max < side[i]) {
            max = side[i];
        }
    }
    
    if (max < sum - max) {
        cout << sum << endl;
    } else {
        cout << 2 * (sum - max) - 1 << endl;
    }
    return 0;
}