#include <iostream>

using namespace std;

int main(void) {
    int cheap_burger = 2000, cheap_drink = 2000;
    
    for (int i = 0; i < 3; i++) {
        int price;
        cin >> price;
        
        if (cheap_burger > price) {
            cheap_burger = price;
        }
    }
    
    for (int i = 0; i < 2; i++) {
        int price;
        cin >> price;
        
        if (cheap_drink > price) {
            cheap_drink = price;
        }
    }
    int result = cheap_burger + cheap_drink - 50;
    cout << result << endl;
}