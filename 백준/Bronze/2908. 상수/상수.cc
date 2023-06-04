#include <iostream>

using namespace std;

int main(void) {
    int a, b, index = 0;
    int A[3], B[3];
    
    cin >> a >> b;
    while (a != 0) {
        A[index] = a % 10;
        B[index] = b % 10;
        a /= 10;
        b /= 10;
        index++;
    }
    
    a = A[0] * 100 + A[1] * 10 + A[2];
    b = B[0] * 100 + B[1] * 10 + B[2];
    
    if (a > b) {
        cout << a << endl;
    } else if (a < b) {
        cout << b << endl;
    }
    return 0;
}