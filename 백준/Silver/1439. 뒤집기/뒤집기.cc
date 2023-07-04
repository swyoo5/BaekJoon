#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
    string input;
    cin >> input;
    
    int result1 = 0, result2 = 0;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] != input[i + 1]) {
            if (input[i] == '0') {
                result1++;
            } else {
                result2++;
            }
        }
    }
    int result = min(result1, result2);
    cout << result << '\n';
    return 0;
}