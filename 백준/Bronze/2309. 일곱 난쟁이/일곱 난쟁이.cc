#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int total_height = 0, temp1, temp2;
    int height[9];
    
    for (int i = 0; i < 9; i++) {
        cin >> height[i];
        total_height += height[i];
    }
    
    sort(height, height + 9);
    
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (height[i] + height[j] == total_height - 100) {
                temp1 = i;
                temp2 = j;
            }
        }
    }
    
    for (int i = 0; i < 9; i++) {
        if (i != temp1 && i != temp2) {
            cout << height[i] << endl;
        }
    }
    return 0;
}