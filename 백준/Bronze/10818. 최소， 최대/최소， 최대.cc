#include <iostream>

using namespace std;

int main(void) {
    int N, max = -1000000, min = 1000000;
    
    cin >> N;
    int num[N];
    
    for (int i = 0; i < N; i++) {
        cin >> num[i];    
        if (max < num[i]) {
            max = num[i];
        }
        if (min > num[i]) {
            min = num[i];
        }
    }
    cout << min << " " << max << endl;
    return 0;
}