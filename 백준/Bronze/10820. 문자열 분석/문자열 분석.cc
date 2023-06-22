#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string sentence;
    
    while (getline(cin, sentence)) {
        int lower = 0, upper = 0, number = 0, blank = 0;
        
        for (int i = 0; i < sentence.length(); i++) {
            if (sentence[i] >= 'a' && sentence[i] <= 'z') {
                lower++;
            } else if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
                upper++;
            } else if (sentence[i] >= '0' && sentence[i] <= '9') {
                number++;
            } else if (sentence[i] == ' ') {
                blank++;
            }
        }
        
        printf("%d %d %d %d\n", lower, upper, number, blank);
    }
    return 0;
}