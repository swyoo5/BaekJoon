#include <iostream>

using namespace std;

int main(void) {
    int N, x, y, max_x = -10000, min_x = 10000, max_y = -10000, min_y = 10000;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> x >> y;
        if (x > max_x) max_x = x;
        if (x < min_x) min_x = x;
        
        if (y > max_y) max_y = y;
        if (y < min_y) min_y = y;
    }
    
    int width = max_x - min_x;
    int height = max_y - min_y;
    int result = width * height;
    
    cout << result << endl;
    return 0;
}