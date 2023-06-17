#include <iostream>

using namespace std;

int main(void) {
    int T;
    
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        int number, index = 0;
        cin >> number;
        
        while (number > 0) {
            if (number % 2 == 1) {
                cout << index << " ";
            } 
            index++;
            number /= 2;
        }
    }
    cout << endl;
    return 0;
}