#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main(void) {
    string word;
    int length, duplicate = 0, max = 0, index;
    int alphabet[26] = {0};

    cin >> word;
    
    length = word.length();
    
    for (int i = 0; i < length; i++) {
        word[i] = toupper(word[i]);
        alphabet[(int) (word[i] - 'A')]++;
    }
    
    for (int i = 0; i < 26; i++) {
        if (alphabet[i] > max) {
            max = alphabet[i];
            index = i;
        }
    }
    
    for (int i = 0; i < 26; i++) {
        if (alphabet[i] == max) {
            duplicate++;
        }
    }
    
    if (duplicate > 1) {
        cout << '?';
    } else {
        cout << (char) (index + 'A');
    }
    return 0;
}