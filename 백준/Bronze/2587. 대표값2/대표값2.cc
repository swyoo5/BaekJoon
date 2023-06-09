#include <iostream>

using namespace std;

int main(void) {
    int num[5], average = 0, median;
    
    for (int i = 0; i < 5; i++) {
        cin >> num[i];
        average += num[i] / 5;
    }
    
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (num[i] > num[j]) {
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    median = num[2];
    
    cout << average << "\n" << median << endl;
    return 0;
}