#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int num;
    cin >> num;
    
    vector<int> number(num + 1);    
    
    number[1] = 1; // 2 * 1 타일 경우의 수
    number[2] = 2;
    
    for (int i = 3; i <= num; i++) {
        number[i] = (number[i - 1] + number[i - 2]) % 10007;
    }
    
    cout << number[num] << '\n';
    return 0;
}