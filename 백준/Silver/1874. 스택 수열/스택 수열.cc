#include <iostream>
#include <stack>

using namespace std;

int main(void) {
    int n;
    stack<int> s;
    string result = "";
    
    cin >> n;
    
    int last_number = 0;
    while (n--) {
        int input_number;
        
        cin >> input_number;
        
        if (input_number > last_number) {
            while (input_number > last_number) {
                s.push(++last_number);
                result += '+';
            }
            s.pop();
            result += '-';
        } else {
            bool yes_no = false;
            if (!s.empty()) {
                if (input_number == s.top()) {
                    yes_no = true;
                }
                s.pop();
                result += '-';
            }    
        
            if (!yes_no) {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    for (auto& s : result) {
        cout << s << '\n';
    }
    return 0;
}