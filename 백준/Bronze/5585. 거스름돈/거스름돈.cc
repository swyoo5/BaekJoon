#include <iostream>

using namespace std;

int main(void) {
    int money;
    cin >> money;
    
    money = 1000 - money;
    
    int result = 0;
    result += money / 500;
    money %= 500;
    result += money / 100;
    money %= 100;
    result += money / 50;
    money %= 50;
    result += money / 10;
    money %= 10;
    result += money / 5;
    money %= 5;
    result += money;
    
    cout << result;
    return 0;
}