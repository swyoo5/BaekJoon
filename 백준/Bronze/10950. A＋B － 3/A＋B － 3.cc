#include <iostream>

using namespace std;

int main(void) {
    int T, n1, n2;
    
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        cin >> n1 >> n2;
        cout << n1 + n2 << endl;
    }
    
    return 0;
}