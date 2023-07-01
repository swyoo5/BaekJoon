#include <iostream>

#define MOD 10007
#define NUM_LENGTH 1000
#define LAST_DIGIT 10

using namespace std;

int main(void) {
    int n;
    cin >> n;
    
    int case_num[NUM_LENGTH + 1][LAST_DIGIT + 1] = {0};
    
    for (int i = 0; i < LAST_DIGIT; i++) {
        case_num[1][i] = 1; // 길이가 1이고 마지막자리수가 i(0 ~ 9)
    }
    
    for (int i = 2; i <= NUM_LENGTH; i++) {
        for (int j = 0; j < LAST_DIGIT; j++) {
            case_num[i][j] = case_num[i - 1][j] + case_num[i][j - 1];
            case_num[i][j] %= MOD;
        }
    }
    
    int result = 0;
    for (int i = 0; i < LAST_DIGIT; i++) {
        result += case_num[n][i];
    }
    
    cout << result % MOD << '\n';
    return 0;
}