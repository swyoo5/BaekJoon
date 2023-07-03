#include <iostream>

using namespace std;

int main(void) {
    int money;
    cin >> money;
    
    money = 1000 - money;
    
    int money_arr[6] = {500, 100, 50, 10, 5, 1};
    int result = 0;
    
    for (int i = 0; i < 6; i++) {
        result += money / money_arr[i];
        money %= money_arr[i];
    }
    
    cout << result;
    return 0;
}