#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int result = 0;
    string input;
    cin >> input;

    bool is_minus = false;
    string temp_str;
    for (int i = 0; i <= input.length(); i++) {
        if (input[i] == '-' || input[i] == '+' || i == input.length()) {
            if (is_minus) {
                result -= stoi(temp_str);
                temp_str = "";
            }
            else {
                result += stoi(temp_str);
                temp_str = "";
            }
        }
        else {
            temp_str = temp_str + input[i];
        }

        if (input[i] == '-') {
            is_minus = true;
        }
    }
    cout << result << '\n';
    return 0;
}