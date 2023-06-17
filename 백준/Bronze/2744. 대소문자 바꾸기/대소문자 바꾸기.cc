#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string word;

    cin >> word;
    for (int i = 0; i < word.length(); i++) {
        if (word[i] >= 'a' && word[i] <= 'z') {
            word[i] =  word[i] - 'a' + 'A';
        }
        else {
            word[i] = word[i] - 'A' + 'a';
        }
    }
    cout << word << endl;
    return 0;
}