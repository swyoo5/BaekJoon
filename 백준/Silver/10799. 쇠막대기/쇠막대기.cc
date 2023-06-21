#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(void) {
    int result = 0;
    stack<char> s;
    string parenthesis;
    cin >> parenthesis;

    for (int i = 0; i < parenthesis.length(); i++) {
        if (parenthesis[i] == '(') {
            if (parenthesis[i + 1] == ')') {
                result += s.size();
                i += 1;
            }
            else {
                s.push(parenthesis[i]);
            }
        } else {
            result++;
            s.pop();
        }
    }
    cout << result << '\n';
    return 0;
}