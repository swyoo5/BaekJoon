#include <iostream>

using namespace std;

int main(void) {
    int n1, n2, n3, result = 0;
    
    cin >> n1 >> n2 >> n3;
    
    if (n1 > n2 && n1 > n3) {
        result = n1 * 100;
    } if (n2 > n1 && n2 > n3) {
        result = n2 * 100;
    } if (n3 > n1 && n3 > n2) {
        result = n3 * 100;
    } if (n1 == n2 || n1 == n3) {
        result = 1000 + n1 * 100;
    } if (n2 == n1 || n2 == n3) {
        result = 1000 + n2 * 100;
    } if (n3 == n1 || n3 == n2) {
        result = 1000 + n3 * 100;
    } if (n1 == n2 && n1 == n3) {
        result = 10000 + n1 * 1000;
    }
    
    cout << result << endl;
    return 0;
}