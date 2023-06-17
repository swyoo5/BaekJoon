#include <iostream>

using namespace std;

int main(void) {
    int factor_num;
    cin >> factor_num;
    
    int max = 0, min = 1000000;
    
    for (int i = 0; i < factor_num; i++) {
        int factor;
        cin >> factor;
        
        if (max < factor) {
            max = factor;
        }
        
        if (min > factor) {
            min = factor;
        }
    }
    
    int result = min * max;
    cout << result << endl;
    
    return 0;
}