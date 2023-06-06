#include <iostream>

using namespace std;

int main(void) {
    int N, count = 1, multiple = 1, result = 1;

    cin >> N;
    if (N == 1){
        cout << count << "\n";
        return 0;
    }
    
    while (1) {
        if (N > count) {
            count += 6 * multiple;
            result++;
            multiple++;
        }
        else {
            cout << result << endl;
            return 0;
        }
    }
}