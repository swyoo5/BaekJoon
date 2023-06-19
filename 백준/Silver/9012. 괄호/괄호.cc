#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void) {
    int N;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        string parentheses;
        stack<char> s;
        
        cin >> parentheses;
        bool valid = true;
        
        for (int j = 0; j < parentheses.length(); j++) {
            if (parentheses[j] == '(') {
                s.push('(');
            } else if (parentheses[j] == ')') {
                if (s.empty() || s.top() != '(') {
                    valid = false;
                    break;
                }
                s.pop();
            }
        }
        
        if (valid && s.size() == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}