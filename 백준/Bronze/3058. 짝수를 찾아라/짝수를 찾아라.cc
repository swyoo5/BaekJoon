#include <iostream>

using namespace std;

int main(void) {
    int T;
    
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        int sum = 0, min = 100, num;
        
        for (int j = 0; j < 7; j++) {
            cin >> num;
            
            if (num % 2 == 0) {
                sum += num;
                if (min > num) min = num;
            }
        }
        cout << sum << " " << min << endl;
    }
    return 0;
}