#include <iostream>

using namespace std;

int main(void) {
    int a = 1, b = 1, c = 1;
    
    int index = 1;
    while (1) {
        int result = 0;
        cin >> a >> b >> c;
        
        if (a == 0 && b == 0 && c == 0) {
            return 0;
        }
        result = a * (c / b) + (a < c % b ? a : c % b);
        printf("Case %d: %d\n", index++, result);
    }
    return 0;
}