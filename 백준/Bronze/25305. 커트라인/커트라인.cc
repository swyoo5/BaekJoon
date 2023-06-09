#include <iostream>

using namespace std;

int main(void) {
    int N, prize;
    int *score = new int[N];
    
    cin >> N >> prize;
    
    for (int i = 0; i < N; i++) {
        cin >> score[i];
    }
    
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (score[i] < score[j]) {
                int temp = score[i];
                score[i] = score[j];
                score[j] = temp;
            }
        }
    }
    
    cout << score[prize - 1] << endl;
    delete[] score;
    
    return 0;
}