#include <iostream>

using namespace std;

int main(void) {
    int basket_num, try_num, basket_start, basket_end, ball_num;
    
    cin >> basket_num >> try_num;
    int ball_arr[basket_num] = {0};
    
    for (int i = 0; i < try_num ; i++) {
        cin >> basket_start >> basket_end >> ball_num;
        for (int j = basket_start - 1; j <= basket_end - 1; j++) {
            ball_arr[j] = ball_num;
        }
    }
    
    for (int i = 0; i < basket_num; i++) {
        cout << ball_arr[i] << " ";
    }
    cout << "\n";
    return 0;
}