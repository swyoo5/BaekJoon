#include <iostream>

using namespace std;

int main(void) {
    int total_price, total_num, price, num, sum = 0;
    
    cin >> total_price >> total_num;
    
    for (int i = 0; i < total_num; i++) {
        cin >> price >> num;
        sum += price * num;
    }
    
    if (total_price == sum) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}