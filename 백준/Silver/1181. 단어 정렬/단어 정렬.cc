#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool com(string a, string b);

int main(void) {
    int n;
    cin >> n;
    
    string *word = new string[n];
    
    for (int i = 0; i < n; i++) {
        cin >> word[i];
    }
    
    sort(word, word + n, com);
    
    for (int i = 0; i < n; i++) {
        if (word[i] == word[i + 1]) {
            continue;
        }
        cout << word[i] << "\n";
    }
    delete[] word;
    return 0;
}

bool com(string a, string b) {
    if (a.length() == b.length()) {
        return a < b;
    } else {
        return a.length() < b.length();
    }
}