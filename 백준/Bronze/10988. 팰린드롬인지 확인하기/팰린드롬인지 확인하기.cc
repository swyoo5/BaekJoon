#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string word;
    int length;
    
    cin >> word;
    length = word.length();
    
    for (int i = 0; i < length; i++) {
        if (word[i] != word[length - 1 - i]) {
            cout << 0 << endl;
            return 0;
        }
    }
    cout << 1 << endl;
    return 0;
}