#include <iostream>

using namespace std;

int main(void) {
    int coin_num, total;
    
    cin >> coin_num >> total;
    int *coin_arr = new int[coin_num];
    
    for (int i = coin_num - 1; i >= 0; i--) {
        cin >> coin_arr[i];
    }
    
    int result = 0;
    
    for (int i = 0; i < coin_num; i++) {
        if (total < coin_arr[i]) {
            continue;
        }
        
        result += total / coin_arr[i];
        total %= coin_arr[i]; 
    }
    
    cout << result << endl;
    return 0;
}