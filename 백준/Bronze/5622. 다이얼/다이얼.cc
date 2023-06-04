#include <iostream>

using namespace std;

int main(void) {
    char alphabet[16];    
    char *p = alphabet;
    int result = 0;
    
    cin >> alphabet;
    
    while (*p != '\0') {
        switch(*p) {
            case 'A': case 'B': case 'C':
                result += 3;
                break;
            case 'D': case 'E': case 'F':
                result += 4;
                break;
            case 'G': case 'H': case 'I':
                result += 5;
                break;
            case 'J': case 'K': case 'L':
                result += 6;
                break;
            case 'M': case 'N': case 'O':
                result += 7;
                break;
            case 'P': case 'Q': case 'R': case 'S':
                result += 8;
                break;
            case 'T': case 'U': case 'V':
                result += 9;
                break;
            case 'W': case 'X': case 'Y': case 'Z':
                result += 10;
                break;
        }
        p++;
    }
    cout << result << endl;
    return 0;
}