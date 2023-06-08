#include <iostream>

using namespace std;

int main(void) {
    int x[3], y[3], result_x, result_y;
    
    for (int i = 0; i < 3; i++) {
        cin >> x[i] >> y[i];    
    }
    
    if (x[0] == x[1]) {
        result_x = x[2];
    } else if (x[1] == x[2]) {
        result_x = x[0];
    } else if (x[2] == x[0]) {
        result_x = x[1];
    }
    
    if (y[0] == y[1]) {
        result_y = y[2];
    } else if (y[1] == y[2]) {
        result_y = y[0];
    } else if (y[2] == y[0]) {
        result_y = y[1];
    }
    
    cout << result_x << " " << result_y << endl;
    return 0;
}