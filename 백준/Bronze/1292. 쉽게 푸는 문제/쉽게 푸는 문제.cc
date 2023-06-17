#include <iostream>

using namespace std;

int main(void) {
    int A, B, diff = 1, num = 0, result = 0;
    cin >> A >> B;
    
    
    for (int i = A; i <= B; i++) {
        while (1) {
            if (i > num && i <= num + diff) {
                result += diff;
                break;
            } else {
                num += diff;
                diff++;
            }
        }
    }
    cout << result << endl;
    return 0;
}