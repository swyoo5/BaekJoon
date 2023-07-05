#include <iostream>

using namespace std;

int main(void) {
    int self_number[10001];
    for (int i = 1; i <= 10000; i++) {
        self_number[i] = i;
    }

    for (int i = 1; i <= 10000; i++) {
        int temp = i;
        int digit_sum = i;

        while (temp != 0) {
            digit_sum += temp % 10;
            temp /= 10;
        }

        if (digit_sum >= 1 && digit_sum <= 10000) {
            self_number[digit_sum] = 0;
        }
    }

    for (int i = 1; i <= 10000; i++) {
        if (self_number[i] == 0) {
            continue;
        }
        cout << self_number[i] << '\n';
    }
    return 0;
}