#include <iostream>

using namespace std;

int main(void) {
    int T;
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        int participant, seat;
        
        cin >> participant >> seat;
        int *seat_num = new int[seat];
        int result = participant;
        
        for (int i = 0; i < participant; i++) {
            int num;
            cin >> num;
            seat_num[num - 1] = 1;
        }
        
        for (int i = 0; i < seat; i++) {
            if (seat_num[i] == 1) {
                result--;
            }
        }
        cout << result << endl;
    }
    return 0;
}