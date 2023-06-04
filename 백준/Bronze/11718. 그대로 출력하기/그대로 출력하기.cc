#include <iostream>

using namespace std;

int main(void) {
    string sentence;
    
    while (1) {
        getline(cin, sentence);
        if (sentence == "")
            break;
        cout << sentence << endl;
    }
    return 0;
}