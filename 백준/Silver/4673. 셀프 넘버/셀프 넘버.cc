#include <iostream>

using namespace std;

int digit_sum(int num);

int main(void) {
    bool self_num[10001] = {false,};
    
    for (int i = 1; i <= 10000; i++) {
        int n = digit_sum(i);
        if (n <= 10000) {
            self_num[n] = true;
        }
    }
    
    for (int i = 1; i <= 10000; i++) {
        if (!self_num[i]) {
            cout << i << '\n';
        }
    }
    return 0;
}

int digit_sum(int num) {
    int sum = num;
    
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}