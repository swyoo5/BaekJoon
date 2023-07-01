#include <iostream>
#include <string>
#include <list>

using namespace std;

int main(void) {
    string input;
    cin >> input;

    list<char> sentence;
    for (char c : input) {
        sentence.push_back(c);
    }

    int command_num;
    cin >> command_num;

    list<char>::iterator cursor = sentence.end();

    while (command_num--) {
        int length = sentence.size();

        char command;
        cin >> command;

        switch (command) {
        case 'L':
            if (cursor != sentence.begin()) {
                cursor--;
            }
            break;
        case 'D':
            if (cursor != sentence.end()) {
                cursor++;
            }
            break;
        case 'B':
            if (cursor != sentence.begin()) {
                cursor--;
                cursor = sentence.erase(cursor);
            }
            break;
        case 'P':
            char add;
            cin >> add;

            sentence.insert(cursor, add);
            break;
        }
    }

    for (char c : sentence) {
        cout << c;
    }
    cout << '\n';
    return 0;
}