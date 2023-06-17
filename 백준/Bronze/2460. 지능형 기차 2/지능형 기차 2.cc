#include <iostream>

using namespace std;

int main(void) {
    int result = 0, max = 0;
    
    for (int i = 0; i < 10; i++) {
        int unload, load;
        
        cin >> unload >> load;
        
        result = result + (load - unload);
        
        if (result > max) {
            max = result;
        }
    }
    cout << max << endl;
    return 0;
}