#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
    string input;
    cin >> input;
    
    int result1 = 0, result2 = 0;
    
    if (input[0] == '0') result1++;
    else result2++;
    
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '0' && input[i + 1] == '1') {
            result2++;
        }
        
        if (input[i] == '1' && input[i + 1] == '0') {
            result1++;
        }
    }
    int result = min(result1, result2);
    cout << result << '\n';
    return 0;
}