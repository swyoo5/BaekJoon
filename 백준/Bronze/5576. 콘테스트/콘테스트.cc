#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b);
    
int main(void) {
    int score1[10], score2[10];
    
    for (int i = 0; i < 10; i++) {
        cin >> score1[i];
    }
    
    for (int j = 0; j < 10; j++) {
        cin >> score2[j];
    }
    
    sort(score1, score1 + 10, compare);
    sort(score2, score2 + 10, compare);
    
    int result1, result2;
    
    for (int i = 0; i < 3; i++) {
        result1 += score1[i];
        result2 += score2[i];
    }
    cout << result1 << " " << result2;
    return 0;
}

bool compare(int a, int b) {
    return a > b;
}