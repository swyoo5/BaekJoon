#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int number, num_length, length, total_length = 0;
    string num_to_str;
    
    cin >> number >> length;
    
    num_to_str = to_string(number);
    num_length = num_to_str.length();
    while (1) {
        for (int i = 0; i < num_length; i++) {
            cout << num_to_str[i];
            total_length++;
            
            if (total_length == num_length * number) {
                cout << endl;
                return 0;
            }
            
            if (total_length == length) {
                cout << endl;
                return 0;
            }
        }
    }
}