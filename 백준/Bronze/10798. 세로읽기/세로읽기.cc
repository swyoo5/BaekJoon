#include <iostream>

using namespace std;

char matrix[5][16];

int main(void) {
    int i, j;
    
    for (i = 0; i < 5; i++) {
        cin >> matrix[i];
    }
    
    for (i = 0; i < 15; i++) {
        for (j = 0; j < 5; j++) {
            if (matrix[j][i] != '\0')
                cout << matrix[j][i];
        }
    }
    cout << endl;
    return 0;
}