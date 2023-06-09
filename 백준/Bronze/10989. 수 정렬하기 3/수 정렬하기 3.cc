#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    int num[10001] = {0};
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        int input;
        cin >> input;
        num[input]++;        
    }
    
    for (int i = 1; i < 10001; i++) {
        for (int j = 0; j < num[i]; j++) {
            cout << i << "\n";
        }
    }
    return 0;
}