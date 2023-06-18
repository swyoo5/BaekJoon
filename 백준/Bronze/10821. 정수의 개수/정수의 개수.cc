#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string num;
    int result = 1;
    
    cin >> num;
    
    for (int i = 0; i < num.length(); i++) {
        if (num[i] == ',') {
            result++;
        }
    }
    cout << result << endl;
    return 0;
}