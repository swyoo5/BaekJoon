#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int num[9], sum = 0, temp1, temp2;
    
    for (int i = 0; i < 9; i++) {
        cin >> num[i];
        sum += num[i];
    }
    
    sort(num, num + 9);
    
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (num[i] + num[j] == sum - 100) {
                temp1 = i;
                temp2 = j;
            }
        }
    }
    
    for (int i = 0; i < 9; i++) {
        if (i != temp1 && i != temp2) {
            cout << num[i] << endl;
        }
    }
    return 0;
}