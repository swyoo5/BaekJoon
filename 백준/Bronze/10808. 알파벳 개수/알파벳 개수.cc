#include <iostream>

using namespace std;

int main(void) {
    string word;
    int alphabet[26] = {0};
    
    cin >> word;
    
    for (int i = 0; i < word.length(); i++) {
        int index = (int) word[i] - 'a';
        alphabet[index]++;
    }
    
    for (int i = 0; i < 26; i++) {
        cout << alphabet[i] << " ";
    }
    cout << endl;
    return 0;
}