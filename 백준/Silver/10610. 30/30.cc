#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void) {
    string n;
    cin >> n;

    int length = n.length();
    int digit_sum = 0;
    int* num = new int[length];
    bool zero = false;
    for (int i = 0; i < length; i++) {
        num[i] = n[i];
        digit_sum += (int) num[i] - '0';
        if (num[i] == '0') {
            zero = true;
        }
    }

    if (!zero || digit_sum % 3 != 0) {
        cout << -1 << '\n';
        return 0;
    }

    sort(n.begin(), n.end(), greater<>());
    for (char i : n) {
        cout << i;
    }
    cout << '\n';
    return 0;
}