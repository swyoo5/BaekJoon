#include <iostream>

using namespace std;

int main(void) {
    int A, B, C;
    int number[10] = {0};
    
    cin >> A >> B >> C;
    int result = A * B * C;
    
    while (result > 0) {
        int index = result % 10;
        number[index]++;
        result /= 10;
    }
    
    for (int i : number) {
        cout << i << endl;
    }
    
    return 0;
}