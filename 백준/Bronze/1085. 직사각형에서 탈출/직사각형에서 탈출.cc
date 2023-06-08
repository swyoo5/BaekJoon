#include <iostream>

using namespace std;

int main(void) {
    int coord[4];
    
    cin >> coord[0] >> coord[1] >> coord[2] >> coord[3];
    
    coord[2] = coord[2] - coord[0];
    coord[3] = coord[3] - coord[1];
    
    int min = coord[0];
    
    for (int i = 1; i < 4; i++) {
        if (coord[i] < min) {
            min = coord[i];
        }
    }
    cout << min << endl;
    return 0;
}