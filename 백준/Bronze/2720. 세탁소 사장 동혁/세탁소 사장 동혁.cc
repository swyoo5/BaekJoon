#include <iostream>

using namespace std;

int main(void) {
    int T, coin[4] = {25, 10, 5, 1};
    
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        int money;
        cin >> money;
        
        for (int j = 0; j < 4; j++) {
            cout << money / coin[j] << " ";
            money %= coin[j];
        }
        cout << endl;
    }
    return 0;
}