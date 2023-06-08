#include <iostream>

using namespace std;

int main(void) {
    int card_num, limit, result = 0, sum;
    int i, j, k;
    int card_arr[100];
    
    cin >> card_num >> limit;
    for (i = 0; i < card_num; i++) {
        cin >> card_arr[i];    
    }
    
    for (i = 0; i < card_num - 2; i++) {
        for (j = i + 1; j < card_num - 1; j++) {
            for (k = j + 1; k < card_num; k++) {
                sum = card_arr[i] + card_arr[j] + card_arr[k];
                
                if ((sum <= limit) && (result < sum)) {
                    result = sum;
                }
                
                if (result == limit) {
                    cout << result << endl;
                    return 0;
                }
            }
        }
    }
    cout << result << endl;
    return 0;
}