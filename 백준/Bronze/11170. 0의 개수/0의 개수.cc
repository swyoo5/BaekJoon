#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int T;
    
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        int start, end, result = 0;
        
        cin >> start >> end;
        for (int i = start; i <= end; i++) {
            string num_to_string = to_string(i);
            for (int j = 0; j < num_to_string.length(); j++) {
                if (num_to_string[j] == '0') {
                    result++;
                }
            }
        }
        cout << result << endl;
    }
    return 0;
}