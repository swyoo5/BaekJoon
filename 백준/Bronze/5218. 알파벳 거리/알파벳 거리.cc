#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int T;
    
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        string word1, word2;
        
        cin >> word1 >> word2;
        
        cout << "Distances: ";
        for (int i = 0; i < word1.length(); i++) {
            if (word1[i] <= word2[i]) {
                cout << (int) word2[i] - word1[i] << " ";
            } else {
                cout << (int) word2[i] - word1[i] + 26 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}