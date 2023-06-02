#include <iostream>

using namespace std;

int main(void) {
    int A, B, temp, B_one, B_ten, B_hundred;
    
    cin >> A >> B;
    
    temp = B;
    B_one = temp % 10;
    temp /= 10;
    B_ten = temp % 10;
    temp /= 10;
    B_hundred = temp % 10;
    
    cout << A * B_one << endl;
    cout << A * B_ten << endl;
    cout << A * B_hundred << endl;
    cout << A * B << endl;
    
    return 0;
}