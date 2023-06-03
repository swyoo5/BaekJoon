#include <iostream>

using namespace std;

int main(void) {
    int N, result = 0;
    char num;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> num;
        result += num - '0';
    }
    cout << result << endl;
    return 0;
}