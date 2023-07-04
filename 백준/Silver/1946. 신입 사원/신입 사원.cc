#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    while (n--) {
        int num;
        cin >> num;

        vector<pair<int, int>> score;
        for (int i = 0; i < num; i++) {
            int a, b;
            cin >> a >> b;

            score.push_back(make_pair(a, b));
        }

        sort(score.begin(), score.end());

        int result = 1;
        int temp = 0;
        for (int i = 1; i < num; i++) {
            if (score[temp].second > score[i].second) {
                result++;
                temp = i;
            }
        }
        cout << result << '\n';
    }
    return 0;
}