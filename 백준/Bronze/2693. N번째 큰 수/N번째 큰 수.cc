#include <iostream>
#include <algorithm>

#define N 3

using namespace std;

bool comp(int a, int b);

int main(void) {
    int T;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        int num[10];
        for (int j = 0; j < 10; j++) {
            cin >> num[j];
        }
        
        sort(num, num + 10, comp);
        cout << num[N - 1] << endl;
    }
    return 0;
}

bool comp(int a, int b) {
    return a > b;
}