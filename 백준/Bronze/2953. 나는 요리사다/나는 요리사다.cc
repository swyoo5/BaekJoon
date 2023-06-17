#include <iostream>

using namespace std;

int main(void) {
    int max = 0, index;
    
    for (int i = 1; i <= 5; i++) {
        int score1, score2, score3, score4, sum;
        cin >> score1 >> score2 >> score3 >> score4;
        
        sum = score1 + score2 + score3 + score4;
        
        if (max < sum) {
            max = sum;
            index = i;
        }
    }
    cout << index << " " << max << endl;
    return 0;
}