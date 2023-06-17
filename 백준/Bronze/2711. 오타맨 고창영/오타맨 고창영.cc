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
        
        for (int i = 0; i < index - 1; i++) {
            cout << word[i];
        }
        
        for (int i = index; i < word.length(); i++) {
            cout << word[i];
        }
        
        cout << "\n";
        
    }
    return 0;
}