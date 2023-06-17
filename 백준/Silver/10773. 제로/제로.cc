#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int T;
    vector<int> num_vector;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        int num;
        cin >> num;
        if (num != 0) {
            num_vector.push_back(num);
        } else {
            num_vector.pop_back();
        }
    }
    int result = 0;
    
    for (int i = 0; i < num_vector.size(); i++) {
        result += num_vector[i];    
    }
    cout << result << endl;
    return 0;
}