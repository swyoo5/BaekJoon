#include <iostream>

using namespace std;

int main(void) {
    int n, result = 0;
    
    cin >> n;
    
    while (n) {
        result += n;
        n--;
    }
    
    cout << result << endl;
    return 0;
}