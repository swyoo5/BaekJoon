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
        
        int temp = basket[basket_start - 1];
        basket[basket_start - 1] = basket[basket_end - 1];
        basket[basket_end - 1] = temp;
    }
    
    for (int i = 0; i < basket_num; i++) {
        cout << basket[i] << " ";
    }
    cout << "\n";
    return 0;
}