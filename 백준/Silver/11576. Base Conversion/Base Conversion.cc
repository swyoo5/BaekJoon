#include <iostream>
#include <cmath>
#include <stack>

using namespace std;

int main(void) {
    int A, B;
    cin >> A >> B;
    
    int length;
    cin >> length;
    
    int decimal = 0;
    for (int i = 0; i < length; i++) {
        int digit;
        cin >> digit;
        
        decimal += digit * pow(A, length - 1 - i);
    }
    
    stack<int> s;
    while (decimal != 0) {
        s.push(decimal % B);
        decimal /= B;
    }
    
    while (!s.empty()) {
        cout << s.top() << ' ';
        s.pop();
    }
    return 0;
}