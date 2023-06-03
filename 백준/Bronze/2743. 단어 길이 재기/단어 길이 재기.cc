#include <iostream>

using namespace std;

int main(void) {
    int length = 0;
    char word[101];
    char *p = word;
    
    cin >> word;
    
    while (*p++ != '\0') {
        length++;
    }
    
    cout << length << endl;
    return 0;
}