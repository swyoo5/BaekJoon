#include <iostream>

using namespace std;

int main(void) {
    int basket_num, try_num, basket_start, basket_end;
    
    cin >> basket_num >> try_num;
    int basket[basket_num];
    
    for (int i = 0; i < basket_num; i++) {
        basket[i] = i + 1;
    }
    
    for (int i = 0; i < try_num; i++) {
        cin >> basket_start >> basket_end;
        for (int j = basket_start - 1; j <= (basket_end + basket_start - 2) / 2; j++) {
            int temp = basket[j];
            basket[j] = basket[basket_start + basket_end - 2 - j];
            basket[basket_start + basket_end - 2 - j] = temp;
        }
    }
    
    for (int i = 0; i < basket_num; i++) {
        cout << basket[i] << " ";
    }
    cout << endl;
    return 0;
}