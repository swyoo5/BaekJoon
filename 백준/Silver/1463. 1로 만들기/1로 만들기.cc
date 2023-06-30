#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    int input;
    cin >> input;
    
    vector<int> number(input + 1);
    
    number[1] = 0;
    for (int i = 2; i <= input; i++) {
        number[i] = number[i - 1] + 1;
        if (i % 3 == 0) {
            number[i] = min(number[i], number[i / 3] + 1);
        }
        
        if (i % 2 == 0) {
            number[i] = min(number[i], number[i / 2] + 1);
        }
    }
    cout << number[input] << '\n';
    return 0;
}