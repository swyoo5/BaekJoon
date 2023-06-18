#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string sentence;

    while (1) {
        getline(cin, sentence);
        if (sentence == "END") {
            return 0;
        }
        
        for (int i = sentence.length() - 1; i >= 0; i--) {
            cout << sentence[i];
        }
        cout << endl;
    }
}