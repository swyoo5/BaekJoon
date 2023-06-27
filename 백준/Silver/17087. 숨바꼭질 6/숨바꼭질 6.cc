#include <iostream>

using namespace std;

int gcd(int a, int b);
int main(void) {
    int bro_num, my_position;
    
    cin >> bro_num >> my_position;
    int *bro_position = new int[bro_num];
    
    for (int i = 0; i < bro_num; i++) {
        cin >> bro_position[i];
        
        if (my_position > bro_position[i]) {
            bro_position[i] = my_position - bro_position[i];
        } else {
            bro_position[i] = bro_position[i] - my_position;
        }
    }
    
    int result = 0;
    if (bro_num == 1) {
        result = bro_position[0];
    } else if (bro_num == 2) {
        result = gcd(bro_position[0], bro_position[1]);
    } else {
        result = gcd(bro_position[0], bro_position[1]);
        
        for (int i = 2; i < bro_num; i++) {
            result = gcd(result, bro_position[i]);
        }
    }
    cout << result << '\n';
    return 0;
}

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}