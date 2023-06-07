#include <iostream>

using namespace std;

int main(void) {
    int N, index = 0, diff = 1, numerator, denominator;

    cin >> N;
    while (1) {
        if (N <= index + diff) {
            if (diff % 2 == 0) {
                numerator = N - index;
                denominator = (diff + 1) - (N - index);
                break;
            } else {
                numerator = (diff + 1) - (N - index);
                denominator = N - index;
                break;
            }
        }
        index += diff;
        diff++;
    }
    cout << numerator << '/' << denominator << endl;
    return 0;
}