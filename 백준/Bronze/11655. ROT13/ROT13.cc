#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string sentence;

    getline(cin, sentence);

    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
            sentence[i] = (sentence[i] - 'A' + 13) % 26 + 'A';
        }
        else if (sentence[i] >= 'a' && sentence[i] <= 'z') {
            sentence[i] = (sentence[i] - 'a' + 13) % 26 + 'a';
        }
    }
    cout << sentence << endl;
    return 0;
}