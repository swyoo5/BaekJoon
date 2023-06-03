#include <iostream>

using namespace std;

int main(void) {
    int T;
    char word[1001];
    char *p;
    
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        cin >> word;
        p = word;
        cout << *p;
        
        while (*p != '\0') {
            p++;
        }
        p--;
        cout << *p << endl;
    }
    
    return 0;
}