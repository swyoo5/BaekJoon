#include <iostream>
#include <stack>

using namespace std;

int main(void) {
    stack <double> s;
    int n;
    cin >> n;
    
    string equation;
    cin >> equation;
    
    int *operand = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> operand[i];
    }
    
    for (auto x: equation) {
        double n1, n2;
        
        if (x >= 'A' && x <= 'Z') {
            s.push(operand[x - 'A']);
        } else {
            n2 = s.top();
            s.pop();
            n1 = s.top();
            s.pop();
            
            switch(x) {
                case '+':
                    s.push(n1 + n2);
                    break;
                case '-':
                    s.push(n1 - n2);
                    break;
                case '*':
                    s.push(n1 * n2);
                    break;
                case '/':
                    s.push(n1 / n2);
                    break;
            }
        }
    }
    cout << fixed;
    cout.precision(2);
    
    cout << s.top() << '\n';
    return 0;
}