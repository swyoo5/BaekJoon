#include <iostream>

using namespace std;

int main(void) {
    char word[1001];
    int index;
    
    cin >> word >> index;
    
    cout << word[index - 1] << endl;
    
    return 0;
}