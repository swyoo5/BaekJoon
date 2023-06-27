#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string base_2;
    cin >> base_2;
    
    while (base_2.length() % 3 != 0) {
        base_2 = '0' + base_2;
    }
    
    for (int i = 0; i < base_2.length(); i += 3) {
        int digit = (base_2[i] - '0') * 4 + (base_2[i + 1] - '0') * 2 + (base_2[i + 2] - '0') * 1;
        cout << digit;
    }
    cout << '\n';
    return 0;
}