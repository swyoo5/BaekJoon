#include <iostream>

using namespace std;

int main(void) {
    int N;
    double max = 0.0, sum = 0.0;
    
    cin >> N;
    double score[N];
    
    for (int i = 0; i < N; i++) {
        cin >> score[i];
        sum += score[i];
        if (max < score[i]) {
            max = score[i];
        }
    }
    
    cout << (100 / max) * sum / N << endl;
    return 0;
}