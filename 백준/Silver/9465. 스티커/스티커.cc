#include <iostream>
#include <algorithm>

#define MAX 100000

using namespace std;

int main(void) {
    int T;
    cin >> T;
    
    int score[2][MAX + 1] = {0};
    int accum[2][MAX + 1] = {0};
    
    while (T--) {
        int col;
        cin >> col;
        
        for (int i = 0; i < 2; i++) {
            for (int j = 1; j <= col; j++) {
                cin >> score[i][j];   
            }
        }
        
        accum[0][1] = score[0][1];
        accum[1][1] = score[1][1];
        
        for (int i = 2; i <= col; i++) {
            accum[0][i] = max(max(accum[0][i - 2], accum[1][i - 2]), accum[1][i - 1]) + score[0][i];
            accum[1][i] = max(max(accum[0][i - 2], accum[1][i - 2]), accum[0][i - 1]) + score[1][i];
        }
        
        int result = max(accum[0][col], accum[1][col]);
        cout << result << '\n';
    }
    
    return 0;
}