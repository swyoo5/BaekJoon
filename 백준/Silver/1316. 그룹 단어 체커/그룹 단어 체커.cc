#include <iostream>

using namespace std;

int main(void) {
    int N, no_group = 0, result;
    int i, j;
    string word;

    cin >> N;
    for (i = 0; i < N; i++) {
        cin >> word;

        int alphabet[26] = { 0 };

        for (j = 0; j < word.length(); j++) {
            if (word[j] != word[j + 1]) {
                if (alphabet[(int)(word[j] - 'a')] == 1) {
                    no_group++;
                    break;
                }
                alphabet[(int)(word[j] - 'a')] = 1;
            }
        }
    }
    result = N - no_group;
    cout << result << endl;
    return 0;
}