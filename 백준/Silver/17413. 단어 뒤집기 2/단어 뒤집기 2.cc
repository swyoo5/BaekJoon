#include <iostream>
#include <string>
#include <stack>

using namespace std;

void stackPrint(stack<char> &s);

int main(void) {
    stack<char> s;
    string str;
    getline(cin, str);
    
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '<') {
            stackPrint(s);
            
            while (1) {
                cout << str[i];
                if (str[i] == '>') {
                    break;
                }
                i++;
            }
            
        } else if (str[i] == ' ') {
            stackPrint(s);
            cout << ' ';
        } else {
            s.push(str[i]);
        }
    }
    stackPrint(s);
    return 0;
}

void stackPrint(stack<char> &s) {
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }
}