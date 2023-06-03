#include <iostream>

using namespace std;

int main(void) {
    int attend[30] = {0}, submit;
    
    for (int i = 0; i < 28; i++) {
        cin >> submit;
        attend[submit - 1] = 1;
    }
    
    for (int i = 0; i < 30; i++) {
        if (attend[i] == 0) {
            cout << i + 1 << endl;
        }
    }
    return 0;
}