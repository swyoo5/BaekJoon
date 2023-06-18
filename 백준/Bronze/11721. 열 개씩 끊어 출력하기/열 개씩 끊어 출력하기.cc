#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string word;
    
    cin >> word;
    for (int i = 0; i < word.length(); i++) {
        cout << word[i];
        if (i % 10 == 9) {
            cout << "\n";
        }   
    }
    cout << "\n";
    return 0;
}