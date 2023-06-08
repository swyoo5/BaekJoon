#include <iostream>

using namespace std;

int main(void) {
    
    while (1) {   
        int side[3], max = 0;
        cin >> side[0] >> side[1] >> side[2];
        
        if (side[0] == 0 && side[1] == 0 && side[2] == 0) {
            break;
        }
        
        for (int i = 0; i < 3; i++) {
            if (max < side[i]) max = side[i];
        }
        
        if (max < side[0] + side[1] + side[2] - max) {
            if (side[0] == side[1] && side[1] == side[2]) {
                cout << "Equilateral\n";
            } else if (side[0] == side[1] || side[1] == side[2] || side[2] == side[0]) {
                cout << "Isosceles\n";
            } else if (side[0] != side[1] && side[1] != side[2] && side[2] != side[0]){
                cout << "Scalene\n";
            }
        } else {
            cout << "Invalid\n";
        }
    }
    return 0;
}