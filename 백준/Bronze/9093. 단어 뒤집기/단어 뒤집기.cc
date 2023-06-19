#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int T;
    string sentence;

    cin >> T;
    cin.ignore(); // 첫 번째 개행 문자 제거

    for (int i = 0; i < T; i++) {
        getline(cin, sentence);
        string word = "";

        for (int j = 0; j < sentence.length(); j++) {
            if (sentence[j] == ' ') {
                cout << word << ' ';
                word = "";
            }
            else {
                word = sentence[j] + word;
            }
        }

        cout << word << endl;
    }
    return 0;
}