#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    long N, result;
    
    cin >> N;
    result = pow(pow(2, N) + 1, 2);
    
    cout << result << endl;
    
    return 0;
}