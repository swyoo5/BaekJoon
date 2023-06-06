#include <iostream>

#define MAX 101

using namespace std;

int main(void) {
    int matrix[MAX + 1][MAX + 1] = {0};
    int row, col, element;
    int i, j, k;
    
    cin >> row >> col;
    
    for (i = 0; i < 2; i++) {
        for (j = 0; j < row; j++) {
            for (k = 0; k < col; k++) {
                cin >> element;
                matrix[j][k] += element;
            }
        }
    }
    
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}