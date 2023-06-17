#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int T, result;
    
    cin >> T;
    while (T--) {
        int score[5];
        for (int i = 0; i < 5; i++) {
            cin >> score[i];
        }
        
        sort(score, score + 5);
        
        if (score[3] - score[1] >= 4) {
            cout << "KIN" << endl;
        } else {
            result = score[1] + score[2] + score[3];
            cout << result << endl;
        }
    }
    return 0;
}