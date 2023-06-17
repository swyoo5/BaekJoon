#include <iostream>

using namespace std;

int main(void) {
    int average = 0, max = 0, max_index;
    int num[100] = {0};
    
    for (int i = 0; i < 10; i++) {
        int number;
        cin >> number;
        
        average += number / 10;
        num[number / 10]++;
    }
    
    for (int i = 1; i < 100; i++) {
        if (max < num[i]) {
            max = num[i];
            max_index = i;
        }
    }
    
    int frequent_number = max_index * 10;
    cout << average << "\n" << frequent_number;
    return 0;
}