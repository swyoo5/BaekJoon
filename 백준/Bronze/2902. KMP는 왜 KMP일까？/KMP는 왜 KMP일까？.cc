#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string word;
    
    cin >> word;
    
    string result;
    result += word[0];
    
    for (int i = 0; i < word.length(); i++) {
        if (word[i] == '-') {
            result = result + word[i + 1];
        }
    }
    
    cout << result << endl;
    return 0;
}