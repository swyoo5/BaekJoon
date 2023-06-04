#include <iostream>

using namespace std;

int main(void) {
    char word[101];
    char* p = word;
    int alphabet[26], index = 0;

    cin >> word;

    for (int i = 0; i < 26; i++) {
        alphabet[i] = -1;
    }

    while (*p != '\0') {
        if (alphabet[*p - 'a'] == -1) {
            alphabet[*p - 'a'] = index++;
        } else {
            index++;
        }
        p++;
    }

    for (int i = 0; i < 26; i++) {
        cout << alphabet[i] << " ";
    }
    cout << "\n";
    return 0;
}