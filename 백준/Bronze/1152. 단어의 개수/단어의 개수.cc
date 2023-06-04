#include <iostream>

using namespace std;

int main(void) {
    char sentence[1000001];
    char *p;
    int word = 1, length = 0;

    cin.getline(sentence, 1000001);
    p = sentence;
    
    while (*p != '\0') {
        if (*p == ' ') {
            word++;
        }
        p++;
    }

    if (*(p - 1) == ' ') {
        word--;
    }

    p = sentence;
    if (*p == ' ') {
        word--;
    }

    cout << word << endl;
    return 0;
}