#include <iostream>

using namespace std;

int main(void) {
    int angle1, angle2, angle3;
    
    cin >> angle1 >> angle2 >> angle3;
    
    if (angle1 + angle2 + angle3 == 180) {
        if (angle1 == 60 && angle2 == 60 && angle3 == 60) {
            cout << "Equilateral\n";
        } else if (angle1 == angle2 || angle2 == angle3 || angle3 == angle1) {
            cout << "Isosceles\n";
        } else {
            cout << "Scalene\n";
        }
    } else {
        cout << "Error\n";
    }
    
    return 0;
}