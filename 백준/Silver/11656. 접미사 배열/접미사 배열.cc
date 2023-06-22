#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(string s1, string s2);

int main(void) {
    string word;
    cin >> word;
    
    vector<string> word_vec;
    word_vec.reserve(word.length());
    
    for (int i = 0; i < word.length(); i++) {
        string sub = word.substr(i, word.length() - i);
        word_vec.push_back(sub);
    }
    
    sort(word_vec.begin(), word_vec.end(), comp);
    
    for (int i = 0; i < word.length(); i++) {
        cout << word_vec[i] << '\n';
    }
    return 0;
}

bool comp(string s1, string s2) {
    return s1 < s2;
}