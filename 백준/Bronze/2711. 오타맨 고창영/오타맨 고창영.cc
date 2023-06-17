#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int T;
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        int index;
        string word;
        
        cin >> index >> word;
        
        for (int i = 0; i < word.length(); i++) {
            if (i != index - 1) {
                cout << word[i];
            }
        }
        cout << "\n";
    }
    return 0;
}