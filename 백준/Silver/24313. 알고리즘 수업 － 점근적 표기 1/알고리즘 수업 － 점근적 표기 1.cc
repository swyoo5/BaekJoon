#include <iostream>

using namespace std;

int main(void) {
    int a1, a0, c, n0;
    cin >> a1 >> a0 >> c >> n0;
    
    cout << ((a1 * n0 + a0 <= c * n0) && (c - a1 >= 0));
    
    return 0;
}