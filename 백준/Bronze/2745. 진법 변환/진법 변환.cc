#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    string number;
    int base, result = 0, length;
    
    cin >> number >> base;
    length = number.length();
    
    for (int i = 0; i < number.length(); i++) {
        if (number[i] >= 'A' && number[i] <= 'Z') {
            result += (int) (number[i] - 'A' + 10) * pow(base, length - 1 - i);
        } else if (number[i] >= '0' && number[i] <= '9') {
            result += (int) (number[i] - '0') * pow(base, length - 1 - i);
        }
    }
    cout << result << endl;
    return 0;
}