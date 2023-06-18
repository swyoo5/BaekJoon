#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int num;

    cin >> num;
    cin.ignore();

    for (int i = 0; i < num; i++) {
        char sentence[31];
        cin.getline(sentence, 31, '\n');

        if (sentence[0] <= 'z' && sentence[0] >= 'a') {
            sentence[0] = sentence[0] - 'a' + 'A';
        }

        cout << sentence << endl;
    }
    return 0;
}