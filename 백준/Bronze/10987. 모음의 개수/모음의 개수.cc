#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int result = 0;
    string word;
    
    cin >> word;
    
    for (int i = 0; i < word.length(); i++) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
            result++;
        }
    }    
    cout << result << endl;
    return 0;
}