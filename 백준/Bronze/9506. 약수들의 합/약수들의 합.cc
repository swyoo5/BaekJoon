#include <iostream>

using namespace std;

int main(void) {
    int num = 1;
    
    while (1) {
        int sum = 0;
        
        cin >> num;
        
        if (num == -1) break;
        
        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }
    
        if (sum == num) {
            cout << num << " = 1";
            for (int i = 2; i < num; i++) {
                if (num % i == 0) {
                    cout << " + " << i;
                }
            }
            cout << endl;
        } else {
            cout << num << " is NOT perfect." << endl;
        }
    }
    return 0;
}