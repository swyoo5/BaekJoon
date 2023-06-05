#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void) {
    string word;
    vector<string> croatian = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    int index;
    
    cin >> word;
    
    for (int i = 0; i < croatian.size(); i++) {
        while (1) {
            index = word.find(croatian[i]);
            if (index == string::npos) {
                break;
            }
            word.replace(index, croatian[i].length(), "#");
        }
    }
    cout << word.length();
    return 0;
}