#include <iostream>

using namespace std;

int main(void) {
    int N, index = 0;
    cin >> N;
    
    for (int i = 666; ; i++) {
        int temp = i;
        
        while (temp > 0) {
            if (temp % 1000 == 666) {
                index++;
                if (index == N) {
                    cout << i << endl;
                    return 0;
                }
                break;
            } else {
                temp /= 10;
            }
        }
    }
}