#include <iostream>

using namespace std;

int main(void) {
    int num;
    cin >> num;
    
    int result = 0;
    for (int i = 1; i <= num; i++) {
        if (i % 125 == 0) {
            result += 3;
            continue;
        }
        
        if (i % 25 == 0) {
            result += 2;
            continue;
        }
        
        if (i % 5 == 0) {
            result += 1;
            continue;
        }
    }
    cout << result << '\n';
    return 0;
}