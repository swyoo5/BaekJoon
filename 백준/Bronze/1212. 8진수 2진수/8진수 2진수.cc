#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string base_8;
    string base_2[8] = { "000", "001", "010", "011", "100", "101", "110", "111" };

    cin >> base_8;
    for (int i = 0; i < base_8.length(); i++) {
        int index = base_8[i] - '0';

        if (i == 0) {
            cout << stoi(base_2[index]);
        }
        else {
            cout << base_2[index];
        }
    }

    cout << '\n';
    return 0;
}