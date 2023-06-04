#include <iostream>

using namespace std;

int main(void) {
    int T, repeat;
    int i, j, k;
    char word[21];
    char *p = word;
    
    cin >> T;
    
    for (i = 0; i < T; i++) {
        cin >> repeat >> word;
        for (j = 0; word[j] != '\0'; j++) {
            for (k = 0; k < repeat; k++) {
                cout << word[j];
            }
        }
        cout << "\n";
    }
    
    return 0;
}