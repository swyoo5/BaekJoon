#include <iostream>

using namespace std;

int result;

int main(void) {
    int coord[101][101] = { 0 };
    int N, x, y;
    int i, j, k;

    cin >> N;
    for (i = 0; i < N; i++) {
        cin >> x >> y;
        for (j = (x - 1); j < (x - 1) + 10; j++) {
            for (k = (y - 1); k < (y - 1) + 10; k++) {
                if (coord[j][k] == 1)
                    continue;
                coord[j][k] = 1;
                result++;
            }
        }
    }
    cout << result << endl;
    return 0;
}