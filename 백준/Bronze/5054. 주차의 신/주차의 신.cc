#include <iostream>

using namespace std;

int main(void) {
    int T;
    cin >> T;
    
    while (T--) {
        int store_num, max = 0, min = 100;
        cin >> store_num;
        
        for (int i = 0; i < store_num; i++) {
            int location;
            cin >> location;
            
            if (max < location) {
                max = location;
            }
            
            if (min > location) {
                min = location;
            }
        }
        int result = 2 * (max - min);
        cout << result << endl;
    }
    return 0;
}