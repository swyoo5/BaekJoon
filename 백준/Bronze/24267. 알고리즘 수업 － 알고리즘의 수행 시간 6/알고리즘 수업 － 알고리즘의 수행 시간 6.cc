#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    
    cout << (long) n * (n - 1) * (n - 2) / 6 << "\n" << 3 << endl;
    
    return 0;
}