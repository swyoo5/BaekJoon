#include <iostream>

using namespace std;

int main(void) {
    int day, night, height, result = 0;
    
    cin >> day >> night >> height;
    
    result = (height - night - 1) / (day - night) + 1;
    cout << result << endl;
    
    return 0;
}